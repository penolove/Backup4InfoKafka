// eJy1U9uO2jAQ1fwJWvVhV0K5sLcWVUjmsigkS3cbWol9qQwx4CaxXXtCCF9fh4WW0lWrSlvZDx7P6Mw5Z2yjMqdAnnGs2u245DhfgQ_0eXZdw5jiu3Vgp5nbZqNT3cdqKquswSTejcBEM7x_0jinvfwu3nD2FcEf5InoIuIZNbci2c1dlLAHITTqbrKFWtySBVb5fTDVmHUSz1_0NOVioLeiHTTr4Oo54n1u_01kNFtMt3GA49kwxR73h6T3sd99unsZfF56k1iMt9QbkC5Jybis6zxogZX3xoP4IWq3Z1JmjArY3fknd_0CuZM7cVVIYpt2_0LEUmaWLcGDWjuYmxSLh0S6lTo_0icuUu5lG5CkYKQgtWduODIaRYjxcLACb6_1J0IQNZ8VyO40Y2D_0UOvDYKM0M4ZLYdE94ErqH1pe1VPgoHeDB9tokcky6AMWKmPvtbF0xbJh9JwkiW4WXKB_1U4cPlkzzkE4MHqdtWKc7sGBWn9UAOVUHrKZtQPHmqmN1PkvyjyX9Pskjdj4kRZ5X1mq8bO0eq_1y_1pryuHT78IvUfvtTP8TtLhl_0eSZ1f_1NXgfb86uzscShq7aF_1Y6JzC71HPL_0p3538Hk2lUBM


#include "./LoadedSwitch.h"
using namespace SPL::_Operator::DTree_Classifier_4;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::DTree_Classifier_4
#define MY_BASE_OPERATOR LoadedSwitch_Base
#define MY_OPERATOR LoadedSwitch$OP




MY_OPERATOR_SCOPE::MY_OPERATOR::MY_OPERATOR()
    : _on(lit$0), _shutdown(false)
{
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::prepareToShutdown() 
{
    AutoMutex am(_mutex);
    _shutdown = true;
    if (!_on)
      _cv.signal();    
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(Punctuation const & punct, uint32_t port)
{
    if (port != 0)
        return;
    AutoMutex am(_mutex);
    while(!_on && !_shutdown) 
        _cv.wait(_mutex);
    if (!_shutdown)
      submit(punct, 0);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(Tuple const & tuple, uint32_t port)
{
    AutoMutex am(_mutex);
    if (port==0) {
        while(!_on && !_shutdown) 
            _cv.wait(_mutex);
        if (!_shutdown)
          submit(tuple, 0);
    } else {
        const IPort1Type& iport$1 = static_cast<const IPort1Type&>(tuple);        
        bool newStatus = lit$1;
        if (_on != newStatus) {
            if (!_on) {
                _on = true;
                _cv.signal();
              } else
                _on = false;
        }
    }    
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::getCheckpoint(NetworkByteBuffer & opstate)
{
    AutoMutex am (_mutex);
    
    opstate.addBool (_on);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::restoreCheckpoint(NetworkByteBuffer & opstate)
{
    AutoMutex am (_mutex);
    
    _on = opstate.getBool();
}
static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("DTree_Classifier_4::LoadedSwitch",&initer));
    return true;
}

template<class T> static void initRTC (SPL::Operator& o, T& v, const char * n) {
    SPL::ValueHandle vh = v;
    o.getContext().getRuntimeConstantValue(vh, n);
}

MY_BASE_OPERATOR::MY_BASE_OPERATOR()
 : Operator() {
    PE & pe = PE::instance();
    uint32_t index = getIndex();
    initRTC(*this, lit$0, "lit$0");
    initRTC(*this, lit$1, "lit$1");
    addParameterValue ("initialStatus", SPL::ConstValueHandle(lit$0));
    addParameterValue ("status", SPL::ConstValueHandle(lit$1));
    (void) getParameters(); // ensure thread safety by initializing here
    $oportBitset = OPortBitsetType(std::string("011"));
}
MY_BASE_OPERATOR::~MY_BASE_OPERATOR()
{
    for (ParameterMapType::const_iterator it = paramValues_.begin(); it != paramValues_.end(); it++) {
        const ParameterValueListType& pvl = it->second;
        for (ParameterValueListType::const_iterator it2 = pvl.begin(); it2 != pvl.end(); it2++) {
            delete *it2;
        }
    }
}

void MY_BASE_OPERATOR::tupleLogic(Tuple const & tuple, uint32_t port) {
    switch(port) {
    }
}


void MY_BASE_OPERATOR::processRaw(Tuple const & tuple, uint32_t port) {
    tupleLogic (tuple, port);
    static_cast<MY_OPERATOR_SCOPE::MY_OPERATOR*>(this)->MY_OPERATOR::process(tuple, port);
}


void MY_BASE_OPERATOR::punctLogic(Punctuation const & punct, uint32_t port) {
}

void MY_BASE_OPERATOR::punctPermitProcessRaw(Punctuation const & punct, uint32_t port) {
    {
        punctNoPermitProcessRaw(punct, port);
    }
}

void MY_BASE_OPERATOR::punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port) {
    switch(punct) {
    case Punctuation::WindowMarker:
        punctLogic(punct, port);
        process(punct, port);
        break;
    case Punctuation::FinalMarker:
        punctLogic(punct, port);
        
        if (punct == Punctuation::FinalMarker) {
            process(punct, port);
            bool forward = false;
            {
                AutoPortMutex $apm($fpMutex, *this);
                $oportBitset.reset(port);
                if ($oportBitset.none()) {
                    $oportBitset.set(2);
                    forward=true;
                }
            }
            if(forward)
                submit(punct, 0);
            return;
        }
        process(punct, port);
        break;
    case Punctuation::DrainMarker:
    case Punctuation::ResetMarker:
    case Punctuation::ResumeMarker:
        break;
    case Punctuation::SwitchMarker:
        break;
    default:
        break;
    }
}

void MY_BASE_OPERATOR::processRaw(Punctuation const & punct, uint32_t port) {
    switch(port) {
    case 0:
        punctNoPermitProcessRaw(punct, port);
        break;
    case 1:
        punctNoPermitProcessRaw(punct, port);
        break;
    }
}



void MY_BASE_OPERATOR::checkpointStateVariables(NetworkByteBuffer & opstate) const {
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
}

bool MY_BASE_OPERATOR::hasStateVariables() const {
    return false;
}

void MY_BASE_OPERATOR::resetToInitialStateRaw() {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->resetToInitialState();
    }
    resetStateVariablesToInitialState();
}

void MY_BASE_OPERATOR::checkpointRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->checkpoint(ckpt);
    }
    checkpointStateVariables(ckpt);
}

void MY_BASE_OPERATOR::resetRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->reset(ckpt);
    }
    resetStateVariables(ckpt);
}



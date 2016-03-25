// eJy1U11v2jAU1f0nqNpDKyGS0M_0hCcl8FEFS1jbZJPoyGWLAS7A9_04YQfv2cABtj6qZJnewHX9_0rc885vjYqbWTIU45FqxXmHGdL8MC16xLOGg1nt7FQzOmwUa4fwqQZFNd_0nGxG_1nw4eHgKCu5_087efP_1phQfgTeRl2CIluybVoLM9ewZAbP5qsg0Q1o36i7haTDVn7QSj1_0NOVCobdEekkX_1tB1xXr99toNJ1PtuEQx9NBgl3uDUj3udd5uX8Vf5a7USjGW_0r2SYckZJyXpS40wep850L4GLRaUylTRgVUd97JHThLuWLOMs4M005P5iKVNDZOiJrRlQkxi7l0cqkTo_0iMOQu5kE5MkYKQgpWduODIaRoixczACb63J0IQNZ9myO41Y2D_0UOtBf6M0M4ZLYdFd4ErqH1re1FbgoKsJANtonsp82APMVMo_0aGPpikXN6BmJY13PuEDvpgwfLZn6IR0bPE7bsEy3Yc6sPqsBVlQdsOq2AcWbq7bVuZPkHUv6_1SWP2HkQZ6tVYa3Gy2Y1tfL_1mvK2dnjwi9R_1_0Fg_1n7_0xYPhlR_0r84q8G7_1uV2epwKKlV0b6w1j6F36OeX5Rz530H2GdVDt


#include "./LoadedSwitch.h"
using namespace SPL::_Operator::LabelStream1::DTree1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1
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
    instantiators_.insert(std::make_pair("LabelStream1::DTree1::LoadedSwitch",&initer));
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



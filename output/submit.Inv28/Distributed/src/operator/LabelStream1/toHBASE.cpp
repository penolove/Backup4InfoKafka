// eJyVUm1vmzAQlr_1mV1jVJoEU8ZYla92mEmvptoqyVTQf1i8RIR6xABvhYyyJ8t8HJqGd2lXZgYTv4bnz3XMni8yogGUM1oRcVRJEjmxkNc8InRiG2bywLqj5id7W5V0oHD9Of629ugrkWeCH428P3umN613X7uLMWJ28HrNJJ_0BfezJgc_1t249nBZiZ_1h7NUhvf37mP84_0vV4z9ia8c_15XcPs1EQ1p77_0YvwXKelWugjamp_0Z6Hwu08I4zBykELsF4jTIaWEkvGkw0YdthAioxHvsA8vIscd8kYtHW_1S8ap9KDJXIqdmcx_0NcjNUHxlCtWTCrEWZyiKKqZmIRJjLCCLEBaet4q3urBBl39YxoqMclWpe2wFujP3EmvbUh0aIcmSRzeNIwsXTryF_0Lgu_0JKQlHAJuKh4DE1w2viIQAiKlnG2otq_1RSCjMcypllFBNH2Kl9RBrz5XVldi6EYGmJNZ1_1F4RbR1Pp_0pkNZgqvbVtf2ptKfAW_163EEauEgeYFnv5_14FuNjfVzLKtFzgBrbf4OnTToDtcrllHN0s_174neD3QAhB4EoWIwOm7dP2fvtvMWr8z6iWDV3B6V03eezkFonqIqMXhzmCiynlC8vkdVc9wcLKTBo


#include "./toHBASE.h"
using namespace SPL::_Operator::LabelStream1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1
#define MY_BASE_OPERATOR toHBASE_Base
#define MY_OPERATOR toHBASE$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("LabelStream1::toHBASE",&initer));
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
    initRTC(*this, lit$2, "lit$2");
    initRTC(*this, lit$3, "lit$3");
    initRTC(*this, lit$4, "lit$4");
    initRTC(*this, lit$5, "lit$5");
    initRTC(*this, lit$6, "lit$6");
    (void) getParameters(); // ensure thread safety by initializing here
    $oportBitset = OPortBitsetType(std::string("01"));
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

void MY_BASE_OPERATOR::tupleLogic(Tuple & tuple, uint32_t port) {
    IPort0Type & iport$0 = static_cast<IPort0Type  &>(tuple);
    AutoPortMutex $apm($svMutex, *this);
    
{
    if ((SPL::int32(::SPL::spl_cast<SPL::int32, SPL::rstring >::cast(::SPL::Functions::String::tokenize(iport$0.get_message(), lit$2, (SPL::boolean)lit$3).at(lit$4)) % lit$1) == lit$0)) 
        {
            do { SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ temp = SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ(iport$0.get_message(), lit$5); submit (temp, lit$6); } while(0);
        }
}

}


void MY_BASE_OPERATOR::processRaw(Tuple & tuple, uint32_t port) {
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
                    $oportBitset.set(1);
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




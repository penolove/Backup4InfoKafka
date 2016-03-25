// eJytVG1P2zAQlr_1yKyzEh0RUzUtbtoUXKS1QtQ0MljIJpgmljdt6eXGwHUqL_0t_1nOEmbjoI0iUs_0_0M53j8_1P3ZklYT3lOMR8YVmdlHESAQPo4muA_1XpdEz9fJEhro_16cXrmB6SxaAz946Q8mve7VrbPA_0tNg_0fP7wF3Y_0NZ_06LVte_1jFbsX12f4uAPIyGN4_1O0FiDi_0C5Ov0_1sV_0Hjguodd3zcTpdfp2O_1hz4XT0_0PnbctgfTe6Xbo9fj7oB72Cja3d_0nLcfLt8Bn5tLXedO0Loazu_1sbrd5YRuZawMw7nF0MCZpzBEF7o1jWZGXnMgFZZzieFqDUpuExONHTXgGiiCP8yIixIxvhQindzcMIDg9aBUgHEXJ_077gSDrroGoH0mbkthEhIfLi3GbmNhzzhplbGrnlv4uURzfz6LQC2PogWaDNSIS0mZ8yRLVzMo8FZT7TXE6RFzGXpz4m2pzQgCXeGGlTMiWa73EPxCRGWWtlDYYTQtdX_1qB_0IAJU9uPrHhSyoROeQsuS0ZdpPOaYxEzoMkvL4iRAMV4ipTimPkX8MUKMeVOkqDUo6a5BpUquKvlWj_0U5eAIV5S1_0h4QhKhWWHbBJSIWnpxLYVFUoQTJ5Xa_1eaplMCC3SkPRD7B8E4mr6cb46gUYjXx4eqjvCd4OWstX2vzb9XPe4kmGqvzcssiR8HHtlvYsxKIZiXX3Lylwql14jFbz9K6s31m3LtuYT_0AqrHfE5zwUs_0uXzkRU5fbVtotVjyNJRhDlUsoPzbmsK6wrOZzhEil4ha7W32gNiIormBOX0ZzNCdszI5_0Qtp8oEosrz3jngaRKik7LIjI5t36e17D0wjjL1RqRRK7d9xqvbQs22z0S6E_0TxlCIGsqe1fFWLRhL74kZ_1AdlWO1D


#include "./createmap0.h"
using namespace SPL::_Operator::LabelStream1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR createmap0$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("LabelStream1::createmap0",&initer));
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
    state$attr = lit$5;
    SPLAPPTRC(L_DEBUG, "Variable: state$attr Value: " << state$attr,SPL_OPER_DBG);
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
    state$temp = ::SPL::Functions::String::tokenize(iport$0.get_message(), lit$0, (SPL::boolean)lit$1);
    if ((::SPL::Functions::Collections::size(state$temp) == lit$2)) 
        {
            {
                for (SPL::int32 id$k = 0; id$k < 13; id$k++) {
                    {
                        state$counter[state$attr.at(id$k)] = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(state$temp.at(id$k));
                    }
                }
            }
            do { SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF temp = SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF(lit$3, state$counter); submit (temp, lit$4); } while(0);
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
    opstate << state$counter;
    opstate << state$attr;
    opstate << state$temp;
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
    opstate >> state$counter;
    opstate >> state$attr;
    opstate >> state$temp;
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
    ckpt << state$counter;
    ckpt << state$attr;
    ckpt << state$temp;
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
    ckpt >> state$counter;
    ckpt >> state$attr;
    ckpt >> state$temp;
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
    state$counter = SPL::map<SPL::rstring, SPL::float64 >();
    state$attr = lit$5;
    SPLAPPTRC(L_DEBUG, "Variable: state$attr Value: " << state$attr,SPL_OPER_DBG);
    state$temp = SPL::list<SPL::rstring >();
}

bool MY_BASE_OPERATOR::hasStateVariables() const {
    return true;
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




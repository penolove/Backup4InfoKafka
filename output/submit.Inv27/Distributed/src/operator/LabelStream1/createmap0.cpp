// eJzVVltv2jAUll_17K6yqD4nKIAmXtulFCrSrgLQDQafRaaoCMTTNxVnslEvV_177YSSAsYdPU9mEGCZ_1P9vE5n79jQ3ynHFLLsehSVVshodgFMpCiTxXsl8uV6EuXPqo0UWce3Axqi_05w9KzbvjK8sv3j2WihPXf1AQ5u72q_03m51tKb9dKW3JO_15ZDXsjKej1aBNb8fXNm1Zcnj71Jbmd9rR_1ehbs1Z_03C_1awlb0Zb1r2otOd9q_0vunrS0v62V19_1dIdLDWrr923m5o2PNLq3g4HWFnZDapfjnvDgRQO7UWv2deWpD9y2IIqINSg6GCCQ4_0iAAx6uqq6hn_1GOwGhgeXNSpBbUwcbtFGDFyBZZFCarHAsQreWRJN2Dsgg4vdATremyPV3TwZyjU_0XQHYAxC5ibIyxgwwvxpQYszxaVWKkGiP_1zGe8upbzV4_0RMAM1cpOOQJayGDsuSOEkt1KW3hSvLBcRpeRjlqt_1IB1UHrGLKhGADLcy4D9kQEPTwpU5DmziGxNUmeEZrpgGNYCHPcSqhNWK5eNgfV5_1FSFwQcAL7GUPRm0jCXgOVZX7_0Bx6E2phj0Q2j1BVKbaRZ62QkGxWniH64CJCjBkSxBLkiilBIasPkWctnvJ9rCkUhLz_1FnYclBqEbbAJSITn59yxIoqQO2HtZd3LW6xNcZCEwbmHlnlgR6nJp3HvDMq1uHt4KBYsL3aatq3a_1b4pyrJBBeZT_1LFhkfjOw8RIzzoRZlLZ65NXVTYlk_1TaU8Lb7_001h24j25aJ4QvM6uI9L1CYqOaj_1Av8Miltk16C21zxKyMiC5Jw7FoUCmwg1mM9Ql_1h_1NFykCBl6IwpQg5Ba_0gt6mxk1Vksn23Z8KuJCYXfW_1ljLpbfO_0h6t_1PiQD9K35ssuFP4iTNxIu7SPGt53RejeeT_1rwFZyhVB_1PIUyl5Wdug_0pud1DwAF2GgJ0hcrucbXNntTcMGb8p558VeoCiLVzNuXgIa_0g85S0ZBgoplmUGKPp9xgZi8KppQOm4RmhyOTDV9EQU_0RQcMAEcD_0T6V_1pRJhsvFopzRHKUryF4qTAnX


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
    initRTC(*this, lit$6, "lit$6");
    initRTC(*this, lit$7, "lit$7");
    initRTC(*this, lit$8, "lit$8");
    initRTC(*this, lit$9, "lit$9");
    initRTC(*this, lit$10, "lit$10");
    initRTC(*this, lit$11, "lit$11");
    initRTC(*this, lit$12, "lit$12");
    initRTC(*this, lit$13, "lit$13");
    state$attr = lit$13;
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
                for (SPL::int32 id$k = 1; id$k < 14; id$k++) {
                    {
                        state$counter[state$attr.at(id$k)] = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(state$temp.at(id$k));
                    }
                }
            }
            do { SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 temp = SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4(lit$3, state$counter, state$temp.at(lit$4)); submit (temp, lit$5); } while(0);
        }
    else
        if ((::SPL::Functions::Collections::size(state$temp) == lit$6)) 
            {
                state$counter[lit$8] = lit$7;
                {
                    for (SPL::int32 id$k = 1; id$k < 14; id$k++) {
                        {
                            state$counter[state$attr.at(id$k)] = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(state$temp.at(SPL::int32(id$k - lit$9)));
                        }
                    }
                }
                do { SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 temp = SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4(lit$10, state$counter, lit$11); submit (temp, lit$12); } while(0);
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
    state$attr = lit$13;
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




// eJzVV1lzmzoUHr3mV9BOH_1A0N0Z4iZc0M9ixMzaYLNjJpC8ZbGRCWQvCNm773y_0rAxgvvUkeLkkm0pH06Sz6zpEcSztzsaIp2Gu1uq6DTR1AQPk_1EILPZ2fl6HfuGjOsmEZZtCxNmYlhWxfx7OXe1dDZy_0fUXOxZqNxBw6U9EijoNfCtMH_0gGIm1_0sIj4lTtui48uJb_0OLwRH62V_0FRTJrp1c3e1fJQpdzdWFXqUi9nbPiWMhyxX6a25yWLETqg_00_0csBum7l6o059VYSV0N2fngenTHeQr1k10_13LCCxyh3zPdBh2HG50zN2I1hbkxhx1NemKzY9V2P4Z3lNYP3rKK5mbrwekuXd5o8J9Ruxr1Gn_0ldLZlpc9_0y9UQbCU5lyI57Lj_1DnC38WEk91ROU5mrkQW7d1XheoH6uJyruyEznSq4we_1BW7PhpwakWPe6pVkN_0WjELlhNMm59ULW7QHTId9UeP61LGorkeD6fzp7UwwPz0WsVdBV4z3furzvf_0e_0FbkkwN1z2Lv5sxw5fqhFnuRJ4tqbFg8GuR6jEdRmX4HVM9mx_0YFZ6xb9e9xZB7hhLPjawbbjygpNFiJDS8zozpqki26QCgBhwsYvTFMCXkAOGWa7V00boIG65i4Ap9SoSdN8WDuASpfe6RKHnRXlPT1JBoZDsQ_0Cz8As_1jJbZPrCOXNJJd0ArfYhukzEgrsDUEm_0F6KpJqioMv0kYfJFxgX6hAVqtQRoMU1HYUo0mVrD6BqAre7vcIqVagVf0Yrc63tWpEItvBtmLIkay5PQ1SBTJYsBbSBRMrRROrRcJakbBeAHle4APYyAlB_0cXUUdkHQ6JeFsJ_1joBdSTHLS9NWHUucobJsymZZErEIDNNAQYWo_0H_0KZdqbE3REpgQ6sMPy8uuE8D9lTpBpZchPrVbY78cFx_1GrkqlpKOm8iA6Zou4pEStwJiP8HIgGV2TJ_14gQPvgOACqGg2w8Ogz6HgmBTANr4hRpAW7IwVKpHaqMNAdtdE8pdSZistDWNBbxjSjYoX3y5yTlbzKx4y9yJmkF7vsH_0jt8I_17Det_1_1iiFqI9FWkZ2Ozq9NK2tvmPl8c8ID285MCmzIpcgUYPJJJvGL2Et2AiPdireg24TjTnUFE2QgjWJSKbWJP8TyRdEQSZVelfgT_0JMGUQRAzLfQ1yBhJIyJATPE_0Pvb0AfRBX4EXWCOLmE2j912ANW_1VSJDyqC_0nndYcN6DyDt5Th6sV1lAv1hGiqalMs5LFqLmosBJ_1zcabdgRn_1HaLhpt_0PZmGtWLaHS_0j0a1HI2iqCQ9GYOkSoVhAHPNFHG9mmMbHbONzpahd7nzFjAwR8EtJ_17_0TRTNeM1WuyO3zZNJ8jizfFOxEBrMGWR4KSllI2oj7NpG2sHZnOrf_1_0I4NdvpoejW6A_0FREyed8GNOH7f5XmZgdzQhQ7pMkeir0VAzli7MPC_007KbfYpTu1_13DtaCSLnM_0nbR1I_0149WjRweJ3L9hpnJ_1jfwBg1a8gWNpzzMxuZTHhz1OeRFBiMtWK5iRA05UzpP3zc_00hOvviUlmvK6ZyygpH_025UlHOgXRB0tl2x77HeaGt_0xaQ0SX_01D_1rRwQwzmSbCBafvcD06MZf2hyRatA63j3F_1qnn_1OOnYj_0NRu4H2LU0dBHrSzj2jJEk_0zQ4crAedG99VU_0TYcnB6WG_1GwxfgsQIEDysE9tjqy_1Dt4NZ9HbY5_0EwF9MAm5Yy2yR_1CujIcUQZvUoCcOhPhPEW8A11YfvAxlq8p6_0oXEHbWEDHFhx6TQcqQSC5uu6BqHQmEP8C_1O0oBX


#include "./LatenStream.h"
using namespace SPL::_Operator::LabelStream1::DTree1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1
#define MY_BASE_OPERATOR LatenStream_Base
#define MY_OPERATOR LatenStream$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("LabelStream1::DTree1::LatenStream",&initer));
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
    initRTC(*this, lit$14, "lit$14");
    initRTC(*this, lit$15, "lit$15");
    initRTC(*this, lit$16, "lit$16");
    initRTC(*this, lit$17, "lit$17");
    initRTC(*this, lit$18, "lit$18");
    state$nodeReady = lit$17;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$18;
    SPLAPPTRC(L_DEBUG, "Variable: state$ruleReady Value: " << state$ruleReady,SPL_OPER_DBG);
    (void) getParameters(); // ensure thread safety by initializing here
    $oportBitset.push_back(OPortBitsetType(std::string("0111")));
    $oportBitset.push_back(OPortBitsetType(std::string("0111")));
    $oportBitset.push_back(OPortBitsetType(std::string("0111")));
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
    switch(port) {
        case 0:
        {
            IPort0Type & iport$0 = static_cast<IPort0Type  &>(tuple);
            AutoPortMutex $apm($svMutex, *this);
            
{
    if (SPL::boolean(!::SPL::Functions::Collections::has(state$nodes, iport$0.get_nodeID()))) 
        ::SPL::Functions::Collections::insertM(state$nodes, iport$0.get_nodeID(), SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A(iport$0.get_label(), lit$0));
    else
        state$nodes.at(iport$0.get_nodeID()).get_label() = iport$0.get_label();
}

        }
        break;
        case 1:
        {
            IPort1Type & iport$1 = static_cast<IPort1Type  &>(tuple);
            AutoPortMutex $apm($svMutex, *this);
            
{
    if (SPL::boolean(!::SPL::Functions::Collections::has(state$nodes, iport$1.get_nodeID()))) 
        ::SPL::Functions::Collections::insertM(state$nodes, iport$1.get_nodeID(), lit$4);
    ::SPL::Functions::Collections::appendM(state$nodes.at(iport$1.get_nodeID()).get_rules(), SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem(iport$1.get_nextID(), iport$1.get_gt(), iport$1.get_value()));
}

        }
        break;
        case 2:
        {
            IPort2Type & iport$2 = static_cast<IPort2Type  &>(tuple);
            AutoPortMutex $apm($svMutex, *this);
            
{
    if ((SPL::boolean(!state$nodeReady) || SPL::boolean(!state$ruleReady))) 
        {
            ::SPL::Functions::Utility::printStringLn(lit$8);
            return;
        }
    state$nodePtr = lit$9;
    state$nextPtr = ::application::matchRule(state$nodes.at(state$nodePtr), iport$2.get_features());
    while ((state$nextPtr != lit$10))
        {
            state$nodePtr = state$nextPtr;
            state$nextPtr = ::application::matchRule(state$nodes.at(state$nodePtr), iport$2.get_features());
        }
    ::SPL::Functions::Utility::printStringLn(((state$nodes.at(state$nodePtr).get_label() + lit$11) + ::SPL::spl_cast<SPL::rstring, SPL::uint32 >::cast(state$nodePtr)));
    do { SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw temp = SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw(iport$2.get_flowID(), state$nodes.at(state$nodePtr).get_label()); submit (temp, lit$12); } while(0);
    do { SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 temp = SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9(lit$13, ((::SPL::spl_cast<SPL::rstring, SPL::float64 >::cast(iport$2.get_features().at(lit$15)) + lit$14) + state$nodes.at(state$nodePtr).get_label())); submit (temp, lit$16); } while(0);
}

        }
        break;
    }
}


void MY_BASE_OPERATOR::processRaw(Tuple & tuple, uint32_t port) {
    tupleLogic (tuple, port);
    static_cast<MY_OPERATOR_SCOPE::MY_OPERATOR*>(this)->MY_OPERATOR::process(tuple, port);
}


void MY_BASE_OPERATOR::punctLogic(Punctuation const & punct, uint32_t port) {
    switch(port) {
        case 0:
        {
            AutoPortMutex $apm($svMutex, *this);
            
{
    if ((SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2(punct-1) == SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker)) 
        {
            state$nodeReady = lit$1;
            if (state$ruleReady) 
                do { SPL::BeJwrMcw0TSnNza0EABAkANw temp = lit$2; submit (temp, lit$3); } while(0);
        }
}

        }
        break;
        case 1:
        {
            AutoPortMutex $apm($svMutex, *this);
            
{
    if ((SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2(punct-1) == SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker)) 
        {
            state$ruleReady = lit$5;
            if (state$nodeReady) 
                do { SPL::BeJwrMcw0TSnNza0EABAkANw temp = lit$6; submit (temp, lit$7); } while(0);
        }
}

        }
        break;
    }
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
            for (uint32_t i = 0; i < 3; ++i) {
                bool forward = false;
                {
                    AutoPortMutex $apm($fpMutex, *this);
                    $oportBitset[i].reset(port);
                    if ($oportBitset[i].none()) {
                        $oportBitset[i].set(3);
                        forward=true;
                    }
                }
                if(forward)
                    submit(punct, i);
            }
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
    case 2:
        punctNoPermitProcessRaw(punct, port);
        break;
    }
}



void MY_BASE_OPERATOR::checkpointStateVariables(NetworkByteBuffer & opstate) const {
    opstate << state$nodes;
    opstate << state$nodeReady;
    opstate << state$ruleReady;
    opstate << state$nextPtr;
    opstate << state$nodePtr;
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
    opstate >> state$nodes;
    opstate >> state$nodeReady;
    opstate >> state$ruleReady;
    opstate >> state$nextPtr;
    opstate >> state$nodePtr;
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
    ckpt << state$nodes;
    ckpt << state$nodeReady;
    ckpt << state$ruleReady;
    ckpt << state$nextPtr;
    ckpt << state$nodePtr;
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
    ckpt >> state$nodes;
    ckpt >> state$nodeReady;
    ckpt >> state$ruleReady;
    ckpt >> state$nextPtr;
    ckpt >> state$nodePtr;
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
    state$nodes = SPL::map<SPL::uint32, SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A >();
    state$nodeReady = lit$17;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$18;
    SPLAPPTRC(L_DEBUG, "Variable: state$ruleReady Value: " << state$ruleReady,SPL_OPER_DBG);
    state$nextPtr = 0;
    state$nodePtr = 0;
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




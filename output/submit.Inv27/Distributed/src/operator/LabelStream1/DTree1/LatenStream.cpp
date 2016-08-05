// eJzVV1tzmzoQHr32V9BOH_1CcnBjhS3xpMyMnTsYGk6TYzUlfOtjIhHItCNu47X8_14uaAje30JH04JJmgZbX6dlffruS75mlAdFMnYadzEfjEsQAEHP2BELw7Pa0mv_1PAnhHdsauK65r6TInfLYXMHj8FJj59fJfTJaGLqz08XHojmYNhi9zK888cUgX3Sr7HomFeN_0XPgWvdD2_0Ue3elPDT0ieXe3F0u7zUu2G_0rDkMuIMLtFSePh4JY66_1FyWIkTLgrdCW6CFsHpq6E8cNCNFx_03DfclvawQgtBlB1PmtRdcXAxRD3jW1_084OxFez0eTucPa3lApOm1QS50GEjfBtxygs6_0PPzTq_09fxeDFsCGoxmoozAfXozsx1LnvwvrzjSCHSL9DXwY9hMZnqGHvt_0FsAiaMp5I8WQnruz6S_1OU1Igdm8eLMWIT9ZSD5bUmUGzfjfusK9S_0XaNo_0NG09MUeyXxsK434gzYjoyd9Wat8IZb29GoVQXF_0YkiRz39cTg_1Q01LvUauiAvd8Ks6tq3HDdd6W7GRo_01idoudfybMmNZVtaK1wf9ZCBpD2qoScNnJqEvNt1fzEUv0JVEkfujTgecOpoMZJbYW_0GLgyseXxkoAF8ohD83nZU7AP5Vux0LMX9EL8Euk1q_1AkTD14UL_0Yc5Nb5hBU1TNaaOo6JFbs4gIBy8T1spVM8Sq9nTmlnq_0AVuSUeyLmRB7Dziefi_0VwiNXWffMg7fZR2kX8xgCKqWMaDnKndLCZKtSKeSFQHL497YqlRgqr5HFRnu6haicjziafbWiJr76pBrkQGS2RpdPKiWskSsF7iA2yUaTbLhCWewFaZyfaWEFQfHQtXqTGsWFU5_1ufLJFB1p7p0PMN3lRmuao7mVFWFKMB2bBy1jhr9013H22yqZxQ3YAEv7js_13jD00ecMmwfDvu104vFV2ol82q4c08TZ4FHx2RybT5gUwKmGyddINLhkK_1RhYvPRc8SgbvvYI6PjRl_0jRrB5w6YyxWZkN6ZlpdKNIWPTxxvsOVCnCmFLfc3bYj4yJSt03_1x6k4s3m_1nxG2WUdaPw_1Q3pCh_0Z_1zCfxl_03FXOkeAb28tn5sXkr_0hsXQ_0pOvGG7BaXIh62qmTOYParD_1GAO8p8h2HLTJfgu4wdTSycMG0mTnNQqXeYXs3zUTcxylScQv6J48iDJAEj5FscaZIyEKTFggRi_1f0z6Q3SBf4IucIsucYFPw3bEKj1uYlstWH3a77Bkv0eZ97c5ebSFFQ3S_1pkAzUs1si1ZKGaAoyD932i0YUe6xxv7aLTh24tp1Cyj0dkhGjW2aJRkJRtpBGRdKk4DmJuOQpr1LbbxKdsKx5BXvQ2U8HCLiDuh_1PmTKdN4qln787fLlkl2d3Opw0SO3RZtNj6tVIp59TAJPDsf5mJlpQfDNFvtbv5Tcpykn2I6Zre_16KicXv_022VkwuSENH5NmjhWKIqJoii5OPw1acbG3aYGn3e9oR0jAFeZ3y1T_1rB9PEd1mxouvRRmRXtMmW3DGdJZJxTsYgfzRoVJGaAhLGB1T4kiZ9_1U1LtFJtnOnQxwD25FKHvRTL4G1k2L3qySnZsqj80SB30_0p3WwdukuXpuLQBDY5q1OAO_0CZvxJwzejt_0YEvj_1zBWkoP5EmKAQlcE39IyyPjezOkqt5JVFRhMxreUogn2WfVJ_1nPdBh9PgfZ3gfRZTlVPkkL8Dmgq2TlN7oHOGX3gEMRiysqD4jj6rONJQ5Y2PcVDT9JIuOQKsJ0ieKJ6qX8SFG8Zti4rea08YBPPTh2WY4gQaAGlhWCpA1mJv4Fa5QWBK


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
    initRTC(*this, lit$19, "lit$19");
    state$nodeReady = lit$18;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$19;
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
    do { SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw temp = SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw(iport$2.get_flowID(), state$nodes.at(state$nodePtr).get_label()); submit (temp, lit$11); } while(0);
    if ((::SPL::Functions::Collections::size(::SPL::Functions::String::tokenize(iport$2.get_ID(), lit$13, (SPL::boolean)lit$14)) > lit$12)) 
        {
            do { SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 temp = SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9(lit$15, ((iport$2.get_ID() + lit$16) + state$nodes.at(state$nodePtr).get_label())); submit (temp, lit$17); } while(0);
        }
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
    state$nodeReady = lit$18;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$19;
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




// eJzVV1tz2joQHr3mV7idPpiZnGCZSxJoMyMIZMDGuRiaSV86Bgvj_0lpbBkzb_137kG7HBhPYkfThOmLHW0mq_1XX27K981zwKimzoJW61u4BPHAhBw9A9C8P7srEr_154E9I7pjVxXXNfWZEr9bCpktHgITny3eZxNJ6OJqBw9X3kjmYHhB7uT5Zw6pgtuXH7FomDdN_0XPgWo_1DW_0XRXStPDX1iubf316tHjQsOKKrDkAuIcNfn5PFQEGu9jThZjoQJ10d90UXYOrDO4MWwIajGeijMBzejezHUue_1C5vOtIIdIv0dfBh2ExueoYR9Q4GwRCOOpJE_1Wwua_0hyR_1dYPIoSW8ODOWYW8VSP6lJMqN23Hvoo961ys0vTy4ZjMxR7JfGwrjXiDNiOjJ39Zqzwhl_1XI9CqG46ZqSJHPfNxODdDTUudZq6JCytTB_0WoqGy497hnuhPa3RUhBlx5MmdVccdIeoY3zriV3OXl5uxsPp_1GkjD4g0vTFIV4c3qPtw3fnSfxPlrqpxw03Ple5naLioT9CqXO1sxY1lW9ooXA91kIGksnmhJw2cmoS8u01vORS_1QlUSR_06tOB5w6mg5ki_1Czgx1Dax5fLS6AXyiEPzBdlTsA_1lObLUsxf0YvwS6TWr8KRMPXhUD5grk9nnAihome00dx8SKXRxAQEn2AWameZQ6v7mkme2C1_0SOeCAHI2_1A3id4Hq_1nEqmp_0_0RjHvRRYkX4YgOKVsUyHuRU7YcwmVQr2hOJ6uD1fk80NUqsav6OVef7Vl0kIs8nnm5riexyfxrkSmSwRMaX6IO1MmG9ZHUZMtjcEYLqwrFwdaEGPvaq187KNh1F9asy8bBi_0TIJVN2prhzP8F1lhquaozlVVSEKsB0bRwm_0Rn_0663jbE_1IbeQ9YwIurw48Thj76nGHzZrHvWq143E9Lhk_0LimOaOBssFJ_1NUfOUSQ040zD5GokG12yFPkysPnqOKNRtCp_0Mjit9C8KzecWmMsVmpDfmWKXSjk3Gpo_03tueMOlMIW4o1r4v5xJTs0D75dZLzN5vh_0IOcyLqR_0_16BdIdPzH9YT_12v24o5UjwDe_1no_1Ni_0FfHGmY3CiY9uuzApwrCTAnMKs0d1mB_1Mi2RmCLbcdAu_0zfjB1NIJw0bSJCa1Spv5xawWuolZrvJsxK_1InzxIIgBS5sW_0Bhk3YUoMWCDGn7c0f4ku8G_1QBe7QJc7WqduOaKV9IbbVgtbn8w5LznsUeX_0Xk0frUVEhLYaJoXmpRnYlS8UMcOSk_1xuNtuxIz3jjEI22fHs1jZplNDp_1iUaNHRolUclGGgFZvYrDAOa0RpFmfYdtfMo2vliG3qSVLWHgDgX3nPjzJ1M24zlbHY7cPk8m2d3KpVCJHAMWbTZuOirFiHqYBJ6dd3Axp9L_0Lo3TZTv_1KekK6aeYiNkFLep40xvaLi8LKrd04WO6zLFCrYjImVoXB546rbjZuzS107p3tBYkxhXWt8um_1l0czx7d5cSr7zUZhd5SJ1sAYzqrJNe96IF801ApozKEJVzed8dLl9hSrC8tYJOG_0DTjhu_0aX2dKdhVJU0BaCNL0wFy1WtEUtjygEfCkoa4cgFnfgUkTFU0yiRcBCVwTf0w3ZnxvhlTVO40yFmxGwzu652n2WfVJ_1jMdRp_0vQGYNiK6VGYjU_1Ku4s3bKOuuXHBVnKh4Qx9Vn29TIAQv7vqLhZ0mkHNKJMN0CviJr7p_071Iq39BW3k_063CPgUwbG7ZGQSBGpgWSFICkum4l86cM_0l


#include "./LatenStream.h"
using namespace SPL::_Operator::DTree_Classifier_4;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::DTree_Classifier_4
#define MY_BASE_OPERATOR LatenStream_Base
#define MY_OPERATOR LatenStream$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("DTree_Classifier_4::LatenStream",&initer));
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
    state$nodeReady = lit$15;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$16;
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
    do { SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 temp = SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9(lit$12, ::SPL::spl_cast<SPL::rstring, SPL::float64 >::cast(iport$2.get_features().at(lit$13))); submit (temp, lit$14); } while(0);
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
    state$nodeReady = lit$15;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$16;
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




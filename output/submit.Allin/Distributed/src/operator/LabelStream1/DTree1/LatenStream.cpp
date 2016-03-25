// eJzVV1tz2joQHr32V7idPpiZnGCZSxJoMyMIZMDGSWpoJn3pGCyM62ttGTBt_1_1uRb8QGA_01J_0nCcMGOtpU970be78l3zPCC6qZOw1eoGPnEsAAFH_1yAE787Pq8n_1PLBnRHfsquK6pj5T4ndLIbPFp8DE54t3ubkkdHG1g4crbyRzMLwk9_1L8M4dUwe3Lj1g0zNum_1DlwrcfhnfLorpWnhj6x3LuHm9WjxgWHseow5AIi3Pc5eTwUxFpvI06WI2HC9VFfdBG2Di81eDFsCKqxHgrzwe3oQQx17ruw_0XwnyCHSH9CXQQeh8QVq2IcxnK0pwngqyZO1sHnoIclf3SJyZBUvzoxl2FsFkn8liXLjbty77KPezQpNr44t20zMkezXhsK4F0gzInryt7XaM0JZv1qPQihuuqYkydz3zcQgHQ11brQaOoK3FsZPS9Fw_0XHPcC_01pzVaCqLseNKk7oqD7hB1jG89scvZy6vNeDidP23kAZGmtwbp6vAWdT_1ddL70XwvfVTVuuOm50sMMDRf1CVodRJ6tuLFsSxuF66EOMpB0YGroSQOnJiHvftNbDsWvUJXEkXsnjgecOlqO5MuwM0NdA2seHwE0gE8Ugt_1bjop9IN_0LrZaluB_1il0C3SY0_1Y_0LBi_0LBXIPcPp_0woobJXlPHMbFiFwcQUBa_0h5lqHiXWby5pZrvgNbknHsiZkVdg7xO8iNdzidTUffIhb_1RJwkX2xQoUtYplPMhB7UcxmVQr6hOJ6uDlfk_0QGiVaNX9Hq4t9rS4TkecTT7e1RHa1Pw1yJTJYIuNL8GCtTFgvWV1mGWzuCEF14Vi4ulADH3vVG2dlm46i_0lWZeFixfJkEqu5UV45n_0K4yw1XN0ZyqqhAF2I6NowpQoz_1ddbztCfmNTAgs4MXl48cbhj76nGHzarFvW6143E8Lik_0rjmOaOBssFJ_1NUfOMSRU41zD5GokGN2yFPkwMHz0nAHWbmk9Gp0Ffg_1BsHthUptiMcGOOVSrtWGVs_0nire06pc4WwpbbmsZiPTMkO7Te_13uT8zWZ2_1EFOZN3Iff9AusNH5j_0sp_17XbcUcKZ6BvXx0fmzfivbGmY2aEx_1ddmFSZMNOCswBZo_1qMD_0Yo2RmCLbcdAu_0zfjB1NIJw0bSJCa1Spv5xawWuolZrvKsxK_1InzxIIgBS5sW_0Bhk3YUoMWCDGn3c7f4ku8G_1QBe7QJc7WqdtOoNKuEdtqAfX5vMOS8x5F3t_1l5Ml6VASkxTBRNC_1VyK5kqZgBjpz0f6PRlh3pGW8cotGWby_0mUbOMRhfHaNTYoVESlWykEZDVqzgMYE5rFGnWd9jGp2zji2XoVXraEgbuUHDPiT9_1MmUznrPV4cjt82SSXb5caiqRY4NFm42bjkoxoh4mgWfnHVzMqbS_1S_0N01c5_1SrpC_0ikmYnZ9izre9P62y8sC5JYufEyXOVaoFhE5U_03iwFOnFTd7m6Z2WvdO1oJEucL6dtnUv2vHs0d3OfHi201GodfEZAvGmM4qyXVHPZBvGiplVIawhMv77jh2py219dgCNmmIzzJu_0K75daZkV5E0BaSFIE0PzHWrFU1hywMaGZ401JUDZtZ3zKSJiiaZxIuABK6JP6QbM743Q6rqnUUZCzaj4T3d8yz7rPok_15kOo8_1XINMGRNfKzIhU_1eu4s3bKOutjjoozFQ_0I4_0qzbWrkgIV9X9HwsyQCh3QiTLeAL8ia_0_0cu1eI1fcXtpPutBXxqwam7ZKQSBGpgWSFICksG8S9XH9We


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




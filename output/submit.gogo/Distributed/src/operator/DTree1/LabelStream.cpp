// eJzVl9tzojoYwCev_1SvYnX3QmR4lqL1otzNotaMgtUXb6b7soERkuS4EFbv930_04WUCs3dP24dA6Q74kX74Lvy_0Ja_0sVD6u6iv1ms_0O52DIABDT5gzT4WqlUyf_1cM2dYtcyqZNu6OpPCd0PCs8Wdp6PK4msyEPs2qrbRYOUMRRr6Z3gkzu9pVubsnviAeE2_1PhHvPdt4GNxID_1ZaemyoE8O_0ub1aPSi0t0dRHfq0h7lRjxbHA46vdTf8ZDnkJnSP7fE2i4w98zSG9xucrK0H3Lx_1PbzlfZX_0zW3ubzjRZ9Vb9ke_1zbLjU7Zh7lFgbT3gxlNBnKy5zW2XFdzVNYv3TWE2E30ourUBN_056wgzzjvhrLXc1X1TP10Mf8puOLggi_1Xsz0XBbYdtXSo3dp2zNjR_0XvGYz465mnymPa3bJ8aLlCJO6zfc7A7at_1eryHdpcnm_1Gg_0n8cSP2sTC91nBHhdds5_06q_1aP3IcptWaEHm64t3M7YwaI_0YVfFamcreiyawkaiu2yb1VihaJzvCH2rJrDOaNNdDvifUBb4oX3Dj_1u0PFwOxTO_1PWM7GlIcJpjdAC6WMPpmWjJygTjim01Dsi_1CF081cY05psLGu3JAXYLUOndIkv1orall6Ugysw0ICDDfIBNPcQgGb5xSS1ZBazzCDki5kTZgpwvWw_1l0JNVVF1_0knT4ISeBfaEDWqlDGgJSq3RRGg2pZewJRHbw_17pGmRoFVJ2_0x6nTXqrNI5LjYUU0lkp3vDoN0gQwWyJgC22AtJwTVhWWg6kL2XORUr6yVqVuS7FZF7CDJcEXsyapVXVmO5trSDFUVS7GqsoQlYFomCsptjfxU23K2OX5DFQIGcMJa_1XREkUedU6W0WaUvzWbY7sUF3CUl3tJ1lDQWkltKwXVMxQZUFIR_1BqL_0ValMHipUHzwHFKomcR8PDyv9CGRLacW6NEV6oDekpFxuhSYj3UVb21NGVSRcKvQ1rYv6ThWs0Dp6PkrFu5T48RdVrWQH4fsHkhW_0U_19hPom_1akr6UHI05KSz87R9y_1ob1ibiTvjptjKDAh9yRSylMHlki3qiXsWRwsiw4yWYFuV6U0PFVCmQRjmplVvUM7VaqDoq0eUXI56DeDIgygCIyQtjDRKEYQwGzIDx9weMT8IFfgYuMIdLWG_1jsB3QSk5pyJQzWl_0_0d1jwvQeZd_1NMHtxRsgrJdhYZmpYqOC9ZSrqHgiD93zDa0hF_14419GG15ezdGJ0UYnb6GUSOHUZSVpKVgkOxXYRrAnOxR_0KSeo42JaWOy29CHHEYLCMwhuBPEP3_0oohEv1Wp_15nY5mSQ3HZu4isXQYd4shceGcjajDsKeY6YDnK2p5IQW5_0m8le6KznWkKwQxuS4FZ9b4vpTnMqNyiwsT4jJHErEigDO2Lkw8CVp2sS9xaSf73sG9IDIuM79VNPRz_1XiJaJ6Jd99MEoQ_0Umcp44xuraJa92oE0oeGchHKEOZYJgQT_0iL1AHu2ji5iKCnXmbGy7BwHKMOToDkiBh0n3bKL092kGXRfgiTuILgxxYOPY_0wvyVo0sIqOnO_0MVkj5xzpC54oUHRyXIVkExh7AA7eFwCQIZM8wfBCVw0TFv_0iYEfx


#include "./LabelStream.h"
using namespace SPL::_Operator::DTree1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::DTree1
#define MY_BASE_OPERATOR LabelStream_Base
#define MY_OPERATOR LabelStream$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("DTree1::LabelStream",&initer));
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
    state$nodeReady = lit$12;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$13;
    SPLAPPTRC(L_DEBUG, "Variable: state$ruleReady Value: " << state$ruleReady,SPL_OPER_DBG);
    (void) getParameters(); // ensure thread safety by initializing here
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
            for (uint32_t i = 0; i < 2; ++i) {
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
    state$nodeReady = lit$12;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeReady Value: " << state$nodeReady,SPL_OPER_DBG);
    state$ruleReady = lit$13;
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




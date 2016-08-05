// eJzNV1tP2zAUll_15FdG0h1SwJk5aaMM2qQM2FXphywDtCYXWlAg3iRKHtkP898WOG3I52dqBtLmV4pzYx_0c7l892FNBmzFzqspVlHcUR8_0cIIz35tdGbZlNL_17exN2Gu72lOEFB34oh_0SGZk2Y_0GDpvc9Sht3r3JzWCrgGifyOkiHNo6XnXYuX17qfemZ8Fn_04oM7umXffsyDuZXp2PnKlg6P9ruxTwYfz1eXM30uF6Xn_0k6_034zsi_0WZz_0_1nvRG0eJLj9XPWhiriZc8LnrH45OjYwyPXIWjvm_0OeuH5z5OH08E1no4Gw2A8_0N7Xp8OHod1ZfZr0ju7JLDS4ghaKmMPIW8_0fknHMkH0_0sKwNzERyXhjTyrztXYVyVohQpPrCiIWuNyu_0YJTE_0a2p5wzYcApGpiF6evGzkGFAZqSyG9_0nxPFSmQmMawHj2sC4fUB2kMpi12OJdULUAYZ1IZN1YF0MAcEQEgxBwRAWDIHBEBp8AE2HAGEIkQFFxsCATgNCZJiQsAXphBAZECIDCJDRAWTdqsyE4JjlACHtzp8TLXklzlyzxSOyWTx1fW3hh_1dR4EyINvNnvjZ1mIM83yOc2zjDuYEfZvlcwxNojkJBho87StIsSwz_0LNkwsqyLNXUGiUGMeqrU2pwRdk1dj6iNxqGY694qqmXl_0DOBUSRQYO6eUiruRkMR2nh7zHqb2GYLlw08VVSxNGrdCkQm1uf9_1rHaUD6sNUcBvZ44EXufi9Weko_0H8tGy_0Ai1aku6uoT8jQQ0icsmePcUkfB7iprPzobImsYfQVDnhtA8hlezyIQsapUM2jgkSRMcp_0zCzpb_0ld5OXZ85uz52SbLsCmvbvFPrnrIfp77yqGy6mSmMzIPEwQXth0oU38xdpqj8a_0qxg8ah8qQs7lxK1Hz6PYkeoRHJRC8qlWxTy5dKtVy2LplOyUvPGSf38f_0gbDLsqcu7UJJivRzvGiRkyf4bJBhkAFyhABjKK9JA2S6QB3CZCGCzHhwak3oH31LfYfutl3m41hnS_1rZ87oM4DiD_18up8reW76dPQQYLHiW8_0pAM75Wqud_0uMCZ_0mJ52q_0QWm2VyTWdW0Db2nBG_08hOEhmskY3hAU_1yqqZd0_1q25tqFom7G90y4yv7Di8VXad7a9Cxb1ILgztRUbdZsTb087TjjzviVRf27TF7VANeE68S_1P3L_0YnSeV6Dh064T0J6498a2AcrzvJxeWcLx_1LrfOSO_13j38AomMED2PemZKk2drGsX6O8Kf57i7qFo0USSX6B9QhaXxmM5DDvAyf_1317Y_0S3AQGnRIXlL0ZGgskyxjsW9ItWNX3qp5yu2Kyumtfn8PmNofV_1TkSguJIsQNO8XtI59AS


#include "./NodeStream.h"
using namespace SPL::_Operator::LabelStream1::DTree1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1
#define MY_BASE_OPERATOR NodeStream_Base
#define MY_OPERATOR NodeStream$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("LabelStream1::DTree1::NodeStream",&initer));
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
    initRTC(*this, lit$20, "lit$20");
    initRTC(*this, lit$21, "lit$21");
    initRTC(*this, lit$22, "lit$22");
    initRTC(*this, lit$23, "lit$23");
    initRTC(*this, lit$24, "lit$24");
    initRTC(*this, lit$25, "lit$25");
    initRTC(*this, lit$26, "lit$26");
    initRTC(*this, lit$27, "lit$27");
    initRTC(*this, lit$28, "lit$28");
    initRTC(*this, lit$29, "lit$29");
    initRTC(*this, lit$30, "lit$30");
    initRTC(*this, lit$31, "lit$31");
    state$nodeMatch = lit$30;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeMatch Value: " << state$nodeMatch,SPL_OPER_DBG);
    state$ruleMatch = lit$31;
    SPLAPPTRC(L_DEBUG, "Variable: state$ruleMatch Value: " << state$ruleMatch,SPL_OPER_DBG);
    (void) getParameters(); // ensure thread safety by initializing here
    $oportBitset.push_back(OPortBitsetType(std::string("01")));
    $oportBitset.push_back(OPortBitsetType(std::string("01")));
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
    ::SPL::Functions::Utility::println(iport$0.get_line());
    if (::application::regexIsMatchAll(iport$0.get_line(), state$nodeMatch)) 
        {
            ::SPL::Functions::Utility::printStringLn(lit$0);
            state$nodeOut.get_nodeID() = ::SPL::spl_cast<SPL::uint32, SPL::rstring >::cast(::SPL::Functions::String::regexReplace(iport$0.get_line(), state$nodeMatch, lit$1, (SPL::boolean)lit$2));
            state$nodeOut.get_label() = ::SPL::Functions::String::regexReplace(iport$0.get_line(), state$nodeMatch, lit$3, (SPL::boolean)lit$4);
            ::SPL::Functions::Utility::printStringLn((((lit$6 + ::SPL::spl_cast<SPL::rstring, SPL::uint32 >::cast(state$nodeOut.get_nodeID())) + lit$5) + state$nodeOut.get_label()));
            do { SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt temp = state$nodeOut; submit (temp, lit$7); } while(0);
        }
    else
        if (::application::regexIsMatchAll(iport$0.get_line(), state$ruleMatch)) 
            {
                ::SPL::Functions::Utility::printStringLn(lit$8);
                state$ruleOut.get_nodeID() = ::SPL::spl_cast<SPL::uint32, SPL::rstring >::cast(::SPL::Functions::String::regexReplace(iport$0.get_line(), state$ruleMatch, lit$9, (SPL::boolean)lit$10));
                state$ruleOut.get_nextID() = ::SPL::spl_cast<SPL::uint32, SPL::rstring >::cast(::SPL::Functions::String::regexReplace(iport$0.get_line(), state$ruleMatch, lit$11, (SPL::boolean)lit$12));
                state$ruleOut.get_label() = ::SPL::Functions::String::regexReplace(iport$0.get_line(), state$ruleMatch, lit$13, (SPL::boolean)lit$14);
                state$ruleOut.get_value() = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(::SPL::Functions::String::regexReplace(state$ruleOut.get_label(), lit$15, lit$16, (SPL::boolean)lit$17));
                if ((::SPL::Functions::String::regexReplace(state$ruleOut.get_label(), lit$19, lit$20, (SPL::boolean)lit$21) == lit$18)) 
                    state$ruleOut.get_gt() = lit$22;
                else
                    state$ruleOut.get_gt() = lit$23;
                ::SPL::Functions::Utility::printStringLn((((((lit$26 + ::SPL::spl_cast<SPL::rstring, SPL::uint32 >::cast(state$ruleOut.get_nodeID())) + lit$25) + ::SPL::spl_cast<SPL::rstring, SPL::uint32 >::cast(state$ruleOut.get_nextID())) + lit$24) + ::SPL::spl_cast<SPL::rstring, SPL::float64 >::cast(state$ruleOut.get_value())));
                do { SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u temp = state$ruleOut; submit (temp, lit$27); } while(0);
            }
}

}


void MY_BASE_OPERATOR::processRaw(Tuple & tuple, uint32_t port) {
    tupleLogic (tuple, port);
    static_cast<MY_OPERATOR_SCOPE::MY_OPERATOR*>(this)->MY_OPERATOR::process(tuple, port);
}


void MY_BASE_OPERATOR::punctLogic(Punctuation const & punct, uint32_t port) {
    AutoPortMutex $apm($svMutex, *this);
    
{
    if ((SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2(punct-1) == SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker)) 
        {
            submit (static_cast<SPL::Punctuation::Value>(SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker.getIndex()+1), lit$28);
            submit (static_cast<SPL::Punctuation::Value>(SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker.getIndex()+1), lit$29);
        }
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
                        $oportBitset[i].set(1);
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
    }
}



void MY_BASE_OPERATOR::checkpointStateVariables(NetworkByteBuffer & opstate) const {
    opstate << state$nodeOut;
    opstate << state$ruleOut;
    opstate << state$nodeMatch;
    opstate << state$ruleMatch;
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
    opstate >> state$nodeOut;
    opstate >> state$ruleOut;
    opstate >> state$nodeMatch;
    opstate >> state$ruleMatch;
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
    ckpt << state$nodeOut;
    ckpt << state$ruleOut;
    ckpt << state$nodeMatch;
    ckpt << state$ruleMatch;
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
    ckpt >> state$nodeOut;
    ckpt >> state$ruleOut;
    ckpt >> state$nodeMatch;
    ckpt >> state$ruleMatch;
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
    state$nodeOut = SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt();
    state$ruleOut = SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u();
    state$nodeMatch = lit$30;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeMatch Value: " << state$nodeMatch,SPL_OPER_DBG);
    state$ruleMatch = lit$31;
    SPLAPPTRC(L_DEBUG, "Variable: state$ruleMatch Value: " << state$ruleMatch,SPL_OPER_DBG);
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




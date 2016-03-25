// eJzNV21P2zAQlr_1yK6JpH1LBmjhpoQ3bpI6yqdAXtgzQPqHQmDbCTaLEoe0Q_132x45Y0uWztQNoMUt2rfb7nXp6z45DWE_0ZRjy0t6ySJWTBDGOnpXxO9qde19P8u8cfMC3zNCUPqjR0xj8iELHrxwGHjaYfS_0vTNajlbhkT7RM7m0cDW8bLFLuy7K73jnoef7WvSv6dfDu2rJJxdn42c63Dh_1Gh6l7Nw9LU7v57oSYWiYK3o_1Pvt0L5cnP_18etoZxvMvHVaxZW4sx376cdnpjk5PuhhYtoyGvcAcdqKLn6cPZ_10b7A77g3DU_197T3cHDwG4tP407J_1dkEhl8dwPFzGHkrR_04ZJQwZF_10LWsLA5HcFyW0tG93D6GcFcL9mb4oZpHnTza_1YJQG9q2p5wzYcgtGpiFm_0ubPQoYBmZHJboOAEsfPZCawrgGsawLrDgHZUSZLPJ_0l1glRC1jWhkzWgXMxBARDSDAEBUNYMAQGQ2jwEbQdAoQhRAYUGQMDOg0IkWFCwgakE0JkQIgMIEBGC5C1yzITgmMWA4S0aTAj2tRNYhJp3WDu08BxY81mEXFmsc0S1wu0eRDdx6EzJtokmASa6zAH_0YFPOK1xcvPCIFpndgVdoBmKBA8_07inpsCyx_0LPkwtiyLlesGaamMeqrUmt9QtgN9Xyi1mrHYq93p6iWlWPPFNAmfQJ7D5RCmddqitDGx_0N6to1ttnBe31dFPUujVmOD0sT5fN7rqjXlw0pzHNKbsROz97moHSj5yCgfLYuvUMu2ZKdLyN9ISNO4bIP3QBGpf6Co_0Tytifyp_1REEdW4JzWN4NYtMyKJGwaCtQ5IOwXbKPuxs6V_1p7cz1a2dXxy5Nln1hbZNPKt1T9KMbKI_1Ktm1NYWQWpg7e0H6sxMntzGOKyn_1NPHZUO1aelPnUo0TNp9_0TmBEak7XoRaWybm_15UimXy84l0yp46TnjZEf_1D8pmjT1zeRtKUqwX412BhCzYf4MEgwyASxQAQ3lFGijaBfIALhIBbNaDQxNS7eC7tKmxw8bLPFzpDGl_1U34egjiOIP_1y6nyt49vZp6GDBI9T33zIFraK1Vzt1gkTPs3uPGXzN5hme01mWdMu9J4RvPEShodoZs3whqD4V1Et6_15ZdWNL1TJhf6NbZnyp4_1BR6jq7P4o2e5E8GOpFRlUz4uNp72lP3vdEqq9s2uGdqIY8J95l_0fsX_09Ok8nyHDpzonkTVV74VMI7XG_0ficsGPT2TrvOJO_1_1g3MDbM4AHs_0S5ZqLV9LOvXKDbFf29Re_0NqkUaSP2V9glaPByO9zAfAzf_03T3f_0CjBQVnRIvld0JKhsrVjH4l2R6cYvfd7zE5ulE7PafP4_0YWj1ctORKC4kixA07xceNX40


#include "./NodeStream.h"
using namespace SPL::_Operator::DTree1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::DTree1
#define MY_BASE_OPERATOR NodeStream_Base
#define MY_OPERATOR NodeStream$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("DTree1::NodeStream",&initer));
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




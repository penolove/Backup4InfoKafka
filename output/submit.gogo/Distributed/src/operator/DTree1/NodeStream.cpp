// eJzNWG1P2zoUlr_1yK6JpH1LBmthpoQ13kzrKpkJf2DJA9xMKjWkj3CRKHNoO9b8vcdKQl5PddiDdGaS4rn18nuf4PCdu4LFmyG1m87Wun4UBdxcIIzX6a6N3zaYS_1T_0EzpTbrqOYnsfsqSn6Pp3R1SAYmXw67zHWnL_1bTudrjyqf6cXSHxkqXnf4lfFwo_1asS_0_0LcUuHj_0zrsXETeovbi4l5663Mf9v29cKbfOsvb2dqWGPIzQxd_1rgfG9ery5_1fznvjYPm1x2uWLMl66kSP615_1cn7Wx8C0tT8euNq451_19PH_06GN5hazwceZPhj4FqjZ5GRmf9edo7e6Qzn8SrWyjgJqfvHdeik5Aj42qo6zs4iNJ1fsgq6_1ZnCOW8EPQn9vyA_07YzK37AKArsew3nHNhxCUGaJnpq8WsxhoExkozduy6jppOMacC8FjCvDcw7BsZOkrHQdnjkoBjqANO6kMsqsC_0GgGAICYagYAgLhsBgCA0_0gZZDgDCEiECRIRiwSSBERIMGW5BNCBGBEBEgQAQCRLrViZoKjEEB0khpEClzd0GVuRUG1Ff67tJhrmkFisF9ai4Cg4eW7SpL138MPHNKlZk7cxXL5CZyXIfGWhcrnu25fnbcazQELZAvxPH5QIqarovJX1KBDHT9eiulXuQaZ46cWm3OKL9jtkPlRuNUrLUfJFnXc5IaASpqKrD2SCrlfqMhCWtxe856u_1hmCPKGjiySPHVq2wo6J_1aP_04O_03JA_0bi0HHrubmgH_1Jxe1IykfGemTrscz5Kovye4p5O_1UY1FcdsF7JIl8OJLk_1OFtiDPV_0E8QzLynLI_1hzTzSII9aJYd2DknUhARKhzDZKb8p2wn1Gdn1sYsOy6Hwth13aukp82i50rO0a62TOF14EcEF66dSEN4vbC7J8bcJYyeNU2kjLec2o3L_0_0G1Ej7KAZkOvSpWs5uVTpZoue6dMp8TSy4lLy_1xfkDYZ9oTyLnRIsVqOdw0SuuJ_1DRIMKgCuSAAM5Q1loOwXqAO4LASwW08mC2k9wQ9RUePHrdcxXEtG6n87fR6DOE4gfuPsfKvtu8mTqKDA44ibj8nETjmb62mdccFp8iJUdb_0gNLtb0qqW9pH3RODJaxQekplM4YmQ_0Dcxneb9i_0nWjqbTA_1sb2_0mJr1ScuFWqzv43pWItSjeGahGpK0Zx22SfKkdl_1xLCkuJBytVjc7A5SF8qRT5tge9xQ5W9eNMPSZL8wfrIa9sx2cj0H6lf_1165ZS8m1Z7mgn8Vbx_0m9fkmjuynP4FRcCM_0JQPHoiu5cYhTkSDd8nve_1_02RVnx_1iSIZX6IdirY3FBLdGFzgevHbHw3iqwZBSWaj9FKkIqGXmWEVi8tLYhu_19oeFeMd2ZcdEAF4_0zzja3hlVJDIYpZkOuvcLjdecAQ


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
    initRTC(*this, lit$32, "lit$32");
    state$nodeMatch = lit$31;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeMatch Value: " << state$nodeMatch,SPL_OPER_DBG);
    state$ruleMatch = lit$32;
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
        else
            {
                ::SPL::Functions::Utility::println(lit$28);
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
            submit (static_cast<SPL::Punctuation::Value>(SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker.getIndex()+1), lit$29);
            submit (static_cast<SPL::Punctuation::Value>(SPL::BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2::FinalMarker.getIndex()+1), lit$30);
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
    state$nodeMatch = lit$31;
    SPLAPPTRC(L_DEBUG, "Variable: state$nodeMatch Value: " << state$nodeMatch,SPL_OPER_DBG);
    state$ruleMatch = lit$32;
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




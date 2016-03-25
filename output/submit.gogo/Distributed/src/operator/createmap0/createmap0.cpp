// eJytVG1v2jAQlr_12V1hVPyQqIuGt29IXKdAWAWnXLmxSO01VIAa8JHZqO6VQ8d_1nOAmEFSZNqpMPvjvf47vn7szjsJoIHGKxsKxOwgWNQA2Y8muAw2rVkL9YxMhoo_16c3bhB3Vm0Bn7w2h9Met2be2eBzefB8sfXgbuw8b392Gvb9vCT3SLV2eEuAPo6GD68OEFcH14F8efpw6v9MnBcym6_1N2On1_0nb7eD3ldMxycuX5bA_1mjws3Z64HXUD0cG1rt35dtl_0vN4DPq8vx_0TGXZhdu92_0s2_1j9FwDcOEJdDSmCRGIAffOsazIi8_1UhnHBMJlWoJImIfXESRNegNzJEyL3CDEXWy7y0F5DDUhCj1o5iEBRvP8sOFGHTVDWA6WrZboRpSHySKarZzpMRKOeaRqZ5r8rlHk3M_0_0kBNj6R7DAmNEIGTM_14YgZl3ROJGU_0N1zBkBdxVyQ_0psacsoDH3hgZUzqlhu8JDxBKUNpXaXfhmLJ1yvuKByLAVCe_0HUC5NlzCc2hZyvU6IWOBKeFSViFalqABIniJtPyO6hSJpxATxDW9AhXTFaiVedUV1fqpugVPoKa9R_0_1QMESFwFP4TTg6PD9XwHVdhwokXW_1r3XspXRPK8jAU8xD7R4FMzDzNdmew1si2x8f6DvfdoMXa6vifm1auekJLMfVfGw55HD6NvaLU_0QTk87AuvGWlR0pJr5Fy3v5eq3fabc225FP4BsvN8DHPBMy75eORNTV4lW2i9VPIk1GEBdTSi7Nua0rtCs5nOESaWSJrdbA6AOqhkK0JirFPh4PuGI6PiVpNVB3IGs97l0AkcYjOihJzNrZ9n1XSh6B2kop3MoxKYfa5KJulmJovZLgT5ImEyRzSN7V4TvM2knaZ0R_1nPerL


#include "./createmap0.h"
using namespace SPL::_Operator::createmap0;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::createmap0
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR createmap0$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("createmap0::createmap0",&initer));
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
    state$temp = ::SPL::Functions::String::tokenize(iport$0.get_lines(), lit$0, (SPL::boolean)lit$1);
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




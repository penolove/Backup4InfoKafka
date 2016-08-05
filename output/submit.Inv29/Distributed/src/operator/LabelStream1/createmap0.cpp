// eJzVVltv2jAUll_17K6yqD4nKyIVL2_1QiBXoRkHawsEl0mqoAhnq5OIudcqn635c4AcIStlXtHmaQ8Pns8_1n4nM821HfKIcMOZgtNa4aUERcoQI4_0FbBfLkvRly18JDVQexbcmrZqLGqdsT1vdyatm9uescDyj87yy8eOudBxT79vNXS9f6TXvPLjfhEBUZd2nRmXw27flMO_0Pe82evqC9gbOLod5pz94Mmxf7V_1Z_1vF0MNefOoZJgrvPVd9oNdt6w_15_0ZTRl7_0lk2W8PJ4Ol2WJ3wxubNbFyozc_1XTbur2PyCqDMYuhgREKPoQCYXUPTXMs_1452AsgB70xLk1sQhFqtX4QVInSzGUg8HU7blEk3aOaCAKLMHipKyMOT6uycDReXTZZAdAAlFgg0JcZDlJZiaYNhjFTVBKgny6mIl3tXEO8wQ1nJL1EE2QQl2VBDwcc7z5E3BKXI_0OkX5TTKB9EhcJEUAslzJ5D_1UZOEYE2lGApv61ghJUzIl0thiFvCIh2Ldx_0rHPgnWdfijcoELAn5knvdg1DalhudQ0zjHdeiNGCYejWweoaYxYiMPL5GQLlaeIvbgIkqtKRLEEuRKKEEhW3eR71o85evgCRSEPH_0TOA5aGTReYBOQCM_1PObEqipCTxO153ctbcZuQIA2D5x7i8YEdbU0_0TXpnUKkm3cNDscC9mHTVts7k181hK1tMiDnFb5ssUt95GFmrWqcSTE_1suvKaFk_1JbHrNlObt1_1aSQ7eRbWtM4DPc0sW7XFAw1cv7Mwv8YihtJ1o8hTQcuphBIV44UVs1Ql_1g7BE7SJAzyUoSgByK1tBbtFfLaq9YHNui4FdMLAN_0_1_0SLWCyuHapVXqHa3eTFgf4r9W52wUnhB56JY3GXouOWV3Uxmkf_0T4Wf_1I3CFXmHxJNMvOwBoAIbLcDqKUvv47UdPw6k6HF4l43wh0QFkTRmrUvAQt9BZytl0GCkj8dBKX7_1lHpsdqMwSqvhMWXZ4ciMhy_0icCfIYmGAKIj_16qz_05aTqi8ajHf0EGbrlC_1


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
    state$attr = lit$11;
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
                for (SPL::int32 id$k = 0; id$k < 14; id$k++) {
                    {
                        state$counter[state$attr.at(id$k)] = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(state$temp.at(id$k));
                    }
                }
            }
            do { SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF temp = SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF(lit$3, state$counter); submit (temp, lit$4); } while(0);
        }
    else
        if ((::SPL::Functions::Collections::size(state$temp) == lit$5)) 
            {
                state$counter[lit$7] = lit$6;
                {
                    for (SPL::int32 id$k = 1; id$k < 14; id$k++) {
                        {
                            state$counter[state$attr.at(id$k)] = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(state$temp.at(SPL::int32(id$k - lit$8)));
                        }
                    }
                }
                do { SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF temp = SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF(lit$9, state$counter); submit (temp, lit$10); } while(0);
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
    state$attr = lit$11;
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




// eJytVFtv2jAUll_17K6yqD4mKSLh1W3qRAm0RkHbtwia101QFYsBLYqe2UwoV_132Ok0AYdNKkOi8_0ty_1H37nwOKwmAodYLCyrk3BBI1ADpvwa4LBaNcQiRkYb9efsxg3qzqI18IPX_1mDS697cOwtsPg_0WP74O3IWN7_03HXtu2h5_1sFqnODnei6etg_0PDiBHF9eBXEn6cPr_1bLwHEpu_13ejJ1ep2_03g99XTsckL1_0Ww_15o8rB0e_0J21A1EB9e6dufbZfvxeh_1yvL4ckxt3YXbtdvvOvo1TpwbgwhPoaEwTIhAD7p1jWZEXn6kL44JhMq1AJU1C6omTJrwAeZAnRB4RYi62QqTTu4YakDwetXIQgaL4fV9wopxNUNYDpatluhGlIfJIpqtnOkxEo55pGpnmv2uTRTez6KQE2PpHssCY0QgZMz_1hiBmXdE4kZT43XMGQF3FXJD6mxpyygMfeGBlTOqWG7wkPEEpQ2k5pU_0GYsvWT3yseiABTDfh2AOXZcAnPoWWp0OuEjAWmhEtZpWhZggaI4CXS8n9Up0g8hZggrukVqJiuQK3Mq66o1k_1VX_1AEatoueoeGISoEnsJv0tHh_0bkCrus6VCDpeVvfdqX0TCjL01DMQ_0wfBfJh5ml2O4O1RnY9Ptb3hO8HLc5Wx_1_1ctHLVE1qKqf_1acMjj8GnsFaXOJyCfh3XhLSt1KT16jZTz9vdZ7Wi3NduST_0EbLDfDx_0wImHfLxyNravAq20Trp5AnowgLqKU_1zrqtKbUrOJ_1hEGlmiazVweoAqEUhWxMUY58OB90zHB_0TtZqoOpA1nvcugUjiEJ0VJeZsbPs_0q6SLoHaSincyjUph9rkom6WYmi9kuhPkiYTJN6Q7tVineRtJu3zRHw5POkq


#include "./createmap0.h"
using namespace SPL::_Operator;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR createmap0$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("createmap0",&initer));
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




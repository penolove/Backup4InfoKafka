// eJylU11v2jAUlV_15FVa1SYmKkjgUCmmpxNp0W5XSVSkP6wsKwQMrH45iZxkg_1vscE1IqvIlpTqTEx_0f4_0l6fy7LYKDiJCV85zm3BOE0AApZ4OuDMMEzx8lWGzU_14ocwffWp7YfRz5ZbFmA3Gnt99enH79yP3rhzNBsbyTK1ZRz3u3blsTKboYe2i8XrCfvmTiPnPz6PX8PvX29c_1aEvb66ePL5PO2C_1d0ecv1B3ZFdUCqAvEoT9YwP_1mOQ5JeccGEkFHiL1DcsZzki52WGeHzSiNcZDusIsjZVeh7CmUl0fKvkI5UGDIUoFIEQPZx6nWWfylWDWxTq2oxcBc0gSbIiYOEtOXH_0bzYk6oWdI8YlkQYnNBF9ScBzwAKU1x5YnKGSSjeVP3U2wBEpBLR21aUAzyA2raWyaa48gJy_0JpGDB_0_1bbUhoelgTeOUxH2gvsiDTmhKRNzSXAcTiOckjU_0hVKnYSwwnyaYsWCBNb0NpV_1aUDusvy4NoxsB16RNalpXRes1tEtdhx8lEelwOJR_1lsBkEaqxaf6qcXzkyb4tM3F0vkvASzVN7j6A51CZgi4WpAF1_1epdgDmFG_1j_00k7oS8hxksHhvwv_18w6QpaouQk15kb1ndvQryIpZQjjUqtPW8IWAt7Bckhhr1kEttq1tCwAbcJqREOz7rg7fzCunU6XTT8hdOt4GEV41_01lANhIvshhf7x3NSYJxOr8Blgj3GxQIK04


#include "./toHBASE.h"
using namespace SPL::_Operator::LabelStream1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>

#include <string>

#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1
#define MY_BASE_OPERATOR toHBASE_Base
#define MY_OPERATOR toHBASE$OP



static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("LabelStream1::toHBASE",&initer));
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
    if ((SPL::int32(::SPL::spl_cast<SPL::int32, SPL::rstring >::cast(::SPL::Functions::String::tokenize(::SPL::Functions::String::tokenize(iport$0.get_message(), lit$2, (SPL::boolean)lit$3).at(lit$4), lit$5, (SPL::boolean)lit$6).at(lit$7)) % lit$1) == lit$0)) 
        {
            ::SPL::Functions::Utility::printStringLn(((lit$9 + iport$0.get_message()) + lit$8));
            do { SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ temp = SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ(::SPL::Functions::String::tokenize(iport$0.get_message(), lit$10, (SPL::boolean)lit$11).at(lit$12), lit$13); submit (temp, lit$14); } while(0);
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
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
}

bool MY_BASE_OPERATOR::hasStateVariables() const {
    return false;
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




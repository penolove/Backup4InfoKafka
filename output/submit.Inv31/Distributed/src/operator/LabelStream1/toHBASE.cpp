// eJylUl1vmzAUlV_1zK6xqk0CK_0MqSJm5TibW0a0XZKpqH9SUixCMWYCNsxpIo_171gEtopbMo0gwQ_0nIPvvefwLNEKQRIi1ghdF1ywFJjAqK4BONM0vbrFOsP6Z_1xQ5o8_0s9ww_1rl2ysLjE8_11h1_0fnfGt7dyU9mKirc66NZt4JNwbh3tkbj5sHNPbzPgvfxZz_1_0nJfgm_131_0_1_1EFbWu6YPj7PBp5fOvbdF_0bYVk01gGmAqugPBvC_1uQgRKgYWkIh5hFgNknORExo12KDBFowlOKAN9ulIOexQjjqU50fKcYP8pY2GN2l4xV4K9BVLsV6dh4NU9_0WD_06JYEqaXLI95FoRYj1jE9GUgAkAZxbVZtWUkY3k7kFP8AinIpdXbHqwW_0QEV5a0PBSG54VkyDwMuLt8_09eH7scArhGrCQXBb0FAQRnm1lwSEBIsxJRus7GvUIizmKeY8iLCi9qF0qQ_0V95NVpU2qFghFmqOq8KMkmiqcTuWbUWGy9Hpt27d6LRncwt8ncUIKocBpBqf_1LvzP3oddvY_1a3s_13tLF6AXmxSImASl1pg04qdAfLFUmwYqgX7Rh2vV0PAAsIlpEQHDK8P7nd18lhnck5oW2ZIAvEeN3_0zwAymKLIEnx5SIggKcZ0eQWM6rhXibFZBk


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
    if ((SPL::int32(::SPL::spl_cast<SPL::int32, SPL::rstring >::cast(::SPL::Functions::String::tokenize(iport$0.get_message(), lit$2, (SPL::boolean)lit$3).at(lit$4)) % lit$1) == lit$0)) 
        {
            do { SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ temp = SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ(::SPL::Functions::String::tokenize(iport$0.get_message(), lit$5, (SPL::boolean)lit$6).at(lit$7), lit$8); submit (temp, lit$9); } while(0);
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




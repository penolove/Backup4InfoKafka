// eJwzZDRgdCwtyWc0ZPRwcQs2csvMSQ3OLy1KTo03jM8vLTEAAJJCAnv


#include "BeJwzMvJwcQs2csvMSQ3OLy1KTo03jM8vLTGIBwBnGAiD.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzMvJwcQs2csvMSQ3OLy1KTo03jM8vLTGIBwBnGAiD


#include <SPL/Runtime/Type/SPLType.h>

static std::vector<std::string> * javaVMArgs() {
    std::vector<std::string> * result = new std::vector<std::string>();

    return result;
}


MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, javaVMArgs())
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


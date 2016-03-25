// eJwzZDRgdCwtyWc0ZEwuSk0sSc1NLDCwsvJwcQs2csvMSQ3OLy1KTo03jM8vLTEAACquA5F


#include "BeJwzNEguSk0sSc1NLDAwMvJwcQs2csvMSQ3OLy1KTo03jM8vLTGIBwDsUgzG.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNEguSk0sSc1NLDAwMvJwcQs2csvMSQ3OLy1KTo03jM8vLTGIBwDsUgzG


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


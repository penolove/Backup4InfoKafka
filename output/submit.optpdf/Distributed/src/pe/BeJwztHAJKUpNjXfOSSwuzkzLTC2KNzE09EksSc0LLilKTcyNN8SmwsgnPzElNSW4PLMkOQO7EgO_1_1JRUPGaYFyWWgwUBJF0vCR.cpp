// eJwzZDRgdCwtyWc0YXQJKUpNjXfOSSwuzkzLTC2KN7Gy8kksSc0LLilKTczFLp_0fmJKaElyeWZKcgVWBX35KKh79RYnlIFEA_0ZwvAZ


#include "BeJwztHAJKUpNjXfOSSwuzkzLTC2KNzE09EksSc0LLilKTcyNN8SmwsgnPzElNSW4PLMkOQO7EgO_1_1JRUPGaYFyWWgwUBJF0vCR.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwztHAJKUpNjXfOSSwuzkzLTC2KNzE09EksSc0LLilKTcyNN8SmwsgnPzElNSW4PLMkOQO7EgO_1_1JRUPGaYFyWWgwUBJF0vCR


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


// eJx9jMsKgCAURPGPbJm7oiAoamE_1cNMbRQ_1FbvT7Ge3EWs0wZzgJ4yw7ybCUNTDgKskhbIkQRe8QfTZAuL_1r18OARi2vmdT0cWmNxl_0Hg_0tpAa1hXEDO_09LZKIkZlU_1CDSwPgD3p8KpgJVPlmSxvpSdaA2


#include "BeJx9jMEKgzAQRH8p40HPlgoFgz3Eu6xmpWI1IW7x91W8Be1phnnDQ6Kp5a_0RwDQhfdaBGYAm4fkcG1xeEu3IsjXrIN3n5qMqZ_1mfJQu0HiWiQEn9SGaYx7e_1YVdWqG5P4Ym8ilDmf7LsvngW93rkpmg2sutcCt.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJx9jMEKgzAQRH8p40HPlgoFgz3Eu6xmpWI1IW7x91W8Be1phnnDQ6Kp5a_0RwDQhfdaBGYAm4fkcG1xeEu3IsjXrIN3n5qMqZ_1mfJQu0HiWiQEn9SGaYx7e_1YVdWqG5P4Ym8ilDmf7LsvngW93rkpmg2sutcCt


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


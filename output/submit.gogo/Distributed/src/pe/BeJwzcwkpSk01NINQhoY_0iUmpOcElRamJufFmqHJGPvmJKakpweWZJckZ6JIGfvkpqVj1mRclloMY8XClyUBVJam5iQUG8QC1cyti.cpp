// eJwzZDRgdCwtyWc0ZXQJKUpNNbSygtE_0iUmpOcElRamJuZhy_0YkpqSnB5ZklyRkYkn75Kak49BUlloNYcPFkoKqS1NzEAgMAdW4sAu


#include "BeJwzcwkpSk01NINQhoY_0iUmpOcElRamJufFmqHJGPvmJKakpweWZJckZ6JIGfvkpqVj1mRclloMY8XClyUBVJam5iQUG8QC1cyti.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NINQhoY_0iUmpOcElRamJufFmqHJGPvmJKakpweWZJckZ6JIGfvkpqVj1mRclloMY8XClyUBVJam5iQUG8QC1cyti


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


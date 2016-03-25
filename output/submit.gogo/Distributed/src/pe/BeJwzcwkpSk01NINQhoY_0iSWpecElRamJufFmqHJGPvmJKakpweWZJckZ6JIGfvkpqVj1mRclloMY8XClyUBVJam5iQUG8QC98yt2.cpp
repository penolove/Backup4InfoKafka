// eJwzZDRgdCwtyWc0ZXQJKUpNNbSygtE_0iSWpecElRamJuZhy_0YkpqSnB5ZklyRkYkn75Kak49BUlloNYcPFkoKqS1NzEAgMAfdosBC


#include "BeJwzcwkpSk01NINQhoY_0iSWpecElRamJufFmqHJGPvmJKakpweWZJckZ6JIGfvkpqVj1mRclloMY8XClyUBVJam5iQUG8QC98yt2.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NINQhoY_0iSWpecElRamJufFmqHJGPvmJKakpweWZJckZ6JIGfvkpqVj1mRclloMY8XClyUBVJam5iQUG8QC98yt2


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


// eJwzZDRgdCwtyWc0YXQJKUpNNbSy8kksSc0LLilKTcxFiOUnpqSmBJdnliRnwAX98lNS0dQVJZaDWAB_1lRwB


#include "BeJwzcwkpSk01NDT0SSxJzQsuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUlFVmhclloMY8QA_1qRut.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDT0SSxJzQsuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUlFVmhclloMY8QA_1qRut


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


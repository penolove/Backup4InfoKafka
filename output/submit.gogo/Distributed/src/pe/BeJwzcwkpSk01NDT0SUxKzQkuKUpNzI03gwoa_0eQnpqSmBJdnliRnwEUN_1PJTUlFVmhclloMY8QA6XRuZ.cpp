// eJwzZDRgdCwtyWc0YXQJKUpNNbSy8klMSs0JLilKTcxFiOUnpqSmBJdnliRnwAX98lNS0dQVJZaDWAB6hRvt


#include "BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUlFVmhclloMY8QA6XRuZ.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUlFVmhclloMY8QA6XRuZ


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


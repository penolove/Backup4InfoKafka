// eJwzZDRgdCwtyWc0ZnQJKUpNNbSy8klMSs0JLilKTcyFi_1nlp6SiCRUlloNYAHn3BS3


#include "BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0OWnpKKKmRclloMY8QAxTRPh.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0OWnpKKKmRclloMY8QAxTRPh


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


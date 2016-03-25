// eJwzZDRgdCwtyWc0ZPRJTErNCS4pSk3MNbSy8nBxCzZyy8xJDc4vLUpOjTeMzy8tMQAARMQODg


#include "BeJwzNPJJTErNCS4pSk3MNTQy8nBxCzZyy8xJDc4vLUpOjTeMzy8tMYgHAAPCA1j.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTQy8nBxCzZyy8xJDc4vLUpOjTeMzy8tMYgHAAPCA1j


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


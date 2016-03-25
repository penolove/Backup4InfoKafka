// eJwzYHQsLclnNGRMLkpNLEnNTSwwsLJCsAGW3Ao2


#include "BeJwzNEguSk0sSc1NLDAwRGLHAwBxaAjm.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNEguSk0sSc1NLDAwRGLHAwBxaAjm



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


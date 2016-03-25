// eJwzYHQsLclnNGRMLkpNLEnNTSwwAAA03wXg


#include "BeJwzNEguSk0sSc1NLDCIBwAfUgSj.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNEguSk0sSc1NLDCIBwAfUgSj



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


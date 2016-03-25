// eJwzYHQsLclnNGR0CSlKTTW0svJJTErNCS4pSk3MBQBwlwjD


#include "BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI0HAErFAdJ.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI0HAErFAdJ



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


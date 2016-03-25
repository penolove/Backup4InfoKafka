// eJwzYHQsLclnNGR0Li0uyc_0NNwIAKNAFAK


#include "BeJyzcC4tLsnPjTeKBwAT2QOk.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJyzcC4tLsnPjTeKBwAT2QOk



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


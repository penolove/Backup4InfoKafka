// eJwzYHQsLclnNGT0Ly0pKC0JLilKTcwFAEL3Ab7


#include "BeJwzNPIvLSkoLQkuKUpNzI0HACtpAXA.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPIvLSkoLQkuKUpNzI0HACtpAXA



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


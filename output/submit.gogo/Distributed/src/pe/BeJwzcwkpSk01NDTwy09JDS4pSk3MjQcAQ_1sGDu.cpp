// eJwzYHQsLclnNGR0CSlKTTW0svLLT0kNLilKTcwFAGhaAhp


#include "BeJwzcwkpSk01NDTwy09JDS4pSk3MjQcAQ_1sGDu.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDTwy09JDS4pSk3MjQcAQ_1sGDu



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


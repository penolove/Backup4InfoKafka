// eJwzYHQsLclnNGR0CSlKTTW0sipKLAexAFFPAdR


#include "BeJwzcwkpSk01NC9KLAcx4gEtfwWs.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NC9KLAcx4gEtfwWs



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


// eJwzYHQsLclnNGR0CSlKTTW0svLJT0xJTQkuzyxJzgAAehAJAy


#include "BeJwzcwkpSk01NDTyyU9MSU0JLs8sSc6IBwBS4ge5.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDTyyU9MSU0JLs8sSc6IBwBS4ge5



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


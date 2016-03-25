// eJwzYHQsLclnNGR0CSlKTTW0skouSk0sSc1NLDAAAGlvAhZ


#include "BeJwzcwkpSk01NDRILkpNLEnNTSwwiAcARQAGDe.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDRILkpNLEnNTSwwiAcARQAGDe



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


// eJwzYHQsLclnNGZ0CSlKTTW0svJJTErNCS4pSk3MRYjlJ6akpgSXZ5YkZ8AF_1fJTUiHqANocBZm


#include "BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUqEqAa3wBXu.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzcwkpSk01NDT0SUxKzQkuKUpNzI03gwoa_0eQnpqSmBJdnliRnwEUN_1PJTUqEqAa3wBXu



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


// eJwzYHQsLclnNGP0SUxKzQkuKUpNzDW0snIJKUpNBdJIorhU5CempKYEl2eWJGfgUOKXn5KK14yixHIQC03Ww8Ut2MgtMyc1OL_00KDk13jA_0v7TEAE1RMpAuSc1NLDAAAOM0EUG


#include "BeJx9jMEKgCAQRH_1J3UP9gEiH6GJ32XQhQTFE8fezW0R1mmHeYwBn2jjokpkiDHLNzABwGw28Kjgncux088XuH45YkuO_1lzFTu8qDIk5SaVQ_0sE41285NqkU8NBC2Z_0FIhzAndw5FD9.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJx9jMEKgCAQRH_1J3UP9gEiH6GJ32XQhQTFE8fezW0R1mmHeYwBn2jjokpkiDHLNzABwGw28Kjgncux088XuH45YkuO_1lzFTu8qDIk5SaVQ_0sE41285NqkU8NBC2Z_0FIhzAndw5FD9



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


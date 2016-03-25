// eJwzZDRgdCwtyWc0Y_1RJTErNCS4pSk3MNbSycgkpSk0F0kiiuFTkJ6akpgSXZ5YkZ_0BQ4pefkorXjKLEchALTdbDxS3YyC0zJzU4v7QoOTXeMD6_1tMQATVEykC5JzU0sMAAACxxFA4


#include "BeJx9jMEKgCAQRH_1J3UP9gEiH6GJ32XQhQTFE8fezW0R1mmHeYwBn2jjokpkiDHLNzABwGw28Kjgncux088XuH45YkuO_1lzFTu8qDIk5SaVQ_0sE41285NqkU8NBC2Z_0FIhzAndw5FD9.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJx9jMEKgCAQRH_1J3UP9gEiH6GJ32XQhQTFE8fezW0R1mmHeYwBn2jjokpkiDHLNzABwGw28Kjgncux088XuH45YkuO_1lzFTu8qDIk5SaVQ_0sE41285NqkU8NBC2Z_0FIhzAndw5FD9


#include <SPL/Runtime/Type/SPLType.h>

static std::vector<std::string> * javaVMArgs() {
    std::vector<std::string> * result = new std::vector<std::string>();

    return result;
}


MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, javaVMArgs())
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);


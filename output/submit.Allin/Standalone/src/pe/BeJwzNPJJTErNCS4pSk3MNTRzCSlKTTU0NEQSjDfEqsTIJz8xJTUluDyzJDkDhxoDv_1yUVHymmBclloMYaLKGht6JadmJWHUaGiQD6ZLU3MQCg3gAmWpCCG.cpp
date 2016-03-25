// eJwzZDRgdCwtyWc0Y_1RJTErNCS4pSk3MNbSycgkpSk0F0kiiuFTkJ6akpgSXZ5YkZ_0BQ4pefkorXjKLEchALTdY7MS07Eau_0ZCBdkpqbWGAAADUQEHD


#include "BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMYaLKGht6JadmJWHUaGiQD6ZLU3MQCg3gAmWpCCG.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMYaLKGht6JadmJWHUaGiQD6ZLU3MQCg3gAmWpCCG


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


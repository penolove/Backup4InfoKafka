// eJwzZDRgdCwtyWc0ZfRJTErNCS4pSk3MNbSycgkpSk0F0kiiuFTkJ6akpgSXZ5YkZ_0BQ4pefkorXjKLEchALTTYZSJek5iYWGAAA_1nk4CG


#include "BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMYaLKGBslAuiQ1N7HAIB4A3Mc4Cb.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMYaLKGBslAuiQ1N7HAIB4A3Mc4Cb


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


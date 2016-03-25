// eJwzZDRgdCwtyWc0YfRJTErNCS4pSk3MNbSycgkpSk0F0kiiuFTkJ6akpgSXZ5YkZ_0BQ4pefkorXjKLEchALAOZgC_0x


#include "BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMY8QBjhy8Z.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NEQSjDfEqsTIJz8xJTUluDyzJDkDhxoDv_1yUVHymmBclloMY8QBjhy8Z


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


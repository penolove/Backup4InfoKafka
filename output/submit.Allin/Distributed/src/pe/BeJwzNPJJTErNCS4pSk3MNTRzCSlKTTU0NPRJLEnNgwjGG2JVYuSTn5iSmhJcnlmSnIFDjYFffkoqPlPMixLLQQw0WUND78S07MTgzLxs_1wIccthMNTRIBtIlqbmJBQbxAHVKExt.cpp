// eJwzZDRgdCwtyWc0Z_1RJTErNCS4pSk3MNbSycgkpSk0F0j6JJal5EFFcKvITU1JTgsszS5IzcCjxy09JxWtGUWI5iIUm652Ylp0YnJmX7V_0AVQabiclAuiQ1N7HAAABlMUr8


#include "BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt


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


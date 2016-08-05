// eJwzZDRgdCwtyWe0YPRJTErNCS4pSk3MNbSycgkpSk0F0j6JJal5EFFcKvITU1JTgsszS5IzcCjxy09JxWtGUWI5iIUm652Ylp2IVV8ykC5JzU0sMECTKCgtKc7My0YTLcn3cHIMdgUA7qxRAR


#include "BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07ESsOg0NkoF0SWpuYoEBmpR5QWlJcWZeNrpwSb6Hk2OwazwAH_1JSDa.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07ESsOg0NkoF0SWpuYoEBmpR5QWlJcWZeNrpwSb6Hk2OwazwAH_1JSDa


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


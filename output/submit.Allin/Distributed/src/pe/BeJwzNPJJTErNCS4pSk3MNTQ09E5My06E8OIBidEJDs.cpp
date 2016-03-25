// eJwzZDRgdCwtyWc0ZPRJTErNCS4pSk3MNbSy8k5My06E8AC57wtr


#include "BeJwzNPJJTErNCS4pSk3MNTQ09E5My06E8OIBidEJDs.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNPJJTErNCS4pSk3MNTQ09E5My06E8OIBidEJDs


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


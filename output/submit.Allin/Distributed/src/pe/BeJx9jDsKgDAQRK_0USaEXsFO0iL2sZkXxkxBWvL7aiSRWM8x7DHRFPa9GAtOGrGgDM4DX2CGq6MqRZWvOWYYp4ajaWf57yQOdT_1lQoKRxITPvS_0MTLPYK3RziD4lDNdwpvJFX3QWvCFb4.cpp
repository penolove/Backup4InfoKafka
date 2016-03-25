// eJwzZDRgdCwtyWe0YPRJTErNCS4pSk3MNbSycgkpSk0F0kiiuFTkJ6akpgSXZ5YkZ_0BQ4pefkorXjKLEchALTdY7MS07MTgzL9u_1AKsMNhP9S0sKSkuwSiUD6ZLU3MQCAwDLlFTY


#include "BeJx9jDsKgDAQRK_0USaEXsFO0iL2sZkXxkxBWvL7aiSRWM8x7DHRFPa9GAtOGrGgDM4DX2CGq6MqRZWvOWYYp4ajaWf57yQOdT_1lQoKRxITPvS_0MTLPYK3RziD4lDNdwpvJFX3QWvCFb4.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJx9jDsKgDAQRK_0USaEXsFO0iL2sZkXxkxBWvL7aiSRWM8x7DHRFPa9GAtOGrGgDM4DX2CGq6MqRZWvOWYYp4ajaWf57yQOdT_1lQoKRxITPvS_0MTLPYK3RziD4lDNdwpvJFX3QWvCFb4


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


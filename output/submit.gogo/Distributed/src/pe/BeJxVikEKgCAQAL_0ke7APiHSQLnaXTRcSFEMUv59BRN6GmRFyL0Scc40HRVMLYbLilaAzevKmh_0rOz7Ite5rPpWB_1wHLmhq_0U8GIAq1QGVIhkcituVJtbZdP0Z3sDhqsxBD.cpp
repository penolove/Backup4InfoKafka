// eJxdyjEKgDAQBVH2RomFRTpBxEJsYi9r8kFBWQkbvL7aKNoNj7FkqMoqVFI9JMA61_1GE1WsCb68JR0R_1LBrmB3uJ_0H2Jj7soXKrYeDfOtXXji2ZZ4SWngNGOktV8lrdPGcgwA_0


#include "BeJxVikEKgCAQAL_0ke7APiHSQLnaXTRcSFEMUv59BRN6GmRFyL0Scc40HRVMLYbLilaAzevKmh_0rOz7Ite5rPpWB_1wHLmhq_0U8GIAq1QGVIhkcituVJtbZdP0Z3sDhqsxBD.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJxVikEKgCAQAL_0ke7APiHSQLnaXTRcSFEMUv59BRN6GmRFyL0Scc40HRVMLYbLilaAzevKmh_0rOz7Ite5rPpWB_1wHLmhq_0U8GIAq1QGVIhkcituVJtbZdP0Z3sDhqsxBD


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


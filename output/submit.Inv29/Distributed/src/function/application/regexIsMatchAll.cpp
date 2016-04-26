#include "SPL/Runtime/Function/SPLFunctions.h"
#include "./regexIsMatchAll.h"
namespace application { 
SPL::boolean regexIsMatchAll (const SPL::rstring& str, const SPL::rstring& pattern)
{
    if (((::SPL::Functions::String::length(::SPL::Functions::String::regexReplace(str, pattern, SPL::rstring(""), (SPL::boolean)false)) == SPL::int32(0)) && (::SPL::Functions::String::length(str) != SPL::int32(0)))) 
        return true;
    else
        return false;
}
} 

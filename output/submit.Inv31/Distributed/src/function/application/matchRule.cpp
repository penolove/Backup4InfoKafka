#include "SPL/Runtime/Function/SPLFunctions.h"
#include "./matchRule.h"
namespace application { 
SPL::uint32 matchRule (const SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A& node, const SPL::map<SPL::rstring, SPL::float64 >& feature)
{
    {
        const SPL::list<SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem > & temp$rule = node.get_rules();
        for (SPL::list<SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem >::const_iterator it$rule = temp$rule.begin(); it$rule != temp$rule.end(); it$rule++) {
            const SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem& id$rule = *it$rule;
            {
                if (::SPL::Functions::Collections::has(feature, node.get_label())) 
                    {
                        if ((id$rule.get_gt() && (feature.at(node.get_label()) > id$rule.get_value()))) 
                            return id$rule.get_nextID();
                        if ((SPL::boolean(!id$rule.get_gt()) && (feature.at(node.get_label()) <= id$rule.get_value()))) 
                            return id$rule.get_nextID();
                    }
            }
        }
    }
    return SPL::uint32(0U);
}
} 

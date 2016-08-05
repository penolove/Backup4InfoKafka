// eJylU11v2jAUlV_15FVa1SYmKkjgUCmmpxNp0W5XSVSkP6wsKwQMrH45iZxkg_1vscE1IqvIlpTqTEx_0f4_0l6fy7LYKDiJCV85zm3BOE0AApZ4OuDMMEzx8lWGzU_14ocwffWp7YfRz5ZbFmA3Gnt99enH79yP3rhzNBsbyTK1ZRz3u3blsTKboYe2i8XrCfvmTiPnPz6PX8PvX29c_1aEvb66ePL5PO2C_1d0ecv1B3ZFdUCqAvEoT9YwP_1mOQ5JeccGEkFHiL1DcsZzki52WGeHzSiNcZDusIsjZVeh7CmUl0fKvkI5UGDIUoFIEQPZx6nWWfylWDWxTq2oxcBc0gSbIiYOEtOXH_0bzYk6oWdI8YlkQYnNBF9ScBzwAKU1x5YnKGSSjeVP3U2wBEpBLR21aUAzyA2raWyaa48gJy_0JpGDB_0_1bbUhoelgTeOUxH2gvsiDTmhKRNzSXAcTiOckjU_0hVKnYSwwnyaYsWCBNb0NpV_1aUDusvy4NoxsB16RNalpXRes1tEtdhx8lEelwOJR_1lsBkEaqxaf6qcXzkyb4tM3F0vkvASzVN7j6A51CZgi4WpAF1_1epdgDmFG_1j_00k7oS8hxksHhvwv_18w6QpaouQk15kb1ndvQryIpZQjjUqtPW8IWAt7Bckhhr1kEttq1tCwAbcJqREOz7rg7fzCunU6XTT8hdOt4GEV41_01lANhIvshhf7x3NSYJxOr8Blgj3GxQIK04


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_

#include <SPL/Runtime/Serialization/NetworkByteBuffer.h>
#include <SPL/Runtime/Operator/Operator.h>
#include <SPL/Runtime/Operator/ParameterValue.h>
#include <SPL/Runtime/Operator/OperatorContext.h>
#include <SPL/Runtime/Operator/OperatorMetrics.h>
#include <SPL/Runtime/Operator/Port/AutoPortMutex.h>
#include <SPL/Runtime/Operator/State/StateHandler.h>
#include <SPL/Runtime/ProcessingElement/PE.h>
#include <SPL/Runtime/Type/SPLType.h>
#include <SPL/Runtime/Utility/CV.h>
using namespace UTILS_NAMESPACE;

#include "../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../type/BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ.h"
#include "../../type/BeJwrMSw2L8nMTU3NSwEAGHoEA2.h"

#include <bitset>

#define MY_OPERATOR toHBASE$OP
#define MY_BASE_OPERATOR toHBASE_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 IPort0Type;
    typedef SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ OPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple & tuple, uint32_t port);
    void processRaw(Tuple & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    
    inline void submit(Tuple & tuple, uint32_t port)
    {
        Operator::submit(tuple, port);
    }
    inline void submit(Punctuation const & punct, uint32_t port)
    {
        Operator::submit(punct, port);
    }
    
    
    
    SPL::int32 lit$0;
    SPL::int32 lit$1;
    SPL::rstring lit$2;
    SPL::boolean lit$3;
    SPL::int32 lit$4;
    SPL::rstring lit$5;
    SPL::boolean lit$6;
    SPL::int32 lit$7;
    SPL::rstring lit$8;
    SPL::rstring lit$9;
    SPL::rstring lit$10;
    SPL::boolean lit$11;
    SPL::int32 lit$12;
    SPL::BeJwrMSw2L8nMTU3NSwEAGHoEA2 lit$13;
    SPL::uint32 lit$14;
    
    
protected:
    Mutex $svMutex;
    typedef std::bitset<2> OPortBitsetType;
    OPortBitsetType $oportBitset;
    Mutex $fpMutex;
    void checkpointStateVariables(NetworkByteBuffer & opstate) const;
    void restoreStateVariables(NetworkByteBuffer & opstate);
    void checkpointStateVariables(Checkpoint & ckpt);
    void resetStateVariables(Checkpoint & ckpt);
    void resetStateVariablesToInitialState();
    bool hasStateVariables() const;
    void resetToInitialStateRaw();
    void checkpointRaw(Checkpoint & ckpt);
    void resetRaw(Checkpoint & ckpt);
private:
    static bool globalInit_;
    static bool globalIniter();
    ParameterMapType paramValues_;
    ParameterMapType& getParameters() { return paramValues_;}
    void addParameterValue(std::string const & param, ConstValueHandle const& value)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create(value));
    }
    void addParameterValue(std::string const & param)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create());
    }
};


class MY_OPERATOR : public MY_BASE_OPERATOR 
{
public:
   MY_OPERATOR() {}
   
   
}; 

} // namespace LabelStream1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_


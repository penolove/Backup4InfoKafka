// eJyVUm1vmzAQlr_1mV1jVJoEU8ZYla92mEmvptoqyVTQf1i8RIR6xABvhYyyJ8t8HJqGd2lXZgYTv4bnz3XMni8yogGUM1oRcVRJEjmxkNc8InRiG2bywLqj5id7W5V0oHD9Of629ugrkWeCH428P3umN613X7uLMWJ28HrNJJ_0BfezJgc_1t249nBZiZ_1h7NUhvf37mP84_0vV4z9ia8c_15XcPs1EQ1p77_0YvwXKelWugjamp_0Z6Hwu08I4zBykELsF4jTIaWEkvGkw0YdthAioxHvsA8vIscd8kYtHW_1S8ap9KDJXIqdmcx_0NcjNUHxlCtWTCrEWZyiKKqZmIRJjLCCLEBaet4q3urBBl39YxoqMclWpe2wFujP3EmvbUh0aIcmSRzeNIwsXTryF_0Lgu_0JKQlHAJuKh4DE1w2viIQAiKlnG2otq_1RSCjMcypllFBNH2Kl9RBrz5XVldi6EYGmJNZ1_1F4RbR1Pp_0pkNZgqvbVtf2ptKfAW_163EEauEgeYFnv5_14FuNjfVzLKtFzgBrbf4OnTToDtcrllHN0s_174neD3QAhB4EoWIwOm7dP2fvtvMWr8z6iWDV3B6V03eezkFonqIqMXhzmCiynlC8vkdVc9wcLKTBo


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
    SPL::BeJwrMSw2L8nMTU3NSwEAGHoEA2 lit$5;
    SPL::uint32 lit$6;
    
    
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

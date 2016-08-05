// eJylUl1vmzAUlV_1zK6xqk0CK_0MqSJm5TibW0a0XZKpqH9SUixCMWYCNsxpIo_171gEtopbMo0gwQ_0nIPvvefwLNEKQRIi1ghdF1ywFJjAqK4BONM0vbrFOsP6Z_1xQ5o8_0s9ww_1rl2ysLjE8_11h1_0fnfGt7dyU9mKirc66NZt4JNwbh3tkbj5sHNPbzPgvfxZz_1_0nJfgm_131_0_1_1EFbWu6YPj7PBp5fOvbdF_0bYVk01gGmAqugPBvC_1uQgRKgYWkIh5hFgNknORExo12KDBFowlOKAN9ulIOexQjjqU50fKcYP8pY2GN2l4xV4K9BVLsV6dh4NU9_0WD_06JYEqaXLI95FoRYj1jE9GUgAkAZxbVZtWUkY3k7kFP8AinIpdXbHqwW_0QEV5a0PBSG54VkyDwMuLt8_09eH7scArhGrCQXBb0FAQRnm1lwSEBIsxJRus7GvUIizmKeY8iLCi9qF0qQ_0V95NVpU2qFghFmqOq8KMkmiqcTuWbUWGy9Hpt27d6LRncwt8ncUIKocBpBqf_1LvzP3oddvY_1a3s_13tLF6AXmxSImASl1pg04qdAfLFUmwYqgX7Rh2vV0PAAsIlpEQHDK8P7nd18lhnck5oW2ZIAvEeN3_0zwAymKLIEnx5SIggKcZ0eQWM6rhXibFZBk


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
    SPL::BeJwrMSw2L8nMTU3NSwEAGHoEA2 lit$8;
    SPL::uint32 lit$9;
    
    
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


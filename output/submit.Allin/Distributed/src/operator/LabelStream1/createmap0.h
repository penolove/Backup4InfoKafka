// eJzVVm1v2jAQlr_12V1hVPyQqIgkF2qYvUoC1AtIOFjaJTlMViAEvL85ip7xU_1e_0LkwBhCduqVpp28MF353t8vntsh_1pOOWTYwWypqs2QMuICBcjR7wQclstS9GdLH0kN1JkHd4Zd0Ze1rmUvOt1J_0_1aury_0x_1KO7_0vKxayw13Nce2g1NG5xqNa88OywCIJWVXWd6a9QbGHI4sBe9Rl9b0v7Q2Rew6A6GT7rtVwYfbP9sOlxoT13dIMH956qvt5sdrWF_1_16A3Ze_1pfDXojCbDldFm96NbmzWxcqs1P7UaDzcc_1ARQZjJ0NCahx1AAjJ6uqq7pX8aDgLIAe9MSjLWJQ0xWr8JrkAaZjKURDqZsJySatNehgKiyR4qcojDk_0vsnAyWZLoOsAyQQiW1EiINML7FVEhv22EklsZwkllc3K4muJtFhBrCWW6IOsgVKbKcFCZ_09KZXzfCqK_1JvKAWlGXCTNrJCiQGqRuRflZ1HJYAEyXWqw0MJEmpPApr45RtKUTIlkmcwEHvEQpzsnPfZJsCn_1HwkLXBDEJ_0X5AEay7TC8gqoaY9yE3phh4tFIj3NVVUZs5OEVEtLFylPEHl1EqTlFgliCMQFKUMi2W4z3L17E6_0AJFIQ8fpM4DlorlC_0wTUiEV1cxcEUUYQzC5XkzymtcJiRI04i7ALF1ZEdbky_0S0SVUqsnw_0FgsCC8GXcvOUfy6PWNlkwkcU_1y2rSL1ncexue56yrz0oG44oKp8SmbTG6S0br_1KS866a9nVLAKf4Q4v3uVegilf3h9ZiO_0D0m6hxQtIw5GLGRT4wgnbqpH1Bc5n2EGCnClWUgDkULQxvYV7tSz3ismxS4r4ZuE0iK_0dfBOLybWHtcorWLsfvDjRf8FeLnkGF1vzlv_0TzWd_1w_0bzPWxOCvFyAEAF2GgJ1o9VevVudP4OkKJ34F32Eb8ZFRCxYN5uARb6Drpck4AGY82yghJ_19JQ6V3tRGqW126Is645U7r6O0p0gk4UBooB_1zKy_1Y1KiRf5oRz8BwyLfAS


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_CREATEMAP0_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_CREATEMAP0_H_

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

#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"

#include <bitset>

#define MY_OPERATOR createmap0$OP
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl IPort0Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF OPort0Type;
    
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
    
    
    
    SPL::rstring lit$0;
    SPL::boolean lit$1;
    SPL::int32 lit$2;
    SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n lit$3;
    SPL::uint32 lit$4;
    SPL::int32 lit$5;
    SPL::float64 lit$6;
    SPL::rstring lit$7;
    SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n lit$8;
    SPL::uint32 lit$9;
    SPL::list<SPL::rstring > lit$10;
    
    SPL::map<SPL::rstring, SPL::float64 > state$counter;
    SPL::list<SPL::rstring > state$attr;
    SPL::list<SPL::rstring > state$temp;
    
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
   
       void getCheckpoint(NetworkByteBuffer & opstate) { checkpointStateVariables(opstate); }
       void restoreCheckpoint(NetworkByteBuffer & opstate) { restoreStateVariables(opstate); }
   
   
}; 

} // namespace LabelStream1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_CREATEMAP0_H_


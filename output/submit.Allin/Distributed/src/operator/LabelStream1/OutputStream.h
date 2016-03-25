// eJy1kl9vmzAUxeXXfAqr2kMiRYHQJGtoV8lJ2BSgNBXp1O6lIuAQjz_12bBNCqn73GZq2eWirvQx48b3ccy6_1g2Bpr5AkJbIyzWkhJM1AH_0jqPgUnvZ6mHlkxrE2wXfIrf7BzlvdbN2HG0krYWXy_1Q1vH9Sn3bgfMnU9tNEl_0W_05Uz7fj_1ZJFsW7vLeaFa28xxTt7drfQy1s0Msq7yaK3OXnPIjHcauhEyc521vMfVzduRfQ_1zv7nteNXiNygX_1MJQsuvaJh_1IEANN0y2lVUWnhh7rj_08Xlpn35E1K9FqXM_1owADqg7_1owF_04psmF5CSPQVPrP9cKkstTAwCgbWiGtU1UCMy1GS3zlAaR0HzJcZAJXxYRoVpJeSJYEGItpjHVokAGIKc5rjHWMAmj_1NXuP5AEGeBNZo8tqK6Iwkd47PUpEShxxuC3fx9oN_0y60DSbEcHShzAQ8uIYZvdZbq1oydEAXppm_1Ur7AKIXY_1mQBhLn81m70_0mcQ1GsMiJhu96lC5sgVPUJlhuS4rbeOW89tYD6JZVgOZ8BWbAUXxy8oOAhiiLerUPrj_0rjQtl0X9qRkMdtdazblyANVjgFL_0kf1gGHlZvc6Du5fYqmCcIAkjISvirrIMNCBDF_0qyjxv3MUBlv


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_OUTPUTSTREAM_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_OUTPUTSTREAM_H_

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

#include "../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP.h"
#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"

#include <bitset>

#define MY_OPERATOR OutputStream$OP
#define MY_BASE_OPERATOR OutputStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP IPort0Type;
    typedef SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 OPort0Type;
    
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
    SPL::uint32 lit$1;
    
    
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
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_OUTPUTSTREAM_H_


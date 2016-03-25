// eJytVG1P2zAQlr_1yKyzEh0RUzUtbtoUXKS1QtQ0MljIJpgmljdt6eXGwHUqL_0t_1nOEmbjoI0iUs_0_0M53j8_1P3ZklYT3lOMR8YVmdlHESAQPo4muA_1XpdEz9fJEhro_16cXrmB6SxaAz946Q8mve7VrbPA_0tNg_0fP7wF3Y_0NZ_06LVte_1jFbsX12f4uAPIyGN4_1O0FiDi_0C5Ov0_1sV_0Hjguodd3zcTpdfp2O_1hz4XT0_0PnbctgfTe6Xbo9fj7oB72Cja3d_0nLcfLt8Bn5tLXedO0Loazu_1sbrd5YRuZawMw7nF0MCZpzBEF7o1jWZGXnMgFZZzieFqDUpuExONHTXgGiiCP8yIixIxvhQindzcMIDg9aBUgHEXJ_077gSDrroGoH0mbkthEhIfLi3GbmNhzzhplbGrnlv4uURzfz6LQC2PogWaDNSIS0mZ8yRLVzMo8FZT7TXE6RFzGXpz4m2pzQgCXeGGlTMiWa73EPxCRGWWtlDYYTQtdX_1qB_0IAJU9uPrHhSyoROeQsuS0ZdpPOaYxEzoMkvL4iRAMV4ipTimPkX8MUKMeVOkqDUo6a5BpUquKvlWj_0U5eAIV5S1_0h4QhKhWWHbBJSIWnpxLYVFUoQTJ5Xa_1eaplMCC3SkPRD7B8E4mr6cb46gUYjXx4eqjvCd4OWstX2vzb9XPe4kmGqvzcssiR8HHtlvYsxKIZiXX3Lylwql14jFbz9K6s31m3LtuYT_0AqrHfE5zwUs_0uXzkRU5fbVtotVjyNJRhDlUsoPzbmsK6wrOZzhEil4ha7W32gNiIormBOX0ZzNCdszI5_0Qtp8oEosrz3jngaRKik7LIjI5t36e17D0wjjL1RqRRK7d9xqvbQs22z0S6E_0TxlCIGsqe1fFWLRhL74kZ_1AdlWO1D


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
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../type/BeJwrMSw2z00tLk5MTwUAGG4EA1.h"

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
    
    typedef SPL::BeJwrMSw2z00tLk5MTwUAGG4EA1 IPort0Type;
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
    SPL::list<SPL::rstring > lit$5;
    
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


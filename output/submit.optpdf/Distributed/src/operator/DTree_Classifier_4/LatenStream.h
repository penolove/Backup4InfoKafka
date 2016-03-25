// eJzVV1tz2joQHr3mV7idPpiZnGCZSxJoMyMIZMDGuRiaSV86Bgvj_0lpbBkzb_137kG7HBhPYkfThOmLHW0mq_1XX27K981zwKimzoJW61u4BPHAhBw9A9C8P7srEr_154E9I7pjVxXXNfWZEr9bCpktHgITny3eZxNJ6OJqBw9X3kjmYHhB7uT5Zw6pgtuXH7FomDdN_0XPgWo_1DW_0XRXStPDX1iubf316tHjQsOKKrDkAuIcNfn5PFQEGu9jThZjoQJ10d90UXYOrDO4MWwIajGeijMBzejezHUue_1C5vOtIIdIv0dfBh2ExueoYR9Q4GwRCOOpJE_1Wwua_0hyR_1dYPIoSW8ODOWYW8VSP6lJMqN23Hvoo961ys0vTy4ZjMxR7JfGwrjXiDNiOjJ39Zqzwhl_1XI9CqG46ZqSJHPfNxODdDTUudZq6JCytTB_0WoqGy497hnuhPa3RUhBlx5MmdVccdIeoY3zriV3OXl5uxsPp_1GkjD4g0vTFIV4c3qPtw3fnSfxPlrqpxw03Ple5naLioT9CqXO1sxY1lW9ooXA91kIGksnmhJw2cmoS8u01vORS_1QlUSR_06tOB5w6mg5ki_1Czgx1Dax5fLS6AXyiEPzBdlTsA_1lObLUsxf0YvwS6TWr8KRMPXhUD5grk9nnAihome00dx8SKXRxAQEn2AWameZQ6v7mkme2C1_0SOeCAHI2_1A3id4Hq_1nEqmp_0_0RjHvRRYkX4YgOKVsUyHuRU7YcwmVQr2hOJ6uD1fk80NUqsav6OVef7Vl0kIs8nnm5riexyfxrkSmSwRMaX6IO1MmG9ZHUZMtjcEYLqwrFwdaEGPvaq187KNh1F9asy8bBi_0TIJVN2prhzP8F1lhquaozlVVSEKsB0bRwm_0Rn_0663jbE_1IbeQ9YwIurw48Thj76nGHzZrHvWq143E9Lhk_0LimOaOBssFJ_1NUfOUSQ040zD5GokG12yFPkysPnqOKNRtCp_0Mjit9C8KzecWmMsVmpDfmWKXSjk3Gpo_03tueMOlMIW4o1r4v5xJTs0D75dZLzN5vh_0IOcyLqR_0_16BdIdPzH9YT_12v24o5UjwDe_1no_1Ni_0FfHGmY3CiY9uuzApwrCTAnMKs0d1mB_1Mi2RmCLbcdAu_0zfjB1NIJw0bSJCa1Spv5xawWuolZrvJsxK_1InzxIIgBS5sW_0Bhk3YUoMWCDGn7c0f4ku8G_1QBe7QJc7WqduOaKV9IbbVgtbn8w5LznsUeX_0Xk0frUVEhLYaJoXmpRnYlS8UMcOSk_1xuNtuxIz3jjEI22fHs1jZplNDp_1iUaNHRolUclGGgFZvYrDAOa0RpFmfYdtfMo2vliG3qSVLWHgDgX3nPjzJ1M24zlbHY7cPk8m2d3KpVCJHAMWbTZuOirFiHqYBJ6dd3Axp9L_0Lo3TZTv_1KekK6aeYiNkFLep40xvaLi8LKrd04WO6zLFCrYjImVoXB546rbjZuzS107p3tBYkxhXWt8um_1l0czx7d5cSr7zUZhd5SJ1sAYzqrJNe96IF801ApozKEJVzed8dLl9hSrC8tYJOG_0DTjhu_0aX2dKdhVJU0BaCNL0wFy1WtEUtjygEfCkoa4cgFnfgUkTFU0yiRcBCVwTf0w3ZnxvhlTVO40yFmxGwzu652n2WfVJ_1jMdRp_0vQGYNiK6VGYjU_1Ku4s3bKOuuXHBVnKh4Qx9Vn29TIAQv7vqLhZ0mkHNKJMN0CviJr7p_071Iq39BW3k_063CPgUwbG7ZGQSBGpgWSFICkum4l86cM_0l


#ifndef SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LATENSTREAM_H_
#define SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LATENSTREAM_H_

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

#include "../../function/application/matchRule.h"
#include "../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h"
#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h"
#include "../../type/BeJwrMcw0TSnNza0EABAkANw.h"
#include "../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR LatenStream$OP
#define MY_BASE_OPERATOR LatenStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::DTree_Classifier_4

namespace SPL {
namespace _Operator {
namespace DTree_Classifier_4 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt IPort0Type;
    typedef SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u IPort1Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF IPort2Type;
    typedef SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 OPort0Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw OPort1Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw OPort2Type;
    
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
    
    
    
    SPL::list<SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem > lit$0;
    SPL::boolean lit$1;
    SPL::BeJwrMcw0TSnNza0EABAkANw lit$2;
    SPL::uint32 lit$3;
    SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A lit$4;
    SPL::boolean lit$5;
    SPL::BeJwrMcw0TSnNza0EABAkANw lit$6;
    SPL::uint32 lit$7;
    SPL::rstring lit$8;
    SPL::uint32 lit$9;
    SPL::uint32 lit$10;
    SPL::uint32 lit$11;
    SPL::rstring lit$12;
    SPL::rstring lit$13;
    SPL::uint32 lit$14;
    SPL::boolean lit$15;
    SPL::boolean lit$16;
    
    SPL::map<SPL::uint32, SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A > state$nodes;
    SPL::boolean state$nodeReady;
    SPL::boolean state$ruleReady;
    SPL::uint32 state$nextPtr;
    SPL::uint32 state$nodePtr;
    
protected:
    Mutex $svMutex;
    typedef std::bitset<4> OPortBitsetType;
    std::vector<OPortBitsetType> $oportBitset;
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

} // namespace DTree_Classifier_4
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LATENSTREAM_H_


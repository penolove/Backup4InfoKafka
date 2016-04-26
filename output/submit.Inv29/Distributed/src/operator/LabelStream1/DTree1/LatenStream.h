// eJzVV1tT4koQrnn1V2S39iFUeSQTLiq4Vg0IFiRENKDlvmwFMsRsrptMgOD630_0umEAA96gPJ2qZ6cx805f5untcWz_1xiKqrxG802p5LLANAwAQ_1EIKvJyfl_0HfmmVOiWmZZsm1dnUrRuyGR6dOdp_0OTp6_0ZucS3cbmF_0wtnIDLQPyNDcXbPIJmzu_0ID5jX9ui7ee7bx0L_0RHuyl9FhTx4Z9c3u1eFAYbzdWFfqMR7hhlxFHfY6vdFb8eD7gxkwXdXkbYWP3Uo3l_1Rona8s_0N_0tdD255X2V_0c6v7G070kXqLfvRaCI1OUc3cjWGtTeFGE0EcL7nVbQcJ7uIakT2rWH6qzf3OwhPcc4EXazejzlkXda4WaHK_0b9lqrA9Et9LnRh1PmBLeEX8t5Y7mi_0r5cuBDftXWBUFkfq_1GGmkpqHWlVNAevCU3epzzms2OOpp9pjwu0ZzjRcsRxlWb77X7qKX96vBtxpyfr0b9yexxJfaIMLnWSFuF16h9d9X60f0ofFtWmP6qYwu3U9R_1qo7RYifydMGMRFNYSUwHtZCGhB1TfUfoWRUBOcNVZ97nf0JZ4Af2DT_1qMfJgPhDP_1NYUtTWsOGwIUAMukQj_0ZloydoE45BsNQ7IvohdPNUmFPaaiwbviQV2CzD53WJL9eK_0JZelYMvMDCAIWfoOpak5ArDcuqae74CUZEgdkzMgqsPUJnkbrmViqqy65yBp9kHChfZECea0iGQsyUNtRjCdV8vqEoip4v99jpFqBVvW3aHW6rdVZLHJc4qimEsvOt6dBpkAGC2RsAR6sFAmrBauLLIP1DSEoP1kGLgdgWDLKYvTPFYknq1Z5YTmaa0tTXFYsxSrLEpGAaZk4zPuV4E_01LWd9Lt6Q_14ABnKhoPB9RwaPOKDqrDP2l0YjG3aSMuEGtsXQdp4MnyaUzhDymEgVOFEx_0hqLeFV0KHiqCD58DgKrpYocMDoN_0BM3pLLAuTbAe4kbMKpWakcpYd_1Fa94xSJxKhC23NYlHfqYIdmkcvRxl_106kdf5EJaTt03z8w2OE79R_1WB_15XTUkfSI6GnWx0ntdveXujfBaYEx3YZm5SaMNG4ssApo9sUc_1UXgpTBBt2sgXbpFxvYqiEokNpHJNKqUm9UIsnVcc0U3pV4iX0JwviCICEb5GvQcpImBAD5ojx9z3OJ9EFfgZd4AZdohyduO0AatArYlPOob6ed1hw3sPIu5ucPFiF8oBBCYwVzUoVsimZS7qHQyf932i0Zkdyxmu7aLTm27tpVC_0i0ek_0GtU2aBRHJR0pBKRVKgoDmOmWROrVDbaxCdvYfBn6kE62gIEbFNxy4p8_1VNGM12y1O3LbPBmnVy47MJWIkcG8SUetRikfUQcTzzGzDs7n1KCrS_0J03sx_0invB4FNExPTSFva5ya1tk5c5yDVd2IguMywFWoTkTLSLAh84Lb_1ZlyS1B3XvYC2IlcutbxZN_1Vw7Xj26yYl332lSCn0kJp0zRrcWca7b64Fs01AqojKEBVzedse_0m2yhrfsW0HEbfJxyw7X1n1MpvYAkKSApBEl6oC4bjXAKXRzQ0PC4jS7tMLO6YWaQqIIkE3sREM_1W8UWyMeU6UyTLznGYsWA9HA6DPY_1Tz7JLsp_0DYfj5EqTagPAymRqRqH8ZddZWUWe9z1FRpmIBsWx1uk6NDDCw60oKfpWE4DCYCJMt4Duy5va5S7T4SF8xG_0l_0bQGbWHDoBhmqBIHsGYYP4sKSQvwLVSXRDF


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_

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

#include "../../../function/application/matchRule.h"
#include "../../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../../type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h"
#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h"
#include "../../../type/BeJwrMcw0TSnNza0EABAkANw.h"
#include "../../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR LatenStream$OP
#define MY_BASE_OPERATOR LatenStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {
namespace DTree1 {

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

} // namespace LabelStream1
} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_


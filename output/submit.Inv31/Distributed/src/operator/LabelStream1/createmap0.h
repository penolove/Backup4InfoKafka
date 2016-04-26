// eJzVVmtv2jAUlb_12V1hVPyQqIo8CbdOHFOhaAWkHC5tEp6kKxNAsD2exUx5V_1_1tiJ0BYwraqlaYZJHyPfY_0v7z22IaFXjanjOXShaa2YUOwDBcjJ5wjsV6tS8qWLEElN1JlFt6arGot613bnne6kfXPbNxaO_1KO7_1PKxay50p6_1ft5u6PjjW60H1cb_0MAKtLt0GNq1FvYMrxwJ33mn19QfpDb5fDvDsYPhluqA4_0uOHJdDjXn7qGiaO7z7XQaLc6etP9_1sFoycHT6XLQGU2GS7NN70Y3Lm05yo3e_0nTVvL9m5EeAUIuigzGOA4oiYPYMTfOt8Jx3IkIjJ5hWILcmHrZoowYvQeZkUZp5eA6hWy7JpJ0DCkgye6DIGQtFfrh7MlDS6TLID4CUIsVGGHvIClJMTTEnoEdqihylyKuLlXrXUu84R1gvLNEA_0QSl2HFJwCdvCuW0GIoi_1yZzQHrEPpISAFm_0ZPIfYtLYdrA0w5FLQmuMpCmeYsm2qAUCHCAmciZ1J8TROul_1lCnwQcTPx_1MeTNqmrvACahrnuI6DMXVwQBKbR6hpFLsocJZIyBarThF98BEh1hQJYgXyslegkC_0yyHctnvF1nAkUhCJ_1C3seWhmELbAJSIQXF5xYFUXISVh7XveKFmsTHGVh8NxDxz5wk63JZ2nvHCq1tHt4KJa4l5Ou2tYB_1Lo5WVWLCoxT_1LbJIgm9h7G1qnWmt_0x4riuvaWxKbtNrpixvv7aXArqNbFs2hs9wSxfvchvBTC_1vzyzwW6CynWjxDJJ45DsUCmzhVG21BH2Bs0fHQ4KcS1aaAOQRtIbeor16Xnvl4tgWBb9PmAz4ZVMsYrm4dqhWeYVqd5OXB_1ov1MtaUcHlaBH5P9V88jdqPt2h5jQRL3sAqMBFC7B6orKrd22zdwCXvQPvsg_1_0ZqggUcGsfQVoHHrofCUCEo11244q7KlTGszsJWFUVsM2ofnhxGTDl0m4E2TROEIEsL8wq38vmdCS8WRHPwHwxNs5


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


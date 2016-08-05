// eJzVVltv2jAUll_17K6yqD4nKIAmXtulFCrSrgLQDQafRaaoCMTTNxVnslEvV_177YSSAsYdPU9mEGCZ_1P9vE5n79jQ3ynHFLLsehSVVshodgFMpCiTxXsl8uV6EuXPqo0UWce3Axqi_05w9KzbvjK8sv3j2WihPXf1AQ5u72q_03m51tKb9dKW3JO_15ZDXsjKej1aBNb8fXNm1Zcnj71Jbmd9rR_1ehbs1Z_03C_1awlb0Zb1r2otOd9q_0vunrS0v62V19_1dIdLDWrr923m5o2PNLq3g4HWFnZDapfjnvDgRQO7UWv2deWpD9y2IIqINSg6GCCQ4_0iAAx6uqq6hn_1GOwGhgeXNSpBbUwcbtFGDFyBZZFCarHAsQreWRJN2Dsgg4vdATremyPV3TwZyjU_0XQHYAxC5ibIyxgwwvxpQYszxaVWKkGiP_1zGe8upbzV4_0RMAM1cpOOQJayGDsuSOEkt1KW3hSvLBcRpeRjlqt_1IB1UHrGLKhGADLcy4D9kQEPTwpU5DmziGxNUmeEZrpgGNYCHPcSqhNWK5eNgfV5_1FSFwQcAL7GUPRm0jCXgOVZX7_0Bx6E2phj0Q2j1BVKbaRZ62QkGxWniH64CJCjBkSxBLkiilBIasPkWctnvJ9rCkUhLz_1FnYclBqEbbAJSITn59yxIoqQO2HtZd3LW6xNcZCEwbmHlnlgR6nJp3HvDMq1uHt4KBYsL3aatq3a_1b4pyrJBBeZT_1LFhkfjOw8RIzzoRZlLZ65NXVTYlk_1TaU8Lb7_001h24j25aJ4QvM6uI9L1CYqOaj_1Av8Miltk16C21zxKyMiC5Jw7FoUCmwg1mM9Ql_1h_1NFykCBl6IwpQg5Ba_0gt6mxk1Vksn23Z8KuJCYXfW_1ljLpbfO_0h6t_1PiQD9K35ssuFP4iTNxIu7SPGt53RejeeT_1rwFZyhVB_1PIUyl5Wdug_0pud1DwAF2GgJ0hcrucbXNntTcMGb8p558VeoCiLVzNuXgIa_0g85S0ZBgoplmUGKPp9xgZi8KppQOm4RmhyOTDV9EQU_0RQcMAEcD_0T6V_1pRJhsvFopzRHKUryF4qTAnX


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

#include "../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4.h"
#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.h"

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
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 OPort0Type;
    
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
    SPL::int32 lit$4;
    SPL::uint32 lit$5;
    SPL::int32 lit$6;
    SPL::float64 lit$7;
    SPL::rstring lit$8;
    SPL::int32 lit$9;
    SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n lit$10;
    SPL::rstring lit$11;
    SPL::uint32 lit$12;
    SPL::list<SPL::rstring > lit$13;
    
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


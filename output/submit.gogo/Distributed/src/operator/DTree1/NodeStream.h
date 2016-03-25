// eJzNWG1P2zoUlr_1yK6JpH1LBmthpoQ13kzrKpkJf2DJA9xMKjWkj3CRKHNoO9b8vcdKQl5PddiDdGaS4rn18nuf4PCdu4LFmyG1m87Wun4UBdxcIIzX6a6N3zaYS_1T_0EzpTbrqOYnsfsqSn6Pp3R1SAYmXw67zHWnL_1bTudrjyqf6cXSHxkqXnf4lfFwo_1asS_0_0LcUuHj_0zrsXETeovbi4l5663Mf9v29cKbfOsvb2dqWGPIzQxd_1rgfG9ery5_1fznvjYPm1x2uWLMl66kSP615_1cn7Wx8C0tT8euNq451_19PH_06GN5hazwceZPhj4FqjZ5GRmf9edo7e6Qzn8SrWyjgJqfvHdeik5Aj42qo6zs4iNJ1fsgq6_1ZnCOW8EPQn9vyA_07YzK37AKArsew3nHNhxCUGaJnpq8WsxhoExkozduy6jppOMacC8FjCvDcw7BsZOkrHQdnjkoBjqANO6kMsqsC_0GgGAICYagYAgLhsBgCA0_0gZZDgDCEiECRIRiwSSBERIMGW5BNCBGBEBEgQAQCRLrViZoKjEEB0khpEClzd0GVuRUG1Ff67tJhrmkFisF9ai4Cg4eW7SpL138MPHNKlZk7cxXL5CZyXIfGWhcrnu25fnbcazQELZAvxPH5QIqarovJX1KBDHT9eiulXuQaZ46cWm3OKL9jtkPlRuNUrLUfJFnXc5IaASpqKrD2SCrlfqMhCWtxe856u_1hmCPKGjiySPHVq2wo6J_1aP_04O_03JA_0bi0HHrubmgH_1Jxe1IykfGemTrscz5Kovye4p5O_1UY1FcdsF7JIl8OJLk_1OFtiDPV_0E8QzLynLI_1hzTzSII9aJYd2DknUhARKhzDZKb8p2wn1Gdn1sYsOy6Hwth13aukp82i50rO0a62TOF14EcEF66dSEN4vbC7J8bcJYyeNU2kjLec2o3L_0_0G1Ej7KAZkOvSpWs5uVTpZoue6dMp8TSy4lLy_1xfkDYZ9oTyLnRIsVqOdw0SuuJ_1DRIMKgCuSAAM5Q1loOwXqAO4LASwW08mC2k9wQ9RUePHrdcxXEtG6n87fR6DOE4gfuPsfKvtu8mTqKDA44ibj8nETjmb62mdccFp8iJUdb_0gNLtb0qqW9pH3RODJaxQekplM4YmQ_0Dcxneb9i_0nWjqbTA_1sb2_0mJr1ScuFWqzv43pWItSjeGahGpK0Zx22SfKkdl_1xLCkuJBytVjc7A5SF8qRT5tge9xQ5W9eNMPSZL8wfrIa9sx2cj0H6lf_1165ZS8m1Z7mgn8Vbx_0m9fkmjuynP4FRcCM_0JQPHoiu5cYhTkSDd8nve_1_02RVnx_1iSIZX6IdirY3FBLdGFzgevHbHw3iqwZBSWaj9FKkIqGXmWEVi8tLYhu_19oeFeMd2ZcdEAF4_0zzja3hlVJDIYpZkOuvcLjdecAQ


#ifndef SPL_OPER_INSTANCE_DTREE1_NODESTREAM_H_
#define SPL_OPER_INSTANCE_DTREE1_NODESTREAM_H_

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

#include "../../function/application/regexIsMatchAll.h"
#include "../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../type/BeJwrMSw2ycnMSwUADOECD1.h"
#include "../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR NodeStream$OP
#define MY_BASE_OPERATOR NodeStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::DTree1

namespace SPL {
namespace _Operator {
namespace DTree1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2ycnMSwUADOECD1 IPort0Type;
    typedef SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt OPort0Type;
    typedef SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u OPort1Type;
    
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
    SPL::rstring lit$1;
    SPL::boolean lit$2;
    SPL::rstring lit$3;
    SPL::boolean lit$4;
    SPL::rstring lit$5;
    SPL::rstring lit$6;
    SPL::uint32 lit$7;
    SPL::rstring lit$8;
    SPL::rstring lit$9;
    SPL::boolean lit$10;
    SPL::rstring lit$11;
    SPL::boolean lit$12;
    SPL::rstring lit$13;
    SPL::boolean lit$14;
    SPL::rstring lit$15;
    SPL::rstring lit$16;
    SPL::boolean lit$17;
    SPL::rstring lit$18;
    SPL::rstring lit$19;
    SPL::rstring lit$20;
    SPL::boolean lit$21;
    SPL::boolean lit$22;
    SPL::boolean lit$23;
    SPL::rstring lit$24;
    SPL::rstring lit$25;
    SPL::rstring lit$26;
    SPL::uint32 lit$27;
    SPL::rstring lit$28;
    SPL::uint32 lit$29;
    SPL::uint32 lit$30;
    SPL::rstring lit$31;
    SPL::rstring lit$32;
    
    SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt state$nodeOut;
    SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u state$ruleOut;
    SPL::rstring state$nodeMatch;
    SPL::rstring state$ruleMatch;
    
protected:
    Mutex $svMutex;
    typedef std::bitset<2> OPortBitsetType;
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

} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_DTREE1_NODESTREAM_H_


// eJzNV21P2zAQlr_1yK6JpH1LBmjhpoQ3bpI6yqdAXtgzQPqHQmDbCTaLEoe0Q_132x45Y0uWztQNoMUt2rfb7nXp6z45DWE_0ZRjy0t6ySJWTBDGOnpXxO9qde19P8u8cfMC3zNCUPqjR0xj8iELHrxwGHjaYfS_0vTNajlbhkT7RM7m0cDW8bLFLuy7K73jnoef7WvSv6dfDu2rJJxdn42c63Dh_1Gh6l7Nw9LU7v57oSYWiYK3o_1Pvt0L5cnP_18etoZxvMvHVaxZW4sx376cdnpjk5PuhhYtoyGvcAcdqKLn6cPZ_10b7A77g3DU_197T3cHDwG4tP407J_1dkEhl8dwPFzGHkrR_04ZJQwZF_10LWsLA5HcFyW0tG93D6GcFcL9mb4oZpHnTza_1YJQG9q2p5wzYcgtGpiFm_0ubPQoYBmZHJboOAEsfPZCawrgGsawLrDgHZUSZLPJ_0l1glRC1jWhkzWgXMxBARDSDAEBUNYMAQGQ2jwEbQdAoQhRAYUGQMDOg0IkWFCwgakE0JkQIgMIEBGC5C1yzITgmMWA4S0aTAj2tRNYhJp3WDu08BxY81mEXFmsc0S1wu0eRDdx6EzJtokmASa6zAH_0YFPOK1xcvPCIFpndgVdoBmKBA8_07inpsCyx_0LPkwtiyLlesGaamMeqrUmt9QtgN9Xyi1mrHYq93p6iWlWPPFNAmfQJ7D5RCmddqitDGx_0N6to1ttnBe31dFPUujVmOD0sT5fN7rqjXlw0pzHNKbsROz97moHSj5yCgfLYuvUMu2ZKdLyN9ISNO4bIP3QBGpf6Co_0Tytifyp_1REEdW4JzWN4NYtMyKJGwaCtQ5IOwXbKPuxs6V_1p7cz1a2dXxy5Nln1hbZNPKt1T9KMbKI_1Ktm1NYWQWpg7e0H6sxMntzGOKyn_1NPHZUO1aelPnUo0TNp9_0TmBEak7XoRaWybm_15UimXy84l0yp46TnjZEf_1D8pmjT1zeRtKUqwX412BhCzYf4MEgwyASxQAQ3lFGijaBfIALhIBbNaDQxNS7eC7tKmxw8bLPFzpDGl_1U34egjiOIP_1y6nyt49vZp6GDBI9T33zIFraK1Vzt1gkTPs3uPGXzN5hme01mWdMu9J4RvPEShodoZs3whqD4V1Et6_15ZdWNL1TJhf6NbZnyp4_1BR6jq7P4o2e5E8GOpFRlUz4uNp72lP3vdEqq9s2uGdqIY8J95l_0fsX_09Ok8nyHDpzonkTVV74VMI7XG_0ficsGPT2TrvOJO_1_1g3MDbM4AHs_0S5ZqLV9LOvXKDbFf29Re_0NqkUaSP2V9glaPByO9zAfAzf_03T3f_0CjBQVnRIvld0JKhsrVjH4l2R6cYvfd7zE5ulE7PafP4_0YWj1ctORKC4kixA07xceNX40


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
    SPL::uint32 lit$28;
    SPL::uint32 lit$29;
    SPL::rstring lit$30;
    SPL::rstring lit$31;
    
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


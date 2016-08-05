// eJzNV1tP2zAUll_15FdG0h1SwJk5aaMM2qQM2FXphywDtCYXWlAg3iRKHtkP898WOG3I52dqBtLmV4pzYx_0c7l892FNBmzFzqspVlHcUR8_0cIIz35tdGbZlNL_17exN2Gu72lOEFB34oh_0SGZk2Y_0GDpvc9Sht3r3JzWCrgGifyOkiHNo6XnXYuX17qfemZ8Fn_04oM7umXffsyDuZXp2PnKlg6P9ruxTwYfz1eXM30uF6Xn_0k6_034zsi_0WZz_0_1nvRG0eJLj9XPWhiriZc8LnrH45OjYwyPXIWjvm_0OeuH5z5OH08E1no4Gw2A8_0N7Xp8OHod1ZfZr0ju7JLDS4ghaKmMPIW8_0fknHMkH0_0sKwNzERyXhjTyrztXYVyVohQpPrCiIWuNyu_0YJTE_0a2p5wzYcApGpiF6evGzkGFAZqSyG9_0nxPFSmQmMawHj2sC4fUB2kMpi12OJdULUAYZ1IZN1YF0MAcEQEgxBwRAWDIHBEBp8AE2HAGEIkQFFxsCATgNCZJiQsAXphBAZECIDCJDRAWTdqsyE4JjlACHtzp8TLXklzlyzxSOyWTx1fW3hh_1dR4EyINvNnvjZ1mIM83yOc2zjDuYEfZvlcwxNojkJBho87StIsSwz_0LNkwsqyLNXUGiUGMeqrU2pwRdk1dj6iNxqGY694qqmXl_0DOBUSRQYO6eUiruRkMR2nh7zHqb2GYLlw08VVSxNGrdCkQm1uf9_1rHaUD6sNUcBvZ44EXufi9Weko_0H8tGy_0Ai1aku6uoT8jQQ0icsmePcUkfB7iprPzobImsYfQVDnhtA8hlezyIQsapUM2jgkSRMcp_0zCzpb_0ld5OXZ85uz52SbLsCmvbvFPrnrIfp77yqGy6mSmMzIPEwQXth0oU38xdpqj8a_0qxg8ah8qQs7lxK1Hz6PYkeoRHJRC8qlWxTy5dKtVy2LplOyUvPGSf38f_0gbDLsqcu7UJJivRzvGiRkyf4bJBhkAFyhABjKK9JA2S6QB3CZCGCzHhwak3oH31LfYfutl3m41hnS_1rZ87oM4DiD_18up8reW76dPQQYLHiW8_0pAM75Wqud_0uMCZ_0mJ52q_0QWm2VyTWdW0Db2nBG_08hOEhmskY3hAU_1yqqZd0_1q25tqFom7G90y4yv7Di8VXad7a9Cxb1ILgztRUbdZsTb087TjjzviVRf27TF7VANeE68S_1P3L_0YnSeV6Dh064T0J6498a2AcrzvJxeWcLx_1LrfOSO_13j38AomMED2PemZKk2drGsX6O8Kf57i7qFo0USSX6B9QhaXxmM5DDvAyf_1317Y_0S3AQGnRIXlL0ZGgskyxjsW9ItWNX3qp5yu2Kyumtfn8PmNofV_1TkSguJIsQNO8XtI59AS


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_NODESTREAM_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_NODESTREAM_H_

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

#include "../../../function/application/regexIsMatchAll.h"
#include "../../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../../type/BeJwrMSw2ycnMSwUADOECD1.h"
#include "../../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR NodeStream$OP
#define MY_BASE_OPERATOR NodeStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {
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

} // namespace LabelStream1
} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_NODESTREAM_H_


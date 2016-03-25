// eJzVl9tzojoYwCev_1SvYnX3QmR4lqL1otzNotaMgtUXb6b7soERkuS4EFbv930_04WUCs3dP24dA6Q74kX74Lvy_0Ja_0sVD6u6iv1ms_0O52DIABDT5gzT4WqlUo_1_05Z86waplVybZ1dSaF74aEZ4s7T0eVxdfUWOzbqNpGg5UzFGnon_0GROL_0nWZmze_0ID4jX9_0kS892zjYXAjPdhr6bGhTgz75vZq9aDQ3n5ddejTHuZGPVocDzi_01t3wk_0WQm9A9tsfbLDL2T9UY3m9wsrYecPP_09fCW91X6N7e5v_0FEn1Vv2R_19NsuOT9mGuV_0HtXWFG08FcbLmNrddVnBX1yx_0ZRazmehD0a0NuHHXE2aYd8Rfa7mr_0aJ6vh76kN90dEEQ6d_0biYbbCtu_0UmrsK_1rW3PhxyWs2M_05q9pnyuGaXHC9ajjCp23y_1M2Db2q8u36HN5flmPJjOHzdiHwvTaw13VHjNdu6u2j96H6XflhV6sOnawu2MHSzqE3a1V_1NsRY9FU9hIdJdtsxor7BnqO0LfqgmsM9p0lwP_0J5QFfmjf8OM_0LQ_0XQ_1HMb8_1YjoYUhwkUNICLJYy_0mZaMXCCO_0GbTkOyL8MVTTVxjjqmw8a58UJcgtc4dkmQ_1WmtqWTqSzGwDAoLTN8jEUxxCyBun1JJV0BqPsANSbqQN2OmC9XA_0HUl11cUXaacPkhP4FxqQtSqUMSClajeL0aBa1p5AVAfvj3ukqVFg1clbrDrdteosEjkudlRTiWTnu8MgXSCDBTKmwDZYywlBdWEZqLqQPRc51StrZeqWJLtVETtIMlwRe7JqVVeWo7m2NENVxVKsqixhCZiWiYJiXCM_11bacbY7fUJSAAZywkj8dUeRR51QpbVbpS7MZtntxbXfJBmDpOkoaC8ktpeA6pmIDKgrCPwNR_16pUJg8Vqg_0eAwpVk7iPh4eVfgSypbRiXZoiPdAbUlIut0KTke6ire0poyoSLhX6mtZFfacKVmgdPR_0l4l1K_1PiLqlayg_1D9A8kK36n_1MJ_1EXzUlfSg5GnLS2XnavmX9DWsTcSf8dFuZQYEPuSKWUpg8skU9Ua_1iSGFk2PESTItyvamhYqoUSKOc1Mot6plaLVQdlejyixHPQTwZEGUAxOSFsQYJwjAGA2bA_0PuDxyfhAj8DF5jDJay3cdgOaCUHOGTKGa0v3zss_0N6DzLt5Jg_1uKFmFZDuLDE1LFZyXLCXdQ0GQ_1m8YbemIv_1HGPoy2vL0bo5MijE5fw6iRwyjKStJSMEj2qzANYE72KHxSz9HGxLQx2W3oQ06lBQTmENwJ4p8_1VNGIl2q1P3O7nEySe5BNXMVi6DBvlsJjQzmbUQdhzzHTAc7WVHJCi_1N03kp3Rec60hWCmNykgjNrfJXKc5lRucWFCXGZI4lYEcAZWxcmngQtu9iXuLSTfe_1gXhAZl5nfKhr6uX68RDTPxLvvJwlCH6mzlHFGt1ZRrXs1AulDQ7kIZQhzLBOCCX2ReoA9W0cXMZSU68xYWXaOA5ThSdAcEYOOk27Zxelu0gy6L0ESdxDcmOLBxzH2l2QtGlhFR853Riuk_1GMdoXNFig6Oy5AsAmMP4IHbQmASBLJnGD6IymGi4l99dU1f


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LABELSTREAM_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LABELSTREAM_H_

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
#include "../../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h"
#include "../../../type/BeJwrMcw0TSnNza0EABAkANw.h"
#include "../../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR LabelStream$OP
#define MY_BASE_OPERATOR LabelStream_Base
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
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw OPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw OPort1Type;
    
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
    SPL::boolean lit$12;
    SPL::boolean lit$13;
    
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
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LABELSTREAM_H_


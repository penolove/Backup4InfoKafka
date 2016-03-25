// eJzVV1tT4koQrnn1V2S39gGqPJAJFxVcq8LNgoSIBnTdl61ABsjmuskECK7_1_1UxumEAAPerDiVKV6Znp_1ro7X0_0PY2kFFyuagr1arek62NQBBDT5gzT4WigUw_1_0pa0ywYhpFybI0ZSIF77qEJ_1M7V0OF_0dfEWuxZqNhAvaXdF2noneOBOL2nWZmzOuID4lXtuireu5b_00LuRHqyV9FhRRrp1c9taPsxod7_0uMvRoF3ODDi0Oexxfaq_150aLPjegO2_0EtFukHtq644eOCVy1m2Fat89njil1wvGjawqhs8d1mj22ov9t8kzYWF_0uhJc_1o3rptCZOpMGiiVa_11Y0AvR2yVWf5oDPZbURneq3Cyuupx0_051_15b3FPoPt76_14USPVW7Zn90Gyw7P2IqxX4e5CRg3HAviaMWtb9us4CyvWXxgF7MeaX3RKfW4YdsVJpi3xd8rua16onKx6nuQXzc1QRDpP_0uRihszttGaldgD_0t4Ur954_0rgWu1gYX6u4qcBrtnnXavzs7NU_1WdJD0RDWEt1mG6zKCsvspZ4tdM2SwNqDdXvR439BWeD71g0_17NJyf9EXz73GhG2qaGYzvoIKcLCE0TfDlJEDxAFfq_0mSdRm8uIqBS8wpFQzeFTXqCiTs3CFJ9kJbY9PUkGSkBxAQan2DpWiLTdjyyi3l2Apa4QG2QcKNJICdKVgJ9tOhVFMcfJl0_0iiLfP8CAGlUgYwBCVW7WQwXldJ4fFEZvD_1uoaZKBqrqa1Cd7aI6D0W2g23FmIWyi91lkM6QwYy9kMlYWMoADMtbQlCcmzoqzmXXQXaxZS4NzZRkpyhiG0m6I2JXVszi0rRVx5ImqDgzZ2ZRlrAEDNNAfrUukZ9imfYm8a_0oJ0AHdlDqn04o8ihTKpeElftSqwXjTlT8HXJCmJqG4sFccnIJxp1SEYDCDOFfvqjbyuXJQwXq_1eeIQsUg7uP_0caUfweNcUrEmjZHm6w2ok8_1XA8hIc9AGewJUQcK5TF_0TuqjvVIaF_0snzSSLeudiPN5S6nOWH7x9ILHyn_1sN_0En_1FkLS_0ZKvITmbnafOW9jcoWMSd4NOtpxb5PmxVtoTC_0JFN6ok6yFEKI92KTDB1ynHHuoKpnC8Nc1LK16lnajlXNJSj8y8gnv14MiDMAIiYF8QaxNyEETFgihhv70w_0iS7wM_0gCt_0gSFOEobEe0kg4PGXJK68v3DjO_0dz_1zzjYnjx4zaYXkjAuBJqUzvC1ZSJqL_1CD932i0YUf0jVf20WjDt3fTqJpFo7NDNKps0SjMSjyaYRCfV0EawJScUbha3mIbE7GNSR9DH9JQZjBwi4I7Qfz7l8pa8VKt9mdulyej_0KJkEVexGDjMG7mgl8inM2oj7NpGMsDpmkratihPF_1XkVNjskamAiPFVy29ko7vWNi9TKjd0YQK6TJFEUPjkjNAFiSdBSxv7EpV2cu4dPQtCcKn99ayln_0vHS0S3OfGhV72YTp_0lP5dyUjOXYQ08GJl0u5IdJX9X2KWSgGVUAchslQFCfkLcEAHArqWhy4jPlGNPWFm2T_10qAKv_0cEBMnsbTsoOT02ToT1_0BGAzwb2DR4tOoYlwRWzQwM7rVjwxuUCxKH_0oUvVXr_1DFGBlEf10La78Mh8Q9G_1sEjdxMfJASyq_0seCOtsrOJfG6tyDp


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
#include "../../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP.h"
#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
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
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP OPort0Type;
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
    SPL::rstring lit$11;
    SPL::uint32 lit$12;
    SPL::boolean lit$13;
    SPL::boolean lit$14;
    
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


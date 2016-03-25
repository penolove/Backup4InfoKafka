// eJytVG1v2jAQlr_12V1hVPyQqIuGt29IXKdAWAWnXLmxSO01VIAa8JHZqO6VQ8d_1nOAmEFSZNqpMPvjvf47vn7szjsJoIHGKxsKxOwgWNQA2Y8muAw2rVkL9YxMhoo_16c3bhB3Vm0Bn7w2h9Met2be2eBzefB8sfXgbuw8b392Gvb9vCT3SLV2eEuAPo6GD68OEFcH14F8efpw6v9MnBcym6_1N2On1_0nb7eD3ldMxycuX5bA_1mjws3Z64HXUD0cG1rt35dtl_0vN4DPq8vx_0TGXZhdu92_0s2_1j9FwDcOEJdDSmCRGIAffOsazIi8_1UhnHBMJlWoJImIfXESRNegNzJEyL3CDEXWy7y0F5DDUhCj1o5iEBRvP8sOFGHTVDWA6WrZboRpSHySKarZzpMRKOeaRqZ5r8rlHk3M_0_0kBNj6R7DAmNEIGTM_14YgZl3ROJGU_0N1zBkBdxVyQ_0psacsoDH3hgZUzqlhu8JDxBKUNpXaXfhmLJ1yvuKByLAVCe_0HUC5NlzCc2hZyvU6IWOBKeFSViFalqABIniJtPyO6hSJpxATxDW9AhXTFaiVedUV1fqpugVPoKa9R_0_1QMESFwFP4TTg6PD9XwHVdhwokXW_1r3XspXRPK8jAU8xD7R4FMzDzNdmew1si2x8f6DvfdoMXa6vifm1auekJLMfVfGw55HD6NvaLU_0QTk87AuvGWlR0pJr5Fy3v5eq3fabc225FP4BsvN8DHPBMy75eORNTV4lW2i9VPIk1GEBdTSi7Nua0rtCs5nOESaWSJrdbA6AOqhkK0JirFPh4PuGI6PiVpNVB3IGs97l0AkcYjOihJzNrZ9n1XSh6B2kop3MoxKYfa5KJulmJovZLgT5ImEyRzSN7V4TvM2knaZ0R_1nPerL


#ifndef SPL_OPER_INSTANCE_DTREE1_CREATEMAP0_H_
#define SPL_OPER_INSTANCE_DTREE1_CREATEMAP0_H_

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
#include "../../type/BeJwrMSw2zcnMSy0GABBPANp.h"

#include <bitset>

#define MY_OPERATOR createmap0$OP
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::DTree1

namespace SPL {
namespace _Operator {
namespace DTree1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp IPort0Type;
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

} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_DTREE1_CREATEMAP0_H_


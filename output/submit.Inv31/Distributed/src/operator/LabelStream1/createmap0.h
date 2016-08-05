// eJzVVltv2jAUll_17K6yqD4nKyIVL2_1QiBXoRkHawsEl0mqoAhnq5OIudcqn635c4AcIStlXtHmaQ8Pns8_1n4nM821HfKIcMOZgtNa4aUERcoQI4_0FbBfLkvRly18JDVQexbcmrZqLGqdsT1vdyatm9uescDyj87yy8eOudBxT79vNXS9f6TXvPLjfhEBUZd2nRmXw27flMO_0Pe82evqC9gbOLod5pz94Mmxf7V_1Z_1vF0MNefOoZJgrvPVd9oNdt6w_15_0ZTRl7_0lk2W8PJ4Ol2WJ3wxubNbFyozc_1XTbur2PyCqDMYuhgREKPoQCYXUPTXMs_1452AsgB70xLk1sQhFqtX4QVInSzGUg8HU7blEk3aOaCAKLMHipKyMOT6uycDReXTZZAdAAlFgg0JcZDlJZiaYNhjFTVBKgny6mIl3tXEO8wQ1nJL1EE2QQl2VBDwcc7z5E3BKXI_0OkX5TTKB9EhcJEUAslzJ5D_1UZOEYE2lGApv61ghJUzIl0thiFvCIh2Ldx_0rHPgnWdfijcoELAn5knvdg1DalhudQ0zjHdeiNGCYejWweoaYxYiMPL5GQLlaeIvbgIkqtKRLEEuRKKEEhW3eR71o85evgCRSEPH_0TOA5aGTReYBOQCM_1PObEqipCTxO153ctbcZuQIA2D5x7i8YEdbU0_0TXpnUKkm3cNDscC9mHTVts7k181hK1tMiDnFb5ssUt95GFmrWqcSTE_1suvKaFk_1JbHrNlObt1_1aSQ7eRbWtM4DPc0sW7XFAw1cv7Mwv8YihtJ1o8hTQcuphBIV44UVs1Ql_1g7BE7SJAzyUoSgByK1tBbtFfLaq9YHNui4FdMLAN_0_1_0SLWCyuHapVXqHa3eTFgf4r9W52wUnhB56JY3GXouOWV3Uxmkf_0T4Wf_1I3CFXmHxJNMvOwBoAIbLcDqKUvv47UdPw6k6HF4l43wh0QFkTRmrUvAQt9BZytl0GCkj8dBKX7_1lHpsdqMwSqvhMWXZ4ciMhy_0icCfIYmGAKIj_16qz_05aTqi8ajHf0EGbrlC_1


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
    SPL::int32 lit$8;
    SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n lit$9;
    SPL::uint32 lit$10;
    SPL::list<SPL::rstring > lit$11;
    
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


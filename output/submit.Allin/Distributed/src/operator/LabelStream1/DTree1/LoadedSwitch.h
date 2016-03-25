// eJy1U11v2jAU1f0nqNpDKyGS0M_0hCcl8FEFS1jbZJPoyGWLAS7A9_04YQfv2cABtj6qZJnewHX9_0rc885vjYqbWTIU45FqxXmHGdL8MC16xLOGg1nt7FQzOmwUa4fwqQZFNd_0nGxG_1nw4eHgKCu5_087efP_1phQfgTeRl2CIluybVoLM9ewZAbP5qsg0Q1o36i7haTDVn7QSj1_0NOVCobdEekkX_1tB1xXr99toNJ1PtuEQx9NBgl3uDUj3udd5uX8Vf5a7USjGW_0r2SYckZJyXpS40wep850L4GLRaUylTRgVUd97JHThLuWLOMs4M005P5iKVNDZOiJrRlQkxi7l0cqkTo_0iMOQu5kE5MkYKQgpWduODIaRoixczACb63J0IQNZ9myO41Y2D_0UOtBf6M0M4ZLYdFd4ErqH1re1FbgoKsJANtonsp82APMVMo_0aGPpikXN6BmJY13PuEDvpgwfLZn6IR0bPE7bsEy3Yc6sPqsBVlQdsOq2AcWbq7bVuZPkHUv6_1SWP2HkQZ6tVYa3Gy2Y1tfL_1mvK2dnjwi9R_1_0Fg_1n7_0xYPhlR_0r84q8G7_1uV2epwKKlV0b6w1j6F36OeX5Rz530H2GdVDt

#include <SPL/Runtime/Utility/CV.h>
#include <SPL/Runtime/Utility/Mutex.h>

#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LOADEDSWITCH_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LOADEDSWITCH_H_

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

#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../../type/BeJwrMcw0TSnNza0EABAkANw.h"

#include <bitset>

#define MY_OPERATOR LoadedSwitch$OP
#define MY_BASE_OPERATOR LoadedSwitch_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {
namespace DTree1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF IPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw IPort1Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF OPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple const & tuple, uint32_t port);
    void processRaw(Tuple const & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    
    
    
    SPL::boolean lit$0;
    SPL::boolean lit$1;
    
    
protected:
    Mutex $svMutex;
    typedef std::bitset<3> OPortBitsetType;
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
  MY_OPERATOR();
  void prepareToShutdown(); 
  void process(Tuple const & tuple, uint32_t port);
  void process(Punctuation const & punct, uint32_t port);
  virtual void getCheckpoint(NetworkByteBuffer & opstate);
  virtual void restoreCheckpoint(NetworkByteBuffer & opstate);

private:
  volatile bool _on, _shutdown;
  Mutex _mutex;
  CV _cv;
}; 
} // namespace LabelStream1
} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LOADEDSWITCH_H_


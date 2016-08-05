// eJy9U9tum0AQ1fyJFfWhlSwujpO0VmVpcd0IQ2giSFTnpVqbNd6AWboMxvjru2Cc2o7SqlJbLdIyF86ZMzPkWaIVyBOO1WDglxznSzDBUOcczjRN3z1YZUy32KSUN35_14wTTtRtnvWAcZ_0_0j6YasHdcX0rvvZ649mhArfhq7IyNdf9gGk9liuvVt9GbXMY64WXhPtlHek6vH6Verry3PXmGJe2514YTxZuIs7OubO7fixndn_0_1DF8SvC78ijbRESXJGL9FWMeWkEfuptqTEmFomJV9apBvRAqX1jgH_1rDgYzIRJGU2h85okP9KVYMT1HyehK95sr97EIudBLIeM8o3OmRyISekiRQipSVuPzlCOniY8UixxOUM2WniBKPiuQfZaMQf6LXBPGm0yyPOciVegG8EzIZwX_1YCzAQTY7AGoLFoko7U_0ARZawj1L1gqdRJ5dzEoayW_1AUzcvavFUldffhMMfDsDLr8BAWTKlUSmBFsz1WVxFQvOwPQbG0PiV8p9E81PhyoAeFmhAWq1Wleo_1nvWaFxf_1o0t_1tjwlHgv_1gL_1i5FVrE8NuuqLfvftPxZ7462rzsUzqN1SZ2hqfwLaoiOBpai7Z3HH9U11Nvr_1kDUadpA9

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

#include "../../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4.h"
#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
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
    
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 IPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw IPort1Type;
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 OPort0Type;
    
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


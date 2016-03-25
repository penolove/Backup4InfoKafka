// eJy1U9uO2jAQ1fwJWvVhV0K5sLcWVUjmsigkS3cbWol9qQwx4CaxXXtCCF9fh4WW0lWrSlvZDx7P6Mw5Z2yjMqdAnnGs2u245DhfgQ_0eXZdw5jiu3Vgp5nbZqNT3cdqKquswSTejcBEM7x_0jinvfwu3nD2FcEf5InoIuIZNbci2c1dlLAHITTqbrKFWtySBVb5fTDVmHUSz1_0NOVioLeiHTTr4Oo54n1u_01kNFtMt3GA49kwxR73h6T3sd99unsZfF56k1iMt9QbkC5Jybis6zxogZX3xoP4IWq3Z1JmjArY3fknd_0CuZM7cVVIYpt2_0LEUmaWLcGDWjuYmxSLh0S6lTo_0icuUu5lG5CkYKQgtWduODIaRYjxcLACb6_1J0IQNZ8VyO40Y2D_0UOvDYKM0M4ZLYdE94ErqH1pe1VPgoHeDB9tokcky6AMWKmPvtbF0xbJh9JwkiW4WXKB_1U4cPlkzzkE4MHqdtWKc7sGBWn9UAOVUHrKZtQPHmqmN1PkvyjyX9Pskjdj4kRZ5X1mq8bO0eq_1y_1pryuHT78IvUfvtTP8TtLhl_0eSZ1f_1NXgfb86uzscShq7aF_1Y6JzC71HPL_0p3538Hk2lUBM

#include <SPL/Runtime/Utility/CV.h>
#include <SPL/Runtime/Utility/Mutex.h>

#ifndef SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LOADEDSWITCH_H_
#define SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LOADEDSWITCH_H_

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
#include "../../type/BeJwrMcw0TSnNza0EABAkANw.h"

#include <bitset>

#define MY_OPERATOR LoadedSwitch$OP
#define MY_BASE_OPERATOR LoadedSwitch_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::DTree_Classifier_4

namespace SPL {
namespace _Operator {
namespace DTree_Classifier_4 {

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
} // namespace DTree_Classifier_4
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_DTREE_CLASSIFIER_4_LOADEDSWITCH_H_


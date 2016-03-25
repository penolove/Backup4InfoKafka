// eJy1VNtuwjAMVf4EVXuATTQt2hNvIMSmCRBStw9IU9MG2rhy0jH29QuXTWoHGgKm5qGxjo_0PbeVILHwVF76xBKIwH36WLEy_1_1zwaR72xyiHCiiSwkAXuC5nn_09wduymBD_0FlTdNo3fuUehptgqfBcDgfzEo_18xy2x3Jl7wIWzSf9Pjl6pVO2i4WNGOMZFsCzpDJAfIRrnaNIDI_12kiJbJQr5GmllSiGBp5giT4QVTKOGgD0ymQtjZqLY6qxx18u3PXmsW7_1RrNdhA_0sS4srCmAD29BMVk6ANC3vNEu0U7CtivlJ2pAikRdq0z6jrdTqth1YdyFVR5nwp3gWPlXaIhpR_1L52rmA9VOnLj9ZeC_1lTQ4KgM8UwkiGVXol78GuW52RysPPxeznGdApMJgu_1Ldmj8_1kZkbiUF6lvTbTd3BeWV6TJXoO01DJendk9sZxt_0I9U0hfDgTHXwwr3_148iwgQx2bogl0o_0_1nbJCVjDasWgw7KeT4AuQmM9m

#include <SPL/Toolkit/JavaOp.h>


#ifndef SPL_OPER_INSTANCE_CREATEMAP0_HDFS2FILESOURCE_1_OUT0_H_
#define SPL_OPER_INSTANCE_CREATEMAP0_HDFS2FILESOURCE_1_OUT0_H_

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

#include "../../type/BeJwrMSw2zcnMSy0GABBPANp.h"


#define MY_OPERATOR HDFS2FileSource_1_out0$OP
#define MY_BASE_OPERATOR HDFS2FileSource_1_out0_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::createmap0

namespace SPL {
namespace _Operator {
namespace createmap0 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp OPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    
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
    
    
protected:
    Mutex $svMutex;
    SPL::rstring param$className$0;
    SPL::rstring param$classLibrary$0;
    SPL::rstring param$classLibrary$1;
    SPL::rstring param$classLibrary$2;
    SPL::rstring param$classLibrary$3;
    SPL::rstring param$classLibrary$4;
    SPL::rstring param$classLibrary$5;
    SPL::rstring param$classLibrary$6;
    SPL::rstring param$classLibrary$7;
    SPL::rstring param$classLibrary$8;
    SPL::rstring param$classLibrary$9;
    SPL::rstring param$classLibrary$10;
    SPL::rstring param$classLibrary$11;
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
  // constructor
  MY_OPERATOR();

  // destructor
  virtual ~MY_OPERATOR(); 

  // notify port readiness
  void allPortsReady(); 

  // notify termination
  void prepareToShutdown(); 

  // processing for source and threaded operators   
  void process(uint32_t idx);
    
  // tuple processing for mutating ports 
  void process(Tuple & tuple, uint32_t port);
    
  // tuple processing for non-mutating ports
  void process(Tuple const & tuple, uint32_t port);

  // punctuation processing
  void process(Punctuation const & punct, uint32_t port);
private:
  void setupStateHandler();

  // members
  
  /** How we invoke actions on the Java Operator implementation */
  SPL::JNI::JNIBridgeInvoker* _bi;
  
  /* The instance of the JNIBridge used to wrap the Java Operator implementation */
  jobject _bridge;

  typedef void (*FP)(SPL::JNI::JNIBridgeInvoker&, jobject, NativeByteBuffer &, uint32_t);
  FP _fp;
  
  bool hasTupleLogic;
  
  std::tr1::shared_ptr<SPL::StateHandler> _stateHandler;

public:
  virtual void javaopInternalAction(Punctuation const & punct, uint32_t port)
  {
     _bi->action(_bridge, punct, port);
  }
    
  // handle byte buffers being send as is
  virtual void processRaw(NativeByteBuffer & buffer, uint32_t port)
  {
     (*_fp)(*_bi, _bridge, buffer, port);
  }
  
  //Java operators handle byte buffers directly
  virtual bool sendRawBufferData() { return !hasTupleLogic; }
}; 

} // namespace createmap0
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_CREATEMAP0_HDFS2FILESOURCE_1_OUT0_H_


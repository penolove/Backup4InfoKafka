// eJy1lN1ugkAQhbNvYkgvtI0smF5xpyG2adSY0D7AsoywCjtkdqm1T1_18aROopkZtuIHJmW_1OzISRWLgqLlxjCURhPtwsWZggeA7H0WCscoiwIgnMZ179_0MxxXW43JfARvKxpGq0Hn1JPo433NByN5sNZ6WZOLRywXNk7j0XzSRBQzVY6ZbuY34oxnmEBPEsqA8RDXOscRWJ4tPcT2SpRyNdIK1MKCTzFFHkirGAaNXjskclcGDMTxdZkg90s33XksVbdVqdOjw1tnRBXFsYEsMdPVEyCNswftEt0U7CviPlK2VARSIu06Z5R1_0n1Og_0dppCrosz5UrwLHitdK1pW_1r10rmI_0UmlYj9ddCvrTQYtRGeKZSBDLvkS9_0DXKc7M5WHl4vZxxnQOTCYLvj_03Q_0P2NYPVKCtS3xm03dwXyynSZK9D2GsLlqf0T29mG30i1j4J_1uExN8aL_0_148r_1ZbS251CLJF_07tupU8gKRjuKBsN_0OvG_0AIg3M7b

#include <SPL/Toolkit/JavaOp.h>


#ifndef SPL_OPER_INSTANCE_HDFS2FILESOURCE_1_OUT0_H_
#define SPL_OPER_INSTANCE_HDFS2FILESOURCE_1_OUT0_H_

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

#include "../type/BeJwrMSw2zcnMSy0GABBPANp.h"


#define MY_OPERATOR HDFS2FileSource_1_out0$OP
#define MY_BASE_OPERATOR HDFS2FileSource_1_out0_Base
#define MY_OPERATOR_SCOPE SPL::_Operator

namespace SPL {
namespace _Operator {

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

} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_HDFS2FILESOURCE_1_OUT0_H_


// eJy1U11r2zAU5f6TYPaQbGDZTruWMAZu664raWhR87C_0DNm_0JJoly0jXc51fP_0ejg7ju2B6G9HQ4R_1fcq3syo32Zat_0RRaHds79OhcPZ7OYi5sl9TRBC0J0IPN9n3aW2QnaBt4294ybaFB9pfpW4hfwe3m6ScLFZume_0LBx_1eIifsm9fL5_18tTekbaL5eXn3uJwueJPEX25MEkdbagCnoCS9C4Dfz2cz2_1mS5Qp2WDiARQPYdAA76WHA1kYj27fN_0L57TnUuDWuMLVwlMmQrszIsFySgNCUGcAaZEs4thEbouTk2PPaywcH6L3P1JhBTR01rwmuLuH94LlMrbAtR_1_03xCunRGFVIupIWMzK2Hf9NQW8yGX0YHTOZ1JViSqbsDZM_1hO10PYP_11ZGpiOWmKZUROebs_1evyOy2X9Grw4WFfjunWNFtg6KfCwzIdC0ikCt_0mRz26I0EyuzSq1uW10FK1w7ppT_1dTqBr_17OykJ9kmUFbG_1g7Fv8QPJNhdgqFbqgJbeKm122qqK4WfDtCIpEYs888Q_1AI_1hlWo

#include <SPL/Toolkit/JavaOp.h>


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_PUTSINK_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_PUTSINK_H_

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

#include "../../type/BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ.h"
#include "../../type/BeJwrMSw2L8nMTU3NSwEAGHoEA2.h"


#define MY_OPERATOR putsink$OP
#define MY_BASE_OPERATOR putsink_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ IPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple const & tuple, uint32_t port);
    void processRaw(Tuple const & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    virtual void javaopInternalAction(Punctuation const & punct, uint32_t port) = 0;
    
    
    
    SPL::rstring lit$0;
    SPL::rstring lit$1;
    SPL::rstring lit$2;
    SPL::rstring lit$3;
    SPL::rstring lit$4;
    
    
protected:
    Mutex $svMutex;
    SPL::rstring param$className$0;
    SPL::rstring param$classLibrary$0;
    SPL::rstring param$classLibrary$1;
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

} // namespace LabelStream1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_PUTSINK_H_


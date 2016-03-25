// eJy1VNtuwjAMVf4EVXuATTQt2hNvIMSmCRBStw9IU9MG2rhy0jH29QuXTWoHGgKm5qGxjo_0PbeVILHwVF76xBKIwH36WLEy_1_1zwaR72xyiHCiiSwkAXuC5nn_09wduymBD_0FlTdNo3fuUehptgqfBcDgfzEo_18xy2x3Jl7wIWzSf9Pjl6pVO2i4WNGOMZFsCzpDJAfIRrnaNIDI_12kiJbJQr5GmllSiGBp5giT4QVTKOGgD0ymQtjZqLY6qxx18u3PXmsW7_1RrNdhA_0sS4srCmAD29BMVk6ANC3vNEu0U7CtivlJ2pAikRdq0z6jrdTqth1YdyFVR5nwp3gWPlXaIhpR_1L52rmA9VOnLj9ZeC_1lTQ4KgM8UwkiGVXol78GuW52RysPPxeznGdApMJgu_1Ldmj8_1kZkbiUF6lvTbTd3BeWV6TJXoO01DJendk9sZxt_0I9U0hfDgTHXwwr3_148iwgQx2bogl0o_0_1nbJCVjDasWgw7KeT4AuQmM9m


#include "./HDFS2FileSource_1_out0.h"
using namespace SPL::_Operator::createmap0;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>


#define MY_OPERATOR_SCOPE SPL::_Operator::createmap0
#define MY_BASE_OPERATOR HDFS2FileSource_1_out0_Base
#define MY_OPERATOR HDFS2FileSource_1_out0$OP





#include <dlfcn.h>

#include <SPL/Toolkit/JavaOp.h>
#include <SPL/Toolkit/RuntimeException.h>

MY_OPERATOR_SCOPE::MY_OPERATOR::MY_OPERATOR()
{
  /* Get a handle to the Java virtual machine */
  SPL::JNI::JVMControl *jvmControl = SPL::JNI::JVMControl::getJVM();
   
  /* Attach to the JVM  for the duration of the initialization */
  JNIEnv * env = jvmControl->attach();

  /* How we invoke methods against an OperatorSetup instance */
  SPL::JNI::OpSetupInvoker* osi = jvmControl->getOpSetupInvoker();

  /* OperatorSetup instance specific to this operator */
  jobject setup = osi->newSetup(env, this); 

  /**
     Pass the parameters into my OperatorSetup instance.
  */
     osi->setParameter(env, setup, "className", SPL::rstring("com.ibm.streamsx.hdfs.HDFS2FileSource"));
   osi->setParameter(env, setup, "classLibrary", (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hdfs")) + SPL::rstring("/impl/java/bin")));
   osi->setParameter(env, setup, "classLibrary", (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hdfs")) + SPL::rstring("/impl/lib/BigData.jar")));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop-conf"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/etc/hadoop"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/conf"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/share/hadoop/hdfs/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/share/hadoop/common/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/share/hadoop/common/lib/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/lib/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/client/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop/*"));
   osi->setParameter(env, setup, "classLibrary", SPL::rstring("/usr/hadoop-hdfs/*"));
   osi->setParameter(env, setup, "hdfsUri", lit$0);
   osi->setParameter(env, setup, "file", lit$1);


  /**
    Pass input port information into the Java operator.
 
    Are logic clauses present.
   
    Pass the windowing information for each port as
    a list of values for the parameter '[window].N' where
    N is the index of the windowed input port.
  */
   hasTupleLogic = false;


  
  /* At this point all the initialization information has been
     passed to OperatorSetup. Create a JNIBridge instance object
     we use to communicate with the user's Operator implementation
     at runtime.
  */
  
  _bi = jvmControl->getBridgeInvoker();
  _bridge = _bi->newBridge(env, this, setup);
        
  /* Completed Java initialization, detach from the JVM */
  jvmControl->detach();

  setupStateHandler();

  void * handle = dlopen("libstreams-stdtk-javaop.so", RTLD_LAZY);
  if (!handle) {
    const FormattableMessage& m = SPL_APPLICATION_RUNTIME_EXCEPTION("libstreams-stdtk-javaop.so");
    THROW_STRING(SPLRuntimeJavaOperator, m);
  }
  _fp = (FP) dlsym(handle, "callProcessTupleWithNativeByteBuffer");
}

MY_OPERATOR_SCOPE::MY_OPERATOR::~MY_OPERATOR() 
{
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::setupStateHandler()
{
    _stateHandler.reset(new SPL::JNI::JavaOpStateHandler(_bi, _bridge));
    getContext().registerStateHandler(*_stateHandler);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::allPortsReady() 
{
    _bi->allPortsReady(_bridge);
    createThreads(1);
}
 
void MY_OPERATOR_SCOPE::MY_OPERATOR::prepareToShutdown() 
{
   _bi->shutdown(_bridge);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(uint32_t idx)
{
   _bi->complete(_bridge);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(Tuple & tuple, uint32_t port)
{
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(Tuple const & tuple, uint32_t port)
{
   _bi->processTuple(_bridge, tuple, port);
}

void MY_OPERATOR_SCOPE::MY_OPERATOR::process(Punctuation const & punct, uint32_t port)
{
   _bi->processPunctuation(_bridge, punct, port);
}

static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("createmap0::HDFS2FileSource_1_out0",&initer));
    return true;
}

template<class T> static void initRTC (SPL::Operator& o, T& v, const char * n) {
    SPL::ValueHandle vh = v;
    o.getContext().getRuntimeConstantValue(vh, n);
}

MY_BASE_OPERATOR::MY_BASE_OPERATOR()
 : Operator() {
    PE & pe = PE::instance();
    uint32_t index = getIndex();
    initRTC(*this, lit$0, "lit$0");
    initRTC(*this, lit$1, "lit$1");
    param$className$0 = SPL::rstring("com.ibm.streamsx.hdfs.HDFS2FileSource");
    addParameterValue ("className", SPL::ConstValueHandle(param$className$0));
    param$classLibrary$0 = (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hdfs")) + SPL::rstring("/impl/java/bin"));
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$0));
    param$classLibrary$1 = (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hdfs")) + SPL::rstring("/impl/lib/BigData.jar"));
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$1));
    param$classLibrary$2 = SPL::rstring("/usr/hadoop-conf");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$2));
    param$classLibrary$3 = SPL::rstring("/usr/hadoop/etc/hadoop");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$3));
    param$classLibrary$4 = SPL::rstring("/usr/hadoop/conf");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$4));
    param$classLibrary$5 = SPL::rstring("/usr/hadoop/share/hadoop/hdfs/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$5));
    param$classLibrary$6 = SPL::rstring("/usr/hadoop/share/hadoop/common/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$6));
    param$classLibrary$7 = SPL::rstring("/usr/hadoop/share/hadoop/common/lib/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$7));
    param$classLibrary$8 = SPL::rstring("/usr/hadoop/lib/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$8));
    param$classLibrary$9 = SPL::rstring("/usr/hadoop/client/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$9));
    param$classLibrary$10 = SPL::rstring("/usr/hadoop/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$10));
    param$classLibrary$11 = SPL::rstring("/usr/hadoop-hdfs/*");
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$11));
    addParameterValue ("hdfsUri", SPL::ConstValueHandle(lit$0));
    addParameterValue ("file", SPL::ConstValueHandle(lit$1));
    (void) getParameters(); // ensure thread safety by initializing here
}
MY_BASE_OPERATOR::~MY_BASE_OPERATOR()
{
    for (ParameterMapType::const_iterator it = paramValues_.begin(); it != paramValues_.end(); it++) {
        const ParameterValueListType& pvl = it->second;
        for (ParameterValueListType::const_iterator it2 = pvl.begin(); it2 != pvl.end(); it2++) {
            delete *it2;
        }
    }
}



void MY_BASE_OPERATOR::checkpointStateVariables(NetworkByteBuffer & opstate) const {
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
}

bool MY_BASE_OPERATOR::hasStateVariables() const {
    return false;
}

void MY_BASE_OPERATOR::resetToInitialStateRaw() {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->resetToInitialState();
    }
    resetStateVariablesToInitialState();
}

void MY_BASE_OPERATOR::checkpointRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->checkpoint(ckpt);
    }
    checkpointStateVariables(ckpt);
}

void MY_BASE_OPERATOR::resetRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->reset(ckpt);
    }
    resetStateVariables(ckpt);
}





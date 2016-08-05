// eJy1U11r2zAU5f6TYPaQbGDZTruWMAZu664raWhR87C_0DNm_0JJoly0jXc51fP_0ejg7ju2B6G9HQ4R_1fcq3syo32Zat_0RRaHds79OhcPZ7OYi5sl9TRBC0J0IPN9n3aW2QnaBt4294ybaFB9pfpW4hfwe3m6ScLFZume_0LBx_1eIifsm9fL5_18tTekbaL5eXn3uJwueJPEX25MEkdbagCnoCS9C4Dfz2cz2_1mS5Qp2WDiARQPYdAA76WHA1kYj27fN_0L57TnUuDWuMLVwlMmQrszIsFySgNCUGcAaZEs4thEbouTk2PPaywcH6L3P1JhBTR01rwmuLuH94LlMrbAtR_1_03xCunRGFVIupIWMzK2Hf9NQW8yGX0YHTOZ1JViSqbsDZM_1hO10PYP_11ZGpiOWmKZUROebs_1evyOy2X9Grw4WFfjunWNFtg6KfCwzIdC0ikCt_0mRz26I0EyuzSq1uW10FK1w7ppT_1dTqBr_17OykJ9kmUFbG_1g7Fv8QPJNhdgqFbqgJbeKm122qqK4WfDtCIpEYs888Q_1AI_1hlWo


#include "./putsink.h"
using namespace SPL::_Operator::LabelStream1;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>


#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1
#define MY_BASE_OPERATOR putsink_Base
#define MY_OPERATOR putsink$OP





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
     osi->setParameter(env, setup, "className", SPL::rstring("com.ibm.streamsx.hbase.HBASEPut"));
   osi->setParameter(env, setup, "classLibrary", (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hbase")) + SPL::rstring("/impl/lib/com.ibm.streamsx.hbase.jar")));
   osi->setParameter(env, setup, "classLibrary", (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hbase")) + SPL::rstring("/opt/downloaded/*")));
   osi->setParameter(env, setup, "hbaseSite", lit$0);
   osi->setParameter(env, setup, "rowAttrName", lit$1);
   osi->setParameter(env, setup, "tableName", lit$2);
   osi->setParameter(env, setup, "staticColumnFamily", lit$3);
   osi->setParameter(env, setup, "valueAttrName", lit$4);


  /**
    Pass input port information into the Java operator.
 
    Are logic clauses present.
   
    Pass the windowing information for each port as
    a list of values for the parameter '[window].N' where
    N is the index of the windowed input port.
  */
     osi->setParameter(env, setup, "[inputPortLogic].0", "none");
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
    instantiators_.insert(std::make_pair("LabelStream1::putsink",&initer));
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
    initRTC(*this, lit$2, "lit$2");
    initRTC(*this, lit$3, "lit$3");
    initRTC(*this, lit$4, "lit$4");
    param$className$0 = SPL::rstring("com.ibm.streamsx.hbase.HBASEPut");
    addParameterValue ("className", SPL::ConstValueHandle(param$className$0));
    param$classLibrary$0 = (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hbase")) + SPL::rstring("/impl/lib/com.ibm.streamsx.hbase.jar"));
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$0));
    param$classLibrary$1 = (getToolkitDirectory(SPL::rstring("com.ibm.streamsx.hbase")) + SPL::rstring("/opt/downloaded/*"));
    addParameterValue ("classLibrary", SPL::ConstValueHandle(param$classLibrary$1));
    addParameterValue ("hbaseSite", SPL::ConstValueHandle(lit$0));
    addParameterValue ("rowAttrName", SPL::ConstValueHandle(lit$1));
    addParameterValue ("tableName", SPL::ConstValueHandle(lit$2));
    addParameterValue ("staticColumnFamily", SPL::ConstValueHandle(lit$3));
    addParameterValue ("valueAttrName", SPL::ConstValueHandle(lit$4));
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

void MY_BASE_OPERATOR::tupleLogic(Tuple const & tuple, uint32_t port) {
}


void MY_BASE_OPERATOR::processRaw(Tuple const & tuple, uint32_t port) {
    tupleLogic (tuple, port);
    static_cast<MY_OPERATOR_SCOPE::MY_OPERATOR*>(this)->MY_OPERATOR::process(tuple, port);
}


void MY_BASE_OPERATOR::punctLogic(Punctuation const & punct, uint32_t port) {
}

void MY_BASE_OPERATOR::punctPermitProcessRaw(Punctuation const & punct, uint32_t port) {
    {
        punctNoPermitProcessRaw(punct, port);
    }
}

void MY_BASE_OPERATOR::punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port) {
    switch(punct) {
    case Punctuation::WindowMarker:
        punctLogic(punct, port);
        process(punct, port);
        break;
    case Punctuation::FinalMarker:
        punctLogic(punct, port);
        process(punct, port);
        break;
    case Punctuation::DrainMarker:
    case Punctuation::ResetMarker:
    case Punctuation::ResumeMarker:
        break;
    case Punctuation::SwitchMarker:
        javaopInternalAction(punct, port);
        break;
    default:
        break;
    }
}

void MY_BASE_OPERATOR::processRaw(Punctuation const & punct, uint32_t port) {
    switch(port) {
    case 0:
        punctNoPermitProcessRaw(punct, port);
        break;
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





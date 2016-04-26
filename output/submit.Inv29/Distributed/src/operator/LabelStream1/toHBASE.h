// eJyVUl1PgzAUzX3dr2gWTSAxwEDNZJsJKn4siBrcg3tZGKus4aOEFnFb9t_0FbmKM08xbEm4P996engPLYqXgJCZ8YZqXBeM0gQ5o1TKgrShq9fBFhtULPCzze4_1qThC9LeyycNmZ63gnD89299qyr0preqbM27t7ltEpd65s5pJJZ7i0O_05yxN69UcS8pydrHLzcXY5_16S11p5veP48M1ytt6_0aW2pZel2pwDBXnAw28R8c0ScoNHQTS_0YHoG_0SPiZs6Y1NXbFtBndMEq4zn2E9UT7yYx4sZoWpJ84hlfoDVkIZUnfnch5SmuNatVo9kNG_1I7SMdJJAL1VctVAV5RZL0dQ_1JNMWGZfEk8Bnvf306QiLPK5okDdG5adYF0paAEmI_0STBjfoglWUaHSEgko8FAZFqFiQPrWDVZHTOKVug7_1z1sRBwnGRr8v3E34yPBUpd7iBXThHAk1fM3qFGha1TOSYwlTe415NetdQtAB04zEsBWGNiObPa1S3SnS3uQFW7pEOFFM08D8RPwIotx_19MNThKM09k5aNVxH3NCAel


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_

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

#include "../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../type/BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ.h"
#include "../../type/BeJwrMSw2L8nMTU3NSwEAGHoEA2.h"

#include <bitset>

#define MY_OPERATOR toHBASE$OP
#define MY_BASE_OPERATOR toHBASE_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 IPort0Type;
    typedef SPL::BeJwrMSo2zk6tLDEsNi_1JzE1NzUsxSUksSQQAZcYICZ OPort0Type;
    
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
    
    
    
    SPL::int32 lit$0;
    SPL::int32 lit$1;
    SPL::BeJwrMSw2L8nMTU3NSwEAGHoEA2 lit$2;
    SPL::uint32 lit$3;
    
    
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
   
   
}; 

} // namespace LabelStream1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_TOHBASE_H_


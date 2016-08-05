// eJzVV1lzmzoUHr3mV9BOH_1A0N0Z4iZc0M9ixMzaYLNjJpC8ZbGRCWQvCNm773y_0rAxgvvUkeLkkm0pH06Sz6zpEcSztzsaIp2Gu1uq6DTR1AQPk_1EILPZ2fl6HfuGjOsmEZZtCxNmYlhWxfx7OXe1dDZy_0fUXOxZqNxBw6U9EijoNfCtMH_0gGIm1_0sIj4lTtui48uJb_0OLwRH62V_0FRTJrp1c3e1fJQpdzdWFXqUi9nbPiWMhyxX6a25yWLETqg_00_0csBum7l6o059VYSV0N2fngenTHeQr1k10_13LCCxyh3zPdBh2HG50zN2I1hbkxhx1NemKzY9V2P4Z3lNYP3rKK5mbrwekuXd5o8J9Ruxr1Gn_0ldLZlpc9_0y9UQbCU5lyI57Lj_1DnC38WEk91ROU5mrkQW7d1XheoH6uJyruyEznSq4we_1BW7PhpwakWPe6pVkN_0WjELlhNMm59ULW7QHTId9UeP61LGorkeD6fzp7UwwPz0WsVdBV4z3furzvf_0e_0FbkkwN1z2Lv5sxw5fqhFnuRJ4tqbFg8GuR6jEdRmX4HVM9mx_0YFZ6xb9e9xZB7hhLPjawbbjygpNFiJDS8zozpqki26QCgBhwsYvTFMCXkAOGWa7V00boIG65i4Ap9SoSdN8WDuASpfe6RKHnRXlPT1JBoZDsQ_0Cz8As_1jJbZPrCOXNJJd0ArfYhukzEgrsDUEm_0F6KpJqioMv0kYfJFxgX6hAVqtQRoMU1HYUo0mVrD6BqAre7vcIqVagVf0Yrc63tWpEItvBtmLIkay5PQ1SBTJYsBbSBRMrRROrRcJakbBeAHle4APYyAlB_0cXUUdkHQ6JeFsJ_1joBdSTHLS9NWHUucobJsymZZErEIDNNAQYWo_0H_0KZdqbE3REpgQ6sMPy8uuE8D9lTpBpZchPrVbY78cFx_1GrkqlpKOm8iA6Zou4pEStwJiP8HIgGV2TJ_14gQPvgOACqGg2w8Ogz6HgmBTANr4hRpAW7IwVKpHaqMNAdtdE8pdSZistDWNBbxjSjYoX3y5yTlbzKx4y9yJmkF7vsH_0jt8I_17Det_1_1iiFqI9FWkZ2Ozq9NK2tvmPl8c8ID285MCmzIpcgUYPJJJvGL2Et2AiPdireg24TjTnUFE2QgjWJSKbWJP8TyRdEQSZVelfgT_0JMGUQRAzLfQ1yBhJIyJATPE_0Pvb0AfRBX4EXWCOLmE2j912ANW_1VSJDyqC_0nndYcN6DyDt5Th6sV1lAv1hGiqalMs5LFqLmosBJ_1zcabdgRn_1HaLhpt_0PZmGtWLaHS_0j0a1HI2iqCQ9GYOkSoVhAHPNFHG9mmMbHbONzpahd7nzFjAwR8EtJ_17_0TRTNeM1WuyO3zZNJ8jizfFOxEBrMGWR4KSllI2oj7NpG2sHZnOrf_1_0I4NdvpoejW6A_0FREyed8GNOH7f5XmZgdzQhQ7pMkeir0VAzli7MPC_007KbfYpTu1_13DtaCSLnM_0nbR1I_0149WjRweJ3L9hpnJ_1jfwBg1a8gWNpzzMxuZTHhz1OeRFBiMtWK5iRA05UzpP3zc_00hOvviUlmvK6ZyygpH_025UlHOgXRB0tl2x77HeaGt_0xaQ0SX_01D_1rRwQwzmSbCBafvcD06MZf2hyRatA63j3F_1qnn_1OOnYj_0NRu4H2LU0dBHrSzj2jJEk_0zQ4crAedG99VU_0TYcnB6WG_1GwxfgsQIEDysE9tjqy_1Dt4NZ9HbY5_0EwF9MAm5Yy2yR_1CujIcUQZvUoCcOhPhPEW8A11YfvAxlq8p6_0oXEHbWEDHFhx6TQcqQSC5uu6BqHQmEP8C_1O0oBX


#ifndef SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_
#define SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_

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

#include "../../../function/application/matchRule.h"
#include "../../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../../type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h"
#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h"
#include "../../../type/BeJwrMcw0TSnNza0EABAkANw.h"
#include "../../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR LatenStream$OP
#define MY_BASE_OPERATOR LatenStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::LabelStream1::DTree1

namespace SPL {
namespace _Operator {
namespace LabelStream1 {
namespace DTree1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt IPort0Type;
    typedef SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u IPort1Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF IPort2Type;
    typedef SPL::BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9 OPort0Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw OPort1Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw OPort2Type;
    
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
    
    
    
    SPL::list<SPL::BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem > lit$0;
    SPL::boolean lit$1;
    SPL::BeJwrMcw0TSnNza0EABAkANw lit$2;
    SPL::uint32 lit$3;
    SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A lit$4;
    SPL::boolean lit$5;
    SPL::BeJwrMcw0TSnNza0EABAkANw lit$6;
    SPL::uint32 lit$7;
    SPL::rstring lit$8;
    SPL::uint32 lit$9;
    SPL::uint32 lit$10;
    SPL::rstring lit$11;
    SPL::uint32 lit$12;
    SPL::rstring lit$13;
    SPL::rstring lit$14;
    SPL::rstring lit$15;
    SPL::uint32 lit$16;
    SPL::boolean lit$17;
    SPL::boolean lit$18;
    
    SPL::map<SPL::uint32, SPL::BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A > state$nodes;
    SPL::boolean state$nodeReady;
    SPL::boolean state$ruleReady;
    SPL::uint32 state$nextPtr;
    SPL::uint32 state$nodePtr;
    
protected:
    Mutex $svMutex;
    typedef std::bitset<4> OPortBitsetType;
    std::vector<OPortBitsetType> $oportBitset;
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
} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_LABELSTREAM1_DTREE1_LATENSTREAM_H_


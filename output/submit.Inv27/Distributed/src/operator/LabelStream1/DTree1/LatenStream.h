// eJzVV1tzmzoQHr32V9BOH_1CcnBjhS3xpMyMnTsYGk6TYzUlfOtjIhHItCNu47X8_14uaAje30JH04JJmgZbX6dlffruS75mlAdFMnYadzEfjEsQAEHP2BELw7Pa0mv_1PAnhHdsauK65r6TInfLYXMHj8FJj59fJfTJaGLqz08XHojmYNhi9zK888cUgX3Sr7HomFeN_0XPgWvdD2_0Ue3elPDT0ieXe3F0u7zUu2G_0rDkMuIMLtFSePh4JY66_1FyWIkTLgrdCW6CFsHpq6E8cNCNFx_03DfclvawQgtBlB1PmtRdcXAxRD3jW1_084OxFez0eTucPa3lApOm1QS50GEjfBtxygs6_0PPzTq_09fxeDFsCGoxmoozAfXozsx1LnvwvrzjSCHSL9DXwY9hMZnqGHvt_0FsAiaMp5I8WQnruz6S_1OU1Igdm8eLMWIT9ZSD5bUmUGzfjfusK9S_0XaNo_0NG09MUeyXxsK434gzYjoyd9Wat8IZb29GoVQXF_0YkiRz39cTg_1Q01LvUauiAvd8Ks6tq3HDdd6W7GRo_01idoudfybMmNZVtaK1wf9ZCBpD2qoScNnJqEvNt1fzEUv0JVEkfujTgecOpoMZJbYW_0GLgyseXxkoAF8ohD83nZU7AP5Vux0LMX9EL8Euk1q_1AkTD14UL_0Yc5Nb5hBU1TNaaOo6JFbs4gIBy8T1spVM8Sq9nTmlnq_0AVuSUeyLmRB7Dziefi_0VwiNXWffMg7fZR2kX8xgCKqWMaDnKndLCZKtSKeSFQHL497YqlRgqr5HFRnu6haicjziafbWiJr76pBrkQGS2RpdPKiWskSsF7iA2yUaTbLhCWewFaZyfaWEFQfHQtXqTGsWFU5_1ufLJFB1p7p0PMN3lRmuao7mVFWFKMB2bBy1jhr9013H22yqZxQ3YAEv7js_13jD00ecMmwfDvu104vFV2ol82q4c08TZ4FHx2RybT5gUwKmGyddINLhkK_1RhYvPRc8SgbvvYI6PjRl_0jRrB5w6YyxWZkN6ZlpdKNIWPTxxvsOVCnCmFLfc3bYj4yJSt03_1x6k4s3m_1nxG2WUdaPw_1Q3pCh_0Z_1zCfxl_03FXOkeAb28tn5sXkr_0hsXQ_0pOvGG7BaXIh62qmTOYParD_1GAO8p8h2HLTJfgu4wdTSycMG0mTnNQqXeYXs3zUTcxylScQv6J48iDJAEj5FscaZIyEKTFggRi_1f0z6Q3SBf4IucIsucYFPw3bEKj1uYlstWH3a77Bkv0eZ97c5ebSFFQ3S_1pkAzUs1si1ZKGaAoyD932i0YUe6xxv7aLTh24tp1Cyj0dkhGjW2aJRkJRtpBGRdKk4DmJuOQpr1LbbxKdsKx5BXvQ2U8HCLiDuh_1PmTKdN4qln787fLlkl2d3Opw0SO3RZtNj6tVIp59TAJPDsf5mJlpQfDNFvtbv5Tcpykn2I6Zre_16KicXv_022VkwuSENH5NmjhWKIqJoii5OPw1acbG3aYGn3e9oR0jAFeZ3y1T_1rB9PEd1mxouvRRmRXtMmW3DGdJZJxTsYgfzRoVJGaAhLGB1T4kiZ9_1U1LtFJtnOnQxwD25FKHvRTL4G1k2L3qySnZsqj80SB30_0p3WwdukuXpuLQBDY5q1OAO_0CZvxJwzejt_0YEvj_1zBWkoP5EmKAQlcE39IyyPjezOkqt5JVFRhMxreUogn2WfVJ_1nPdBh9PgfZ3gfRZTlVPkkL8Dmgq2TlN7oHOGX3gEMRiysqD4jj6rONJQ5Y2PcVDT9JIuOQKsJ0ieKJ6qX8SFG8Zti4rea08YBPPTh2WY4gQaAGlhWCpA1mJv4Fa5QWBK


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
#include "../../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4.h"
#include "../../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../../type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h"
#include "../../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
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
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4 IPort2Type;
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
    SPL::uint32 lit$11;
    SPL::int32 lit$12;
    SPL::rstring lit$13;
    SPL::boolean lit$14;
    SPL::rstring lit$15;
    SPL::rstring lit$16;
    SPL::uint32 lit$17;
    SPL::boolean lit$18;
    SPL::boolean lit$19;
    
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


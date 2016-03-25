// eJzVV1tT4koQrnn1V2S39gGqPJAJFxVcqwKCBQkRDei6L1uBDJDNdZMJEFz_1_05ncMAlB9KgPJ0pVpme65_0vufD09jqWVXKxoCvYajbbrYFMHENDkD9Lga6lUJv8z15hixTTKkmVpylQK3nUJTxe3roZKi6_1xQuxZqNxC_1ZU9EGnoneKhOLujWZmzuuI94lXtqi7euZZ_037_0W7q219FBTxrp1fXO5up_1T7h5DVejRLuaGXVoc9Tm_00tnw4_0WAG9NdtstbLNL36a250cOSVy1m1FGt0_1nDml1yvGjawrhq8b12n22pvzt8mzaWZ5uRJc_1p_1qZjCdOZMGyjdf_1yx5Bejdk6s_1rRGu7ZQmV4r8bJ6rrPzXpXgxveU_0g_13ObumhM9Vrlhf_1ZaLDs6YWvGHgPmNkjcaCKI4zW3uemwgrO6YvE_0FWYz1gaiU_0lzo44rTDFvi7_1Xckf1ROVsPfAgv2lrgiDSfzZjFbfmbOtyXmH3GXtTjPqT2cNG7GFhcqXitgKv2PbtZetnN9_14dEWPREPYSHSHbbEqK6xy1nm20DMrAmsPN51ln_18FZYEfWNf8qEfLg_0VAPPVaU7atornN_0No14GAJo2_0GKSMHiEO_00dAl6zx4cRUDV5hjKhi8K1jUBUjsc4sk2Qv3mpimhiQjPYCAkOcbrEQqNqHEK1Wq8S5ojYfYBgk3kgB2pmAt0KdDqaY4_0Dzp9EHC_0P4FANKoAhkDEqZ2UxguqqTx_0KIqeH_1cQ0u1HFT116A62UV1GopsB9uKMQ9lZ7vLIJ0jgzm6kMlZWMkBDKsZISgvTB2VF7LrILt8aa4MzZRkpyxiG0m6I2JXVszyyrRVx5KmqDw352ZZlrAEDNNAfj2ukJ9imfY28a_0oIUAHdlDMH48o8igzqpCEVfjSaATjblThHXIGmJqG4sFCcgoJxh1TEYDSHOFfvqh3WSiShwrM_088Bg4pB3MeDw0Y_1gseFpGFNmiDNtxtQp1hsBpCR5qAt9gSokoQLub4mbVHfqZwdmkdPR4l4F2I_13lDqCpYfvn8g2eE79R_10SfwVQ9IGkq0iO5mdx_01b2t_0gYBF3gk_03mVrk_05CpbAmD8SOb1CP1IkcpjHQr2oJpUo470RVMFXxpmJNKsUk9UauFoqECXXwG8eTHkwFhBkDEvCDWIOYmjIgBU8R4ewfySXSBn0EXmKFLUISjsB2wSto4ZMgpq8_1fO8z53v3MO1lOHjxm0gbJGRcCTUrnOCtZSpqL_1CD932i0ZUf0jdf20WjLt3fTqJ5Ho5OXaFTL0CjMSjyaYxCfV0EawIycUbhezbCNidjGpI_0hD2klcxiYoeBOEP_1_0pfJWPFer_1Znb5ck4vgpZxFUsBg7zRiHoJYrpjNoIu7aRDHC6ppK2LcrTWTM5FTZ7ZCogYnyf8hvZ6EKV5WXK5JYuTECXGZIICp_0cEbog8SRo6c2_0RKWdnHsHz4IQXEq_1mbf0c_114jmiWEx96sYvp9Fn2CyknNXMV1sAXI5NuV_1Kj5GuFXSoJWE4VgEymDBDyE_0KGCAB2LQ2dR3ymHHvKyrJ97FcBWPeHQ7LlcTwtOzg5TYb_09AWIwQD_1BhYtPo4qxgXZiwZmTrf6kcENikXlQ52iM7XOH2NkEPNxLaT9PhwS_12DkHzxwN_1FBQiC7uu6BsM7GJv4FtpVtB7


#ifndef SPL_OPER_INSTANCE_DTREE1_LABELSTREAM_H_
#define SPL_OPER_INSTANCE_DTREE1_LABELSTREAM_H_

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

#include "../../function/application/matchRule.h"
#include "../../type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h"
#include "../../type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h"
#include "../../type/BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP.h"
#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../type/BeJwrMcw0TSnNza0EABAkANw.h"
#include "../../type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR LabelStream$OP
#define MY_BASE_OPERATOR LabelStream_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::DTree1

namespace SPL {
namespace _Operator {
namespace DTree1 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt IPort0Type;
    typedef SPL::BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u IPort1Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF IPort2Type;
    typedef SPL::BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNcfNPCexJDXP0wUA62wXBP OPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw OPort1Type;
    
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
    SPL::boolean lit$13;
    SPL::boolean lit$14;
    
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

} // namespace DTree1
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_DTREE1_LABELSTREAM_H_


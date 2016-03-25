// eJzVl9tzojoYwCev_1SvYnX3QmR4lqL1otzNotaMgtUXb6b7soERkuS4EFbv930_04WUCs3dP24dA6Q74kX74Lvy_0Ja_0sVD6u6iv1ms_0O52DIABDT5gzT4WqlUyf_1cM2dYtcyqZNu6OpPCd0PCs8Wdp6PK4msyEPs2qrbRYOUMRRr6Z3gkzu9pVubsnviAeE2_1PhHvPdt4GNxID_1ZaemyoE8O_0ub1aPSi0t0dRHfq0h7lRjxbHA46vdTf8ZDnkJnSP7fE2i4w98zSG9xucrK0H3Lx_1PbzlfZX_0zW3ubzjRZ9Vb9ke_1zbLjU7Zh7lFgbT3gxlNBnKy5zW2XFdzVNYv3TWE2E30ourUBN_056wgzzjvhrLXc1X1TP10Mf8puOLggi_1Xsz0XBbYdtXSo3dp2zNjR_0XvGYz465mnymPa3bJ8aLlCJO6zfc7A7at_1eryHdpcnm_1Gg_0n8cSP2sTC91nBHhdds5_06q_1aP3IcptWaEHm64t3M7YwaI_0YVfFamcreiyawkaiu2yb1VihaJzvCH2rJrDOaNNdDvifUBb4oX3Dj_1u0PFwOxTO_1PWM7GlIcJpjdAC6WMPpmWjJygTjim01Dsi_1CF081cY05psLGu3JAXYLUOndIkv1orall6Ugysw0ICDDfIBNPcQgGb5xSS1ZBazzCDki5kTZgpwvWw_1l0JNVVF1_0knT4ISeBfaEDWqlDGgJSq3RRGg2pZewJRHbw_17pGmRoFVJ2_0x6nTXqrNI5LjYUU0lkp3vDoN0gQwWyJgC22AtJwTVhWWg6kL2XORUr6yVqVuS7FZF7CDJcEXsyapVXVmO5trSDFUVS7GqsoQlYFomCsptjfxU23K2OX5DFQIGcMJa_1XREkUedU6W0WaUvzWbY7sUF3CUl3tJ1lDQWkltKwXVMxQZUFIR_1BqL_0ValMHipUHzwHFKomcR8PDyv9CGRLacW6NEV6oDekpFxuhSYj3UVb21NGVSRcKvQ1rYv6ThWs0Dp6PkrFu5T48RdVrWQH4fsHkhW_0U_19hPom_1akr6UHI05KSz87R9y_1ob1ibiTvjptjKDAh9yRSylMHlki3qiXsWRwsiw4yWYFuV6U0PFVCmQRjmplVvUM7VaqDoq0eUXI56DeDIgygCIyQtjDRKEYQwGzIDx9weMT8IFfgYuMIdLWG_1jsB3QSk5pyJQzWl_0_0d1jwvQeZd_1NMHtxRsgrJdhYZmpYqOC9ZSrqHgiD93zDa0hF_14419GG15ezdGJ0UYnb6GUSOHUZSVpKVgkOxXYRrAnOxR_0KSeo42JaWOy29CHHEYLCMwhuBPEP3_0oohEv1Wp_15nY5mSQ3HZu4isXQYd4shceGcjajDsKeY6YDnK2p5IQW5_0m8le6KznWkKwQxuS4FZ9b4vpTnMqNyiwsT4jJHErEigDO2Lkw8CVp2sS9xaSf73sG9IDIuM79VNPRz_1XiJaJ6Jd99MEoQ_0Umcp44xuraJa92oE0oeGchHKEOZYJgQT_0iL1AHu2ji5iKCnXmbGy7BwHKMOToDkiBh0n3bKL092kGXRfgiTuILgxxYOPY_0wvyVo0sIqOnO_0MVkj5xzpC54oUHRyXIVkExh7AA7eFwCQIZM8wfBCVw0TFv_0iYEfx


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
#include "../../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../../type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h"
#include "../../type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h"
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
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw OPort0Type;
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
    SPL::uint32 lit$11;
    SPL::boolean lit$12;
    SPL::boolean lit$13;
    
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


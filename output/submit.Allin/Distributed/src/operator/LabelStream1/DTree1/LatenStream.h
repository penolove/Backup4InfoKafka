// eJzVV1tz2joQHr32V7idPpiZnGCZSxJoMyMIZMDGSWpoJn3pGCyM62ttGTBt_1_1uRb8QGA_01J_0nCcMGOtpU970be78l3zPCC6qZOw1eoGPnEsAAFH_1yAE787Pq8n_1PLBnRHfsquK6pj5T4ndLIbPFp8DE54t3ubkkdHG1g4crbyRzMLwk9_1L8M4dUwe3Lj1g0zNum_1DlwrcfhnfLorpWnhj6x3LuHm9WjxgWHseow5AIi3Pc5eTwUxFpvI06WI2HC9VFfdBG2Di81eDFsCKqxHgrzwe3oQQx17ruw_0XwnyCHSH9CXQQeh8QVq2IcxnK0pwngqyZO1sHnoIclf3SJyZBUvzoxl2FsFkn8liXLjbty77KPezQpNr44t20zMkezXhsK4F0gzInryt7XaM0JZv1qPQihuuqYkydz3zcQgHQ11brQaOoK3FsZPS9Fw_0XHPcC_01pzVaCqLseNKk7oqD7hB1jG89scvZy6vNeDidP23kAZGmtwbp6vAWdT_1ddL70XwvfVTVuuOm50sMMDRf1CVodRJ6tuLFsSxuF66EOMpB0YGroSQOnJiHvftNbDsWvUJXEkXsnjgecOlqO5MuwM0NdA2seHwE0gE8Ugt_1bjop9IN_0LrZaluB_1il0C3SY0_1Y_0LBi_0LBXIPcPp_0woobJXlPHMbFiFwcQUBa_0h5lqHiXWby5pZrvgNbknHsiZkVdg7xO8iNdzidTUffIhb_1RJwkX2xQoUtYplPMhB7UcxmVQr6hOJ6uDlfk_0QGiVaNX9Hq4t9rS4TkecTT7e1RHa1Pw1yJTJYIuNL8GCtTFgvWV1mGWzuCEF14Vi4ulADH3vVG2dlm46i_0lWZeFixfJkEqu5UV45n_0K4yw1XN0ZyqqhAF2I6NowpQoz_1ddbztCfmNTAgs4MXl48cbhj76nGHzarFvW6143E8Lik_0rjmOaOBssFJ_1NUfOMSRU41zD5GokGN2yFPkwMHz0nAHWbmk9Gp0Ffg_1BsHthUptiMcGOOVSrtWGVs_0nire06pc4WwpbbmsZiPTMkO7Te_13uT8zWZ2_1EFOZN3Iff9AusNH5j_0sp_17XbcUcKZ6BvXx0fmzfivbGmY2aEx_1ddmFSZMNOCswBZo_1qMD_0Yo2RmCLbcdAu_0zfjB1NIJw0bSJCa1Spv5xawWuolZrvKsxK_1InzxIIgBS5sW_0Bhk3YUoMWCDGn3c7f4ku8G_1QBe7QJc7WqdtOoNKuEdtqAfX5vMOS8x5F3t_1l5Ml6VASkxTBRNC_1VyK5kqZgBjpz0f6PRlh3pGW8cotGWby_0mUbOMRhfHaNTYoVESlWykEZDVqzgMYE5rFGnWd9jGp2zji2XoVXraEgbuUHDPiT9_1MmUznrPV4cjt82SSXb5caiqRY4NFm42bjkoxoh4mgWfnHVzMqbS_1S_0N01c5_1SrpC_0ikmYnZ9izre9P62y8sC5JYufEyXOVaoFhE5U_03iwFOnFTd7m6Z2WvdO1oJEucL6dtnUv2vHs0d3OfHi201GodfEZAvGmM4qyXVHPZBvGiplVIawhMv77jh2py219dgCNmmIzzJu_0K75daZkV5E0BaSFIE0PzHWrFU1hywMaGZ401JUDZtZ3zKSJiiaZxIuABK6JP6QbM743Q6rqnUUZCzaj4T3d8yz7rPok_15kOo8_1XINMGRNfKzIhU_1eu4s3bKOutjjoozFQ_0I4_0qzbWrkgIV9X9HwsyQCh3QiTLeAL8ia_0_0cu1eI1fcXtpPutBXxqwam7ZKQSBGpgWSFICksG8S9XH9We


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
    SPL::uint32 lit$11;
    SPL::rstring lit$12;
    SPL::rstring lit$13;
    SPL::uint32 lit$14;
    SPL::boolean lit$15;
    SPL::boolean lit$16;
    
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


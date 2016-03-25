// eJytVFtv2jAUll_17K6yqD4mKSLh1W3qRAm0RkHbtwia101QFYsBLYqe2UwoV_132Ok0AYdNKkOi8_0ty_1H37nwOKwmAodYLCyrk3BBI1ADpvwa4LBaNcQiRkYb9efsxg3qzqI18IPX_1mDS697cOwtsPg_0WP74O3IWN7_03HXtu2h5_1sFqnODnei6etg_0PDiBHF9eBXEn6cPr_1bLwHEpu_13ejJ1ep2_03g99XTsckL1_0Ww_15o8rB0e_0J21A1EB9e6dufbZfvxeh_1yvL4ckxt3YXbtdvvOvo1TpwbgwhPoaEwTIhAD7p1jWZEXn6kL44JhMq1AJU1C6omTJrwAeZAnRB4RYi62QqTTu4YakDwetXIQgaL4fV9wopxNUNYDpatluhGlIfJIpqtnOkxEo55pGpnmv2uTRTez6KQE2PpHssCY0QgZMz_1hiBmXdE4kZT43XMGQF3FXJD6mxpyygMfeGBlTOqWG7wkPEEpQ2k5pU_0GYsvWT3yseiABTDfh2AOXZcAnPoWWp0OuEjAWmhEtZpWhZggaI4CXS8n9Up0g8hZggrukVqJiuQK3Mq66o1k_1VX_1AEatoueoeGISoEnsJv0tHh_0bkCrus6VCDpeVvfdqX0TCjL01DMQ_0wfBfJh5ml2O4O1RnY9Ptb3hO8HLc5Wx_1_1ctHLVE1qKqf_1acMjj8GnsFaXOJyCfh3XhLSt1KT16jZTz9vdZ7Wi3NduST_0EbLDfDx_0wImHfLxyNravAq20Trp5AnowgLqKU_1zrqtKbUrOJ_1hEGlmiazVweoAqEUhWxMUY58OB90zHB_0TtZqoOpA1nvcugUjiEJ0VJeZsbPs_0q6SLoHaSincyjUph9rkom6WYmi9kuhPkiYTJN6Q7tVineRtJu3zRHw5POkq


#ifndef SPL_OPER_INSTANCE_CREATEMAP0_H_
#define SPL_OPER_INSTANCE_CREATEMAP0_H_

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

#include "../type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h"
#include "../type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h"
#include "../type/BeJwrMSw2zcnMSy0GABBPANp.h"

#include <bitset>

#define MY_OPERATOR createmap0$OP
#define MY_BASE_OPERATOR createmap0_Base
#define MY_OPERATOR_SCOPE SPL::_Operator

namespace SPL {
namespace _Operator {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp IPort0Type;
    typedef SPL::BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF OPort0Type;
    
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
    
    
    
    SPL::rstring lit$0;
    SPL::boolean lit$1;
    SPL::int32 lit$2;
    SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n lit$3;
    SPL::uint32 lit$4;
    SPL::list<SPL::rstring > lit$5;
    
    SPL::map<SPL::rstring, SPL::float64 > state$counter;
    SPL::list<SPL::rstring > state$attr;
    SPL::list<SPL::rstring > state$temp;
    
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
   
       void getCheckpoint(NetworkByteBuffer & opstate) { checkpointStateVariables(opstate); }
       void restoreCheckpoint(NetworkByteBuffer & opstate) { restoreStateVariables(opstate); }
   
   
}; 

} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_CREATEMAP0_H_


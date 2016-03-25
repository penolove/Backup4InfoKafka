// t4s7srcAddrK7srcPorts7dstAddrK7dstPort


#ifndef BEJWRMSK2LY5KDKXJKFIGMQLYI0QKZVOKSYAIQAZIBAAT7A5N_H_
#define BEJWRMSK2LY5KDKXJKFIGMQLYI0QKZVOKSYAIQAZIBAAT7A5N_H_

#include <SPL/Runtime/Type/Tuple.h>
#include <SPL/Runtime/Type/PrimitiveType.h>
#include <SPL/Runtime/Type/CollectionType.h>
#include <SPL/Runtime/Serialization/NetworkByteBuffer.h>
#include <SPL/Runtime/Serialization/NativeByteBuffer.h>
#include <SPL/Runtime/Serialization/VirtualByteBuffer.h>



#define SELF BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n

namespace SPL {

class SELF : public Tuple
{
public:
    static const bool facade = false;

    typedef SELF Self;
    
    typedef SPL::rstring srcAddr_type;
    typedef SPL::uint16 srcPort_type;
    typedef SPL::rstring dstAddr_type;
    typedef SPL::uint16 dstPort_type;

    enum { num_attributes = 4 } ;
    
    SELF() : Tuple(), srcAddr_(), srcPort_(), dstAddr_(), dstPort_() {}
    SELF(const Self & ot) : Tuple(), srcAddr_(ot.srcAddr_), srcPort_(ot.srcPort_), dstAddr_(ot.dstAddr_), dstPort_(ot.dstPort_) 
      { constructPayload(ot); }
    SELF(const srcAddr_type & _srcAddr, const srcPort_type & _srcPort, const dstAddr_type & _dstAddr, const dstPort_type & _dstPort) : Tuple(), srcAddr_(_srcAddr), srcPort_(_srcPort), dstAddr_(_dstAddr), dstPort_(_dstPort) { }
    SELF(const Tuple & ot, bool typesafe = true) : Tuple() { assignFrom(ot, typesafe); }
    SELF(const ConstValueHandle & ot) : Tuple() { const Tuple & o = ot; assignFrom(o); }

    virtual ~SELF() {}
    
    srcAddr_type & get_srcAddr() { return srcAddr_; }
    const srcAddr_type & get_srcAddr() const { return srcAddr_; }
    void set_srcAddr(const srcAddr_type & _srcAddr) { srcAddr_ = _srcAddr; }
    
    srcPort_type & get_srcPort() { return srcPort_; }
    const srcPort_type & get_srcPort() const { return srcPort_; }
    void set_srcPort(const srcPort_type & _srcPort) { srcPort_ = _srcPort; }
    
    dstAddr_type & get_dstAddr() { return dstAddr_; }
    const dstAddr_type & get_dstAddr() const { return dstAddr_; }
    void set_dstAddr(const dstAddr_type & _dstAddr) { dstAddr_ = _dstAddr; }
    
    dstPort_type & get_dstPort() { return dstPort_; }
    const dstPort_type & get_dstPort() const { return dstPort_; }
    void set_dstPort(const dstPort_type & _dstPort) { dstPort_ = _dstPort; }
    
    virtual bool equals(const Tuple & ot) const
    {

        if (typeid(*this) != typeid(ot)) { return false; }
        const SELF & o = static_cast<const SELF &>(ot);
        return (*this == o);

    }

    virtual SELF& clear();

    Tuple* clone() const { return new Self(*this); }
    
    void serialize(VirtualByteBuffer & buf) const
    {
        buf << srcAddr_ << srcPort_ << dstAddr_ << dstPort_;
    }

    template <class BufferType>
    void serialize(ByteBuffer<BufferType> & buf) const
    {        
        buf << srcAddr_ << srcPort_ << dstAddr_ << dstPort_;
    } 
    
    void serialize(NativeByteBuffer & buf) const
    {
        this->serialize<NativeByteBuffer>(buf);
    }

    void serialize(NetworkByteBuffer & buf) const
    {
        this->serialize<NetworkByteBuffer>(buf);
    }
    
    void deserialize(VirtualByteBuffer & buf)
    {
        buf >> srcAddr_ >> srcPort_ >> dstAddr_ >> dstPort_;
    }

    template <class BufferType>
    void deserialize(ByteBuffer<BufferType> & buf)
    {        
        buf >> srcAddr_ >> srcPort_ >> dstAddr_ >> dstPort_;
    } 

    void deserialize(NativeByteBuffer & buf)
    {
        this->deserialize<NativeByteBuffer>(buf);
    }    

    void deserialize(NetworkByteBuffer & buf)
    {
        this->deserialize<NetworkByteBuffer>(buf);
    }    

    void serialize(std::ostream & ostr) const;

    void serializeWithPrecision(std::ostream & ostr) const;

    void deserialize(std::istream & istr, bool withSuffix = false);
    
    void deserializeWithNanAndInfs(std::istream & istr, bool withSuffix = false);
    
    size_t hashCode() const
    {
        size_t s = 17;
        s = 37 * s + std::tr1::hash<srcAddr_type >()(srcAddr_);
        s = 37 * s + std::tr1::hash<srcPort_type >()(srcPort_);
        s = 37 * s + std::tr1::hash<dstAddr_type >()(dstAddr_);
        s = 37 * s + std::tr1::hash<dstPort_type >()(dstPort_);
        return s;
    }
    
    size_t getSerializedSize() const
    {
        size_t size = sizeof(SPL::uint16)+sizeof(SPL::uint16);
           size += srcAddr_.getSerializedSize();
   size += dstAddr_.getSerializedSize();

        return size;

    }
    
    uint32_t getNumberOfAttributes() const 
        { return num_attributes; }

    TupleIterator getBeginIterator() 
        { return TupleIterator(*this, 0); }
    
    ConstTupleIterator getBeginIterator() const 
        { return ConstTupleIterator(*this, 0); }

    TupleIterator getEndIterator() 
        { return TupleIterator(*this, num_attributes); }

    ConstTupleIterator getEndIterator() const 
        { return ConstTupleIterator(*this, num_attributes); }
    
    TupleIterator findAttribute(const std::string & attrb)
    {
        std::tr1::unordered_map<std::string, uint32_t>::const_iterator it = mappings_->nameToIndex_.find(attrb);
        if ( it == mappings_->nameToIndex_.end() ) {
            return this->getEndIterator();
        }
        return TupleIterator(*this, it->second);
    }
    
    ConstTupleIterator findAttribute(const std::string & attrb) const
        { return const_cast<Self*>(this)->findAttribute(attrb); }
    
    TupleAttribute getAttribute(uint32_t index)
    {
        if (index >= num_attributes)
            invalidIndex (index, num_attributes);
        return TupleAttribute(mappings_->indexToName_[index], index, *this);
    }
    
    ConstTupleAttribute getAttribute(uint32_t index) const
        { return const_cast<Self*>(this)->getAttribute(index); }

    ValueHandle getAttributeValue(const std::string & attrb)
        { return getAttributeValueRaw(lookupAttributeName(*mappings_, attrb)->second); }


    ConstValueHandle getAttributeValue(const std::string & attrb) const
        { return const_cast<Self*>(this)->getAttributeValue(attrb); }

    ValueHandle getAttributeValue(uint32_t index) 
        { return getAttributeValueRaw(index); }

    ConstValueHandle getAttributeValue(uint32_t index) const
        { return const_cast<Self*>(this)->getAttributeValue(index); }

    Self & operator=(const Self & ot) 
    { 
        srcAddr_ = ot.srcAddr_;
        srcPort_ = ot.srcPort_;
        dstAddr_ = ot.dstAddr_;
        dstPort_ = ot.dstPort_; 
        assignPayload(ot);
        return *this; 
    }

    Self & operator=(const Tuple & ot) 
    { 
        assignFrom(ot); 
        return *this; 
    }

    void assign(Tuple const & tuple)
    {
        *this = static_cast<SELF const &>(tuple);
    }


    bool operator==(const Self & ot) const 
    {  
       return ( 
                srcAddr_ == ot.srcAddr_ && 
                srcPort_ == ot.srcPort_ && 
                dstAddr_ == ot.dstAddr_ && 
                dstPort_ == ot.dstPort_  
              ); 
    }
    bool operator==(const Tuple & ot) const { return equals(ot); }

    bool operator!=(const Self & ot) const { return !(*this == ot); }
    bool operator!=(const Tuple & ot) const { return !(*this == ot); }


    void swap(SELF & ot) 
    { 
        std::swap(srcAddr_, ot.srcAddr_);
        std::swap(srcPort_, ot.srcPort_);
        std::swap(dstAddr_, ot.dstAddr_);
        std::swap(dstPort_, ot.dstPort_);
      std::swap(payload_, ot.payload_);
    }

    void reset()
    { 
        *this = SELF(); 
    }

    void normalizeBoundedSetsAndMaps(); 

    const std::string & getAttributeName(uint32_t index) const
    {
        if (index >= num_attributes)
            invalidIndex (index, num_attributes);
        return mappings_->indexToName_[index];
    }

    const std::tr1::unordered_map<std::string, uint32_t> & getAttributeNames() const 
        { return mappings_->nameToIndex_; }

protected:

    ValueHandle getAttributeValueRaw(const uint32_t index)
    {
        if (index >= num_attributes)
            invalidIndex(index, num_attributes);
        const TypeOffset & t = mappings_->indexToTypeOffset_[index];
        return ValueHandle((char*)this + t.getOffset(), t.getMetaType(), &t.getTypeId());
    }

private:
    
    srcAddr_type srcAddr_;
    srcPort_type srcPort_;
    dstAddr_type dstAddr_;
    dstPort_type dstPort_;

    static std::auto_ptr<TupleMappings> mappings_;
    static TupleMappings* initMappings();
};

inline VirtualByteBuffer & operator>>(VirtualByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline VirtualByteBuffer & operator<<(VirtualByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

template <class BufferType>
inline ByteBuffer<BufferType> & operator>>(ByteBuffer<BufferType> & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
template <class BufferType>
inline ByteBuffer<BufferType> & operator<<(ByteBuffer<BufferType> & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

inline NetworkByteBuffer & operator>>(NetworkByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline NetworkByteBuffer & operator<<(NetworkByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

inline NativeByteBuffer & operator>>(NativeByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline NativeByteBuffer & operator<<(NativeByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

template<>
inline std::ostream & serializeWithPrecision(std::ostream & ostr, SELF const & tuple) 
    { tuple.serializeWithPrecision(ostr); return ostr; }
inline std::ostream & operator<<(std::ostream & ostr, SELF const & tuple) 
    { tuple.serialize(ostr); return ostr; }
inline std::istream & operator>>(std::istream & istr, SELF & tuple) 
    { tuple.deserialize(istr); return istr; }
template<>
inline void deserializeWithSuffix(std::istream & istr, SELF  & tuple) 
{ tuple.deserialize(istr,true);  }
inline void deserializeWithNanAndInfs(std::istream & istr, SELF  & tuple, bool withSuffix = false) 
{ tuple.deserializeWithNanAndInfs(istr,withSuffix);  }



}  // namespace SPL

namespace std
{
    inline void swap(SPL::SELF & a, SPL::SELF & b)
    {
        a.swap(b);
    }
};

namespace std { 
    namespace tr1 {
        template <>
        struct hash<SPL::SELF> {
            inline size_t operator()(const SPL::SELF & self) const 
                { return self.hashCode(); }
        };
    }
}

#undef SELF
#endif // BEJWRMSK2LY5KDKXJKFIGMQLYI0QKZVOKSYAIQAZIBAAT7A5N_H_ 




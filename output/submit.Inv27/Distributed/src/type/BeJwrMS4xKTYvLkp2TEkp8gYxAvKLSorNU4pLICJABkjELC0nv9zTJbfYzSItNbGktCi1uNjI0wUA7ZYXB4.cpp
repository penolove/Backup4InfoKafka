// t3t4s7srcAddrK7srcPorts7dstAddrK7dstPort6flowIDmsF8featuress2ID


#include "BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4.h"
#include <sstream>

#define SELF BeJwrMS4xKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1uNjI0wUA7ZYXB4

using namespace SPL;

std::auto_ptr<TupleMappings> SELF::mappings_(SELF::initMappings());

static void addMapping(TupleMappings & tm, TypeOffset & offset,
                       std::string const & name, uint32_t index)
{
    tm.nameToIndex_.insert(std::make_pair(name, index)); 
    tm.indexToName_.push_back(name);
    tm.indexToTypeOffset_.push_back(offset);    
}

static Tuple * initer() { return new SELF(); }

TupleMappings* SELF::initMappings()
{
    instantiators_.insert(std::make_pair("tuple<tuple<rstring srcAddr,uint16 srcPort,rstring dstAddr,uint16 dstPort> flowID,map<rstring,float64> features,rstring ID>",&initer));
    TupleMappings * tm = new TupleMappings();
#define MY_OFFSETOF(member, base) \
    ((uintptr_t)&reinterpret_cast<Self*>(base)->member) - (uintptr_t)base
   
    // initialize the mappings 
    
    {
        std::string s("flowID");
        TypeOffset t(MY_OFFSETOF(flowID_, tm), 
                     Meta::Type::typeOf<SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n >(), 
                     &typeid(SPL::BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n));
        addMapping(*tm, t, s, 0);
    }
    
    {
        std::string s("features");
        TypeOffset t(MY_OFFSETOF(features_, tm), 
                     Meta::Type::typeOf<SPL::map<SPL::rstring, SPL::float64 > >(), 
                     &typeid(SPL::map<SPL::rstring, SPL::float64 >));
        addMapping(*tm, t, s, 1);
    }
    
    {
        std::string s("ID");
        TypeOffset t(MY_OFFSETOF(ID_, tm), 
                     Meta::Type::typeOf<SPL::rstring >(), 
                     &typeid(SPL::rstring));
        addMapping(*tm, t, s, 2);
    }
    
    return tm;
}

void SELF::deserialize(std::istream & istr, bool withSuffix)
{
   std::string s;
   char c;

   istr >> c; if (!istr) { return; }
   if (c != '{') { istr.setstate(std::ios_base::failbit); return; }
   
   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "flowID") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   if (withSuffix)
     SPL::deserializeWithSuffix(istr, flowID_);
   else
     istr >> flowID_;
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   if (c != ',') { istr.setstate(std::ios_base::failbit); return; }

   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "features") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   if (withSuffix)
     SPL::deserializeWithSuffix(istr, features_);
   else
     istr >> features_;
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   if (c != ',') { istr.setstate(std::ios_base::failbit); return; }

   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "ID") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   if (withSuffix)
     SPL::deserializeWithSuffix(istr, ID_);
   else
     istr >> ID_;
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   
   if (c != '}') { istr.setstate(std::ios_base::failbit); return; }
}

void SELF::deserializeWithNanAndInfs(std::istream & istr, bool withSuffix)
{
   std::string s;
   char c;

   istr >> c; if (!istr) { return; }
   if (c != '{') { istr.setstate(std::ios_base::failbit); return; }
   
   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "flowID") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   SPL::deserializeWithNanAndInfs(istr, flowID_, withSuffix);
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   if (c != ',') { istr.setstate(std::ios_base::failbit); return; }

   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "features") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   SPL::deserializeWithNanAndInfs(istr, features_, withSuffix);
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   if (c != ',') { istr.setstate(std::ios_base::failbit); return; }

   if (!readAttributeIdentifier(istr, s)) { return; }
   if (s != "ID") { istr.setstate(std::ios_base::failbit); return; }
   istr >> c; if (!istr) { return; }
   if (c != '=') { istr.setstate(std::ios_base::failbit); return; }
   SPL::deserializeWithNanAndInfs(istr, ID_, withSuffix);
   if (!istr) { return; }  
   istr >> c; if (!istr) { return; }
   
   if (c != '}') { istr.setstate(std::ios_base::failbit); return; }
}

void SELF::serialize(std::ostream & ostr) const
{
    ostr << '{'
         << "flowID=" << get_flowID()  << ","
         << "features=" << get_features()  << ","
         << "ID=" << get_ID()  
         << '}';
}

void SELF::serializeWithPrecision(std::ostream & ostr) const
{
    ostr << '{';
    SPL::serializeWithPrecision(ostr << "flowID=", get_flowID()) << ",";
    SPL::serializeWithPrecision(ostr << "features=", get_features()) << ",";
    SPL::serializeWithPrecision(ostr << "ID=", get_ID()) ;
    ostr << '}';
}

SELF& SELF::clear()
{
    get_flowID().clear();
    get_features().clear();
    SPL::rstring().swap(get_ID());

    return *this;
}

void SELF::normalizeBoundedSetsAndMaps()
{
    SPL::normalizeBoundedSetsAndMaps(*this);
}



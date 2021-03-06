// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CUnmannedTraderItemCodeInfo.hpp>
#include <CUnmannedTraderClassInfo.hpp>
#include <CUnmannedTraderClassInfoTableType.hpp>
#include <std__vector.hpp>


START_ATF_NAMESPACE
    struct  CUnmannedTraderClassInfoTableCodeType : CUnmannedTraderClassInfoTableType
    {
        std::vector<CUnmannedTraderItemCodeInfo> m_vecCodeList;
    public:
        CUnmannedTraderClassInfoTableCodeType(unsigned int dwID);
        void ctor_CUnmannedTraderClassInfoTableCodeType(unsigned int dwID);
        struct CUnmannedTraderClassInfo* Create(unsigned int dwID);
        bool GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass);
        bool GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass);
        bool LoadXML(struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID);
        ~CUnmannedTraderClassInfoTableCodeType();
        void dtor_CUnmannedTraderClassInfoTableCodeType();
    };
END_ATF_NAMESPACE

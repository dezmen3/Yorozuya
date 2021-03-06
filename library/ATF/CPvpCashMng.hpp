// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_class_value.hpp>
#include <_max_point.hpp>
#include <_talik_recvr_list.hpp>


START_ATF_NAMESPACE
    struct CPvpCashMng
    {
        _talik_recvr_list m_TalikList;
        _class_value m_ClassValList[50];
        _max_point m_LimitPoint[30];
    public:
        CPvpCashMng();
        void ctor_CPvpCashMng();
        int GetMaxTempPoint(char nLv, bool bPremium);
        int GetMinTempPoint(char nLv);
        int GetMyClassVal(char* pClass);
        int GetTalikNum();
        int GetTalikRecvrPoint(int i);
        int GetTalikRecvrPoint(char byTblCode, unsigned int dwIndex);
        static struct CPvpCashMng* Instance();
        bool IsTalikItem(char* strCode);
        bool LoadData();
        bool Parsing(char* szTitle, char* szItem, char** szBuff, int nInx, char byParseType);
        void Release();
        bool SetItem(char* szItemCode, int nInx);
        ~CPvpCashMng();
        void dtor_CPvpCashMng();
    };
END_ATF_NAMESPACE

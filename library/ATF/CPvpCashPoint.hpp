// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CIndexList.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CPvpCashPoint
    {
        CIndexList m_KillerList;
        char m_byContPvpHave;
        char m_byContPvpLose;
        bool m_bRaceWarRecvr;
    public:
        CPvpCashPoint();
        void ctor_CPvpCashPoint();
        long double CalPvpCashPoint(int nDstLv, int nSrcLv, char* pSrcClass, char nParty);
        bool CheckPvpHaveCondition(struct CPlayer* pKiller, struct CPlayer* pDier, long double dOldTempPoint);
        bool CheckPvpLoseCondition(struct CPlayer* pKiller, struct CPlayer* pDier);
        int GetContPvpHave();
        int GetContPvpLose();
        int GetMaxTempPoint(char nLv, bool bPremium);
        int GetMinTempPoint(char nLv);
        int GetMyClassVal(char* pClass);
        bool GetRaceWarRecvr();
        int GetTalikRecvrPoint(char byTblCode, unsigned int dwIndex);
        void Init(struct _PVP_ORDER_VIEW_DB_BASE* pkInfo);
        bool IsPvpMap(struct CPlayer* pOne);
        void KillerListInit();
        void SendMsg_PvpCashInform(int n, char byError);
        void SendMsg_RecoverResult(int n, char byRet, int nRecvrPoint);
        void SendMsg_TalikList(int n);
        void SetContPvpHave(char byCnt);
        void SetContPvpLose(int byCnt);
        bool SetKillerList(unsigned int dwKillerSerial);
        void SetRaceWarRecvr(bool bUsed);
        void UpdateKillerList(struct _PVP_ORDER_VIEW_DB_BASE* pkInfo);
        ~CPvpCashPoint();
        void dtor_CPvpCashPoint();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CPvpCashPoint, 256>(), "CPvpCashPoint");
END_ATF_NAMESPACE

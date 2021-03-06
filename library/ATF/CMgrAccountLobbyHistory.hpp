// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CFrameRate.hpp>
#include <CMyTimer.hpp>
#include <CNetIndexList.hpp>
#include <_AVATOR_DATA.hpp>
#include <_REGED.hpp>
#include <_REGED_AVATOR_DB.hpp>
#include <_qry_case_lobby_logout.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CMgrAccountLobbyHistory
    {
        struct __LOG_DATA
        {
            char szFileName[64];
            int nLen;
        };
        struct  __LOG_DATA_10K : __LOG_DATA
        {
            char sData[10000];
        };
        struct  __LOG_DATA_1K : __LOG_DATA
        {
            char sData[1000];
        };
        struct  __LOG_DATA_200 : __LOG_DATA
        {
            char sData[200];
        };
        char m_szStdPath[128];
        unsigned int m_dwLastLocalDate;
        unsigned int m_dwLastLocalHour;
        CMyTimer m_tmrUpdateTime;
        char m_szCurDate[32];
        char m_szCurTime[32];
        __LOG_DATA_10K m_LogData_10K[254];
        CNetIndexList m_listLogData_10K;
        CNetIndexList m_listLogDataEmpty_10K;
        __LOG_DATA_1K m_LogData_1K[254];
        CNetIndexList m_listLogData_1K;
        CNetIndexList m_listLogDataEmpty_1K;
        __LOG_DATA_200 m_LogData_200[2532];
        CNetIndexList m_listLogData_200;
        CNetIndexList m_listLogDataEmpty_200;
        bool m_bIOThread;
        CFrameRate m_FrameRate;
    public:
        CMgrAccountLobbyHistory();
        void ctor_CMgrAccountLobbyHistory();
        void GetNewFileName(unsigned int dwAccountSerial, char* pszFileName);
        static void IOThread(void* pv);
        void OnLoop();
        void WriteFile(char* pszFileName, char* pszLog);
        void add_char_complete(char byRetCode, struct _REGED_AVATOR_DB* pInsertData, char* pszFileName);
        void add_char_request(char* pszFileName);
        void del_char_complete(char byRetCode, char* pszFileName);
        void del_char_request(char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName);
        void enter_lobby(unsigned int dwAccountSerial, char* pAccountID, char byUserDgr, unsigned int dwIpAddress, bool bFirst, char* pszFileName);
        void lobby_disconnect(struct _qry_case_lobby_logout* pRegeData, char* pszFileName);
        void player_create(bool bFirstStart, struct _AVATOR_DATA* pAvator, char* pszFileName);
        void player_create_complete_money(struct _AVATOR_DATA* pAvator, char* pszFileName);
        void player_money_fix(unsigned int dwOldDalant, unsigned int dwOldGold, struct _AVATOR_DATA* pAvator, char* pszFileName);
        void recovery_char_complete(char byRetCode, struct _REGED* pAvator, char* pszFileName);
        void reged_char_complete(char byRetCode, int nCharNum, struct _REGED* pRegedList, char* pszFileName);
        void reged_char_request(char* pszFileName);
        void sel_char_complete(char byRetCode, struct _AVATOR_DATA* pAvator, unsigned int dwAddDalant, unsigned int dwAddGold, char* pszFileName);
        void sel_char_request(char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName);
        void tutorial_process_report_recv(char* pszFileName);
        ~CMgrAccountLobbyHistory();
        void dtor_CMgrAccountLobbyHistory();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<CMgrAccountLobbyHistory, 3508344>(), "CMgrAccountLobbyHistory");
END_ATF_NAMESPACE

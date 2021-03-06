#include <CRusiaBillingMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRusiaBillingMgrArrangeString2_ptr CRusiaBillingMgrArrangeString2_next(nullptr);
        Info::CRusiaBillingMgrArrangeString2_clbk CRusiaBillingMgrArrangeString2_user(nullptr);
        
        
        Info::CRusiaBillingMgrctor_CRusiaBillingMgr4_ptr CRusiaBillingMgrctor_CRusiaBillingMgr4_next(nullptr);
        Info::CRusiaBillingMgrctor_CRusiaBillingMgr4_clbk CRusiaBillingMgrctor_CRusiaBillingMgr4_user(nullptr);
        
        Info::CRusiaBillingMgrCallFunc_Item_Buy6_ptr CRusiaBillingMgrCallFunc_Item_Buy6_next(nullptr);
        Info::CRusiaBillingMgrCallFunc_Item_Buy6_clbk CRusiaBillingMgrCallFunc_Item_Buy6_user(nullptr);
        
        Info::CRusiaBillingMgrCallFunc_Item_Cancel8_ptr CRusiaBillingMgrCallFunc_Item_Cancel8_next(nullptr);
        Info::CRusiaBillingMgrCallFunc_Item_Cancel8_clbk CRusiaBillingMgrCallFunc_Item_Cancel8_user(nullptr);
        
        Info::CRusiaBillingMgrCallFunc_RFOnline_Auth10_ptr CRusiaBillingMgrCallFunc_RFOnline_Auth10_next(nullptr);
        Info::CRusiaBillingMgrCallFunc_RFOnline_Auth10_clbk CRusiaBillingMgrCallFunc_RFOnline_Auth10_user(nullptr);
        
        Info::CRusiaBillingMgrConfigUserODBC12_ptr CRusiaBillingMgrConfigUserODBC12_next(nullptr);
        Info::CRusiaBillingMgrConfigUserODBC12_clbk CRusiaBillingMgrConfigUserODBC12_user(nullptr);
        
        Info::CRusiaBillingMgrDeleteMem14_ptr CRusiaBillingMgrDeleteMem14_next(nullptr);
        Info::CRusiaBillingMgrDeleteMem14_clbk CRusiaBillingMgrDeleteMem14_user(nullptr);
        
        Info::CRusiaBillingMgrFree16_ptr CRusiaBillingMgrFree16_next(nullptr);
        Info::CRusiaBillingMgrFree16_clbk CRusiaBillingMgrFree16_user(nullptr);
        
        Info::CRusiaBillingMgrInit18_ptr CRusiaBillingMgrInit18_next(nullptr);
        Info::CRusiaBillingMgrInit18_clbk CRusiaBillingMgrInit18_user(nullptr);
        
        Info::CRusiaBillingMgrInstance20_ptr CRusiaBillingMgrInstance20_next(nullptr);
        Info::CRusiaBillingMgrInstance20_clbk CRusiaBillingMgrInstance20_user(nullptr);
        
        Info::CRusiaBillingMgrLoadINIFile22_ptr CRusiaBillingMgrLoadINIFile22_next(nullptr);
        Info::CRusiaBillingMgrLoadINIFile22_clbk CRusiaBillingMgrLoadINIFile22_user(nullptr);
        
        Info::CRusiaBillingMgrRelease24_ptr CRusiaBillingMgrRelease24_next(nullptr);
        Info::CRusiaBillingMgrRelease24_clbk CRusiaBillingMgrRelease24_user(nullptr);
        
        Info::CRusiaBillingMgrdhExtractSubString28_ptr CRusiaBillingMgrdhExtractSubString28_next(nullptr);
        Info::CRusiaBillingMgrdhExtractSubString28_clbk CRusiaBillingMgrdhExtractSubString28_user(nullptr);
        
        Info::CRusiaBillingMgrdhRExtractSubString30_ptr CRusiaBillingMgrdhRExtractSubString30_next(nullptr);
        Info::CRusiaBillingMgrdhRExtractSubString30_clbk CRusiaBillingMgrdhRExtractSubString30_user(nullptr);
        
        
        Info::CRusiaBillingMgrdtor_CRusiaBillingMgr32_ptr CRusiaBillingMgrdtor_CRusiaBillingMgr32_next(nullptr);
        Info::CRusiaBillingMgrdtor_CRusiaBillingMgr32_clbk CRusiaBillingMgrdtor_CRusiaBillingMgr32_user(nullptr);
        
        void CRusiaBillingMgrArrangeString2_wrapper(struct CRusiaBillingMgr* _this, char* szDest, char* szSorc, char cToken)
        {
           CRusiaBillingMgrArrangeString2_user(_this, szDest, szSorc, cToken, CRusiaBillingMgrArrangeString2_next);
        };
        
        void CRusiaBillingMgrctor_CRusiaBillingMgr4_wrapper(struct CRusiaBillingMgr* _this)
        {
           CRusiaBillingMgrctor_CRusiaBillingMgr4_user(_this, CRusiaBillingMgrctor_CRusiaBillingMgr4_next);
        };
        int CRusiaBillingMgrCallFunc_Item_Buy6_wrapper(struct CRusiaBillingMgr* _this, struct _param_cash_update* rParam, int nIdx)
        {
           return CRusiaBillingMgrCallFunc_Item_Buy6_user(_this, rParam, nIdx, CRusiaBillingMgrCallFunc_Item_Buy6_next);
        };
        int CRusiaBillingMgrCallFunc_Item_Cancel8_wrapper(struct CRusiaBillingMgr* _this, struct _param_cash_rollback::__list* list, char* szUserID)
        {
           return CRusiaBillingMgrCallFunc_Item_Cancel8_user(_this, list, szUserID, CRusiaBillingMgrCallFunc_Item_Cancel8_next);
        };
        int CRusiaBillingMgrCallFunc_RFOnline_Auth10_wrapper(struct CRusiaBillingMgr* _this, struct _param_cash_select* rParam)
        {
           return CRusiaBillingMgrCallFunc_RFOnline_Auth10_user(_this, rParam, CRusiaBillingMgrCallFunc_RFOnline_Auth10_next);
        };
        int CRusiaBillingMgrConfigUserODBC12_wrapper(struct CRusiaBillingMgr* _this, char* szDSN, char* szServer, char* szDatabase, uint16_t wPort)
        {
           return CRusiaBillingMgrConfigUserODBC12_user(_this, szDSN, szServer, szDatabase, wPort, CRusiaBillingMgrConfigUserODBC12_next);
        };
        void CRusiaBillingMgrDeleteMem14_wrapper(struct CRusiaBillingMgr* _this)
        {
           CRusiaBillingMgrDeleteMem14_user(_this, CRusiaBillingMgrDeleteMem14_next);
        };
        int CRusiaBillingMgrFree16_wrapper(struct CRusiaBillingMgr* _this)
        {
           return CRusiaBillingMgrFree16_user(_this, CRusiaBillingMgrFree16_next);
        };
        int CRusiaBillingMgrInit18_wrapper(struct CRusiaBillingMgr* _this)
        {
           return CRusiaBillingMgrInit18_user(_this, CRusiaBillingMgrInit18_next);
        };
        struct CRusiaBillingMgr* CRusiaBillingMgrInstance20_wrapper(struct CRusiaBillingMgr* _this)
        {
           return CRusiaBillingMgrInstance20_user(_this, CRusiaBillingMgrInstance20_next);
        };
        int CRusiaBillingMgrLoadINIFile22_wrapper(struct CRusiaBillingMgr* _this)
        {
           return CRusiaBillingMgrLoadINIFile22_user(_this, CRusiaBillingMgrLoadINIFile22_next);
        };
        void CRusiaBillingMgrRelease24_wrapper(struct CRusiaBillingMgr* _this)
        {
           CRusiaBillingMgrRelease24_user(_this, CRusiaBillingMgrRelease24_next);
        };
        char* CRusiaBillingMgrdhExtractSubString28_wrapper(struct CRusiaBillingMgr* _this, char* szSub, char* szFull, char cToken)
        {
           return CRusiaBillingMgrdhExtractSubString28_user(_this, szSub, szFull, cToken, CRusiaBillingMgrdhExtractSubString28_next);
        };
        void CRusiaBillingMgrdhRExtractSubString30_wrapper(struct CRusiaBillingMgr* _this, char* szSub, char* szFull, char cToken)
        {
           CRusiaBillingMgrdhRExtractSubString30_user(_this, szSub, szFull, cToken, CRusiaBillingMgrdhRExtractSubString30_next);
        };
        
        void CRusiaBillingMgrdtor_CRusiaBillingMgr32_wrapper(struct CRusiaBillingMgr* _this)
        {
           CRusiaBillingMgrdtor_CRusiaBillingMgr32_user(_this, CRusiaBillingMgrdtor_CRusiaBillingMgr32_next);
        };
        
        ::std::array<hook_record, 15> CRusiaBillingMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140321a90L,
                (LPVOID *)&CRusiaBillingMgrArrangeString2_user,
                (LPVOID *)&CRusiaBillingMgrArrangeString2_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrArrangeString2_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)(char*, char*, char))&CRusiaBillingMgr::ArrangeString)
            },
            _hook_record {
                (LPVOID)0x140320dc0L,
                (LPVOID *)&CRusiaBillingMgrctor_CRusiaBillingMgr4_user,
                (LPVOID *)&CRusiaBillingMgrctor_CRusiaBillingMgr4_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrctor_CRusiaBillingMgr4_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)())&CRusiaBillingMgr::ctor_CRusiaBillingMgr)
            },
            _hook_record {
                (LPVOID)0x140321190L,
                (LPVOID *)&CRusiaBillingMgrCallFunc_Item_Buy6_user,
                (LPVOID *)&CRusiaBillingMgrCallFunc_Item_Buy6_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrCallFunc_Item_Buy6_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)(struct _param_cash_update*, int))&CRusiaBillingMgr::CallFunc_Item_Buy)
            },
            _hook_record {
                (LPVOID)0x140321300L,
                (LPVOID *)&CRusiaBillingMgrCallFunc_Item_Cancel8_user,
                (LPVOID *)&CRusiaBillingMgrCallFunc_Item_Cancel8_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrCallFunc_Item_Cancel8_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)(struct _param_cash_rollback::__list*, char*))&CRusiaBillingMgr::CallFunc_Item_Cancel)
            },
            _hook_record {
                (LPVOID)0x1403213a0L,
                (LPVOID *)&CRusiaBillingMgrCallFunc_RFOnline_Auth10_user,
                (LPVOID *)&CRusiaBillingMgrCallFunc_RFOnline_Auth10_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrCallFunc_RFOnline_Auth10_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)(struct _param_cash_select*))&CRusiaBillingMgr::CallFunc_RFOnline_Auth)
            },
            _hook_record {
                (LPVOID)0x140321710L,
                (LPVOID *)&CRusiaBillingMgrConfigUserODBC12_user,
                (LPVOID *)&CRusiaBillingMgrConfigUserODBC12_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrConfigUserODBC12_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)(char*, char*, char*, uint16_t))&CRusiaBillingMgr::ConfigUserODBC)
            },
            _hook_record {
                (LPVOID)0x140321180L,
                (LPVOID *)&CRusiaBillingMgrDeleteMem14_user,
                (LPVOID *)&CRusiaBillingMgrDeleteMem14_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrDeleteMem14_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)())&CRusiaBillingMgr::DeleteMem)
            },
            _hook_record {
                (LPVOID)0x140320eb0L,
                (LPVOID *)&CRusiaBillingMgrFree16_user,
                (LPVOID *)&CRusiaBillingMgrFree16_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrFree16_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)())&CRusiaBillingMgr::Free)
            },
            _hook_record {
                (LPVOID)0x140320e40L,
                (LPVOID *)&CRusiaBillingMgrInit18_user,
                (LPVOID *)&CRusiaBillingMgrInit18_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrInit18_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)())&CRusiaBillingMgr::Init)
            },
            _hook_record {
                (LPVOID)0x140320f20L,
                (LPVOID *)&CRusiaBillingMgrInstance20_user,
                (LPVOID *)&CRusiaBillingMgrInstance20_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrInstance20_wrapper),
                (LPVOID)cast_pointer_function((struct CRusiaBillingMgr*(CRusiaBillingMgr::*)())&CRusiaBillingMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140321430L,
                (LPVOID *)&CRusiaBillingMgrLoadINIFile22_user,
                (LPVOID *)&CRusiaBillingMgrLoadINIFile22_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrLoadINIFile22_wrapper),
                (LPVOID)cast_pointer_function((int(CRusiaBillingMgr::*)())&CRusiaBillingMgr::LoadINIFile)
            },
            _hook_record {
                (LPVOID)0x1403210f0L,
                (LPVOID *)&CRusiaBillingMgrRelease24_user,
                (LPVOID *)&CRusiaBillingMgrRelease24_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrRelease24_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)())&CRusiaBillingMgr::Release)
            },
            _hook_record {
                (LPVOID)0x1403218a0L,
                (LPVOID *)&CRusiaBillingMgrdhExtractSubString28_user,
                (LPVOID *)&CRusiaBillingMgrdhExtractSubString28_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrdhExtractSubString28_wrapper),
                (LPVOID)cast_pointer_function((char*(CRusiaBillingMgr::*)(char*, char*, char))&CRusiaBillingMgr::dhExtractSubString)
            },
            _hook_record {
                (LPVOID)0x140321980L,
                (LPVOID *)&CRusiaBillingMgrdhRExtractSubString30_user,
                (LPVOID *)&CRusiaBillingMgrdhRExtractSubString30_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrdhRExtractSubString30_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)(char*, char*, char))&CRusiaBillingMgr::dhRExtractSubString)
            },
            _hook_record {
                (LPVOID)0x140320e00L,
                (LPVOID *)&CRusiaBillingMgrdtor_CRusiaBillingMgr32_user,
                (LPVOID *)&CRusiaBillingMgrdtor_CRusiaBillingMgr32_next,
                (LPVOID)cast_pointer_function(CRusiaBillingMgrdtor_CRusiaBillingMgr32_wrapper),
                (LPVOID)cast_pointer_function((void(CRusiaBillingMgr::*)())&CRusiaBillingMgr::dtor_CRusiaBillingMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE

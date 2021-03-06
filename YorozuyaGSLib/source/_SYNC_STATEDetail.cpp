#include <_SYNC_STATEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_SYNC_STATEInit2_ptr _SYNC_STATEInit2_next(nullptr);
        Info::_SYNC_STATEInit2_clbk _SYNC_STATEInit2_user(nullptr);
        
        
        Info::_SYNC_STATEctor__SYNC_STATE4_ptr _SYNC_STATEctor__SYNC_STATE4_next(nullptr);
        Info::_SYNC_STATEctor__SYNC_STATE4_clbk _SYNC_STATEctor__SYNC_STATE4_user(nullptr);
        
        Info::_SYNC_STATEchk_enter6_ptr _SYNC_STATEchk_enter6_next(nullptr);
        Info::_SYNC_STATEchk_enter6_clbk _SYNC_STATEchk_enter6_user(nullptr);
        
        Info::_SYNC_STATEchk_reged8_ptr _SYNC_STATEchk_reged8_next(nullptr);
        Info::_SYNC_STATEchk_reged8_clbk _SYNC_STATEchk_reged8_user(nullptr);
        
        Info::_SYNC_STATEchk_select10_ptr _SYNC_STATEchk_select10_next(nullptr);
        Info::_SYNC_STATEchk_select10_clbk _SYNC_STATEchk_select10_user(nullptr);
        
        Info::_SYNC_STATEre_lobby12_ptr _SYNC_STATEre_lobby12_next(nullptr);
        Info::_SYNC_STATEre_lobby12_clbk _SYNC_STATEre_lobby12_user(nullptr);
        
        void _SYNC_STATEInit2_wrapper(struct _SYNC_STATE* _this)
        {
           _SYNC_STATEInit2_user(_this, _SYNC_STATEInit2_next);
        };
        
        void _SYNC_STATEctor__SYNC_STATE4_wrapper(struct _SYNC_STATE* _this)
        {
           _SYNC_STATEctor__SYNC_STATE4_user(_this, _SYNC_STATEctor__SYNC_STATE4_next);
        };
        bool _SYNC_STATEchk_enter6_wrapper(struct _SYNC_STATE* _this)
        {
           return _SYNC_STATEchk_enter6_user(_this, _SYNC_STATEchk_enter6_next);
        };
        bool _SYNC_STATEchk_reged8_wrapper(struct _SYNC_STATE* _this)
        {
           return _SYNC_STATEchk_reged8_user(_this, _SYNC_STATEchk_reged8_next);
        };
        bool _SYNC_STATEchk_select10_wrapper(struct _SYNC_STATE* _this)
        {
           return _SYNC_STATEchk_select10_user(_this, _SYNC_STATEchk_select10_next);
        };
        void _SYNC_STATEre_lobby12_wrapper(struct _SYNC_STATE* _this)
        {
           _SYNC_STATEre_lobby12_user(_this, _SYNC_STATEre_lobby12_next);
        };
        
        ::std::array<hook_record, 6> _SYNC_STATE_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f120L,
                (LPVOID *)&_SYNC_STATEInit2_user,
                (LPVOID *)&_SYNC_STATEInit2_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_SYNC_STATE::*)())&_SYNC_STATE::Init)
            },
            _hook_record {
                (LPVOID)0x14011f0d0L,
                (LPVOID *)&_SYNC_STATEctor__SYNC_STATE4_user,
                (LPVOID *)&_SYNC_STATEctor__SYNC_STATE4_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEctor__SYNC_STATE4_wrapper),
                (LPVOID)cast_pointer_function((void(_SYNC_STATE::*)())&_SYNC_STATE::ctor__SYNC_STATE)
            },
            _hook_record {
                (LPVOID)0x14011f200L,
                (LPVOID *)&_SYNC_STATEchk_enter6_user,
                (LPVOID *)&_SYNC_STATEchk_enter6_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEchk_enter6_wrapper),
                (LPVOID)cast_pointer_function((bool(_SYNC_STATE::*)())&_SYNC_STATE::chk_enter)
            },
            _hook_record {
                (LPVOID)0x14011f510L,
                (LPVOID *)&_SYNC_STATEchk_reged8_user,
                (LPVOID *)&_SYNC_STATEchk_reged8_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEchk_reged8_wrapper),
                (LPVOID)cast_pointer_function((bool(_SYNC_STATE::*)())&_SYNC_STATE::chk_reged)
            },
            _hook_record {
                (LPVOID)0x14011f8a0L,
                (LPVOID *)&_SYNC_STATEchk_select10_user,
                (LPVOID *)&_SYNC_STATEchk_select10_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEchk_select10_wrapper),
                (LPVOID)cast_pointer_function((bool(_SYNC_STATE::*)())&_SYNC_STATE::chk_select)
            },
            _hook_record {
                (LPVOID)0x14011fba0L,
                (LPVOID *)&_SYNC_STATEre_lobby12_user,
                (LPVOID *)&_SYNC_STATEre_lobby12_next,
                (LPVOID)cast_pointer_function(_SYNC_STATEre_lobby12_wrapper),
                (LPVOID)cast_pointer_function((void(_SYNC_STATE::*)())&_SYNC_STATE::re_lobby)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE

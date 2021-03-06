#include <CCheckSumBaseConverterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CCheckSumBaseConverterProcCode2_ptr CCheckSumBaseConverterProcCode2_next(nullptr);
        Info::CCheckSumBaseConverterProcCode2_clbk CCheckSumBaseConverterProcCode2_user(nullptr);
        
        Info::CCheckSumBaseConverterProcCode4_ptr CCheckSumBaseConverterProcCode4_next(nullptr);
        Info::CCheckSumBaseConverterProcCode4_clbk CCheckSumBaseConverterProcCode4_user(nullptr);
        
        long double CCheckSumBaseConverterProcCode2_wrapper(struct CCheckSumBaseConverter* _this, char byIndex, unsigned int dwSerial, long double dValue)
        {
           return CCheckSumBaseConverterProcCode2_user(_this, byIndex, dwSerial, dValue, CCheckSumBaseConverterProcCode2_next);
        };
        unsigned int CCheckSumBaseConverterProcCode4_wrapper(struct CCheckSumBaseConverter* _this, char byIndex, unsigned int dwSerial, unsigned int dwValue)
        {
           return CCheckSumBaseConverterProcCode4_user(_this, byIndex, dwSerial, dwValue, CCheckSumBaseConverterProcCode4_next);
        };
        
        ::std::array<hook_record, 2> CCheckSumBaseConverter_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c1440L,
                (LPVOID *)&CCheckSumBaseConverterProcCode2_user,
                (LPVOID *)&CCheckSumBaseConverterProcCode2_next,
                (LPVOID)cast_pointer_function(CCheckSumBaseConverterProcCode2_wrapper),
                (LPVOID)cast_pointer_function((long double(CCheckSumBaseConverter::*)(char, unsigned int, long double))&CCheckSumBaseConverter::ProcCode)
            },
            _hook_record {
                (LPVOID)0x1402c13c0L,
                (LPVOID *)&CCheckSumBaseConverterProcCode4_user,
                (LPVOID *)&CCheckSumBaseConverterProcCode4_next,
                (LPVOID)cast_pointer_function(CCheckSumBaseConverterProcCode4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CCheckSumBaseConverter::*)(char, unsigned int, unsigned int))&CCheckSumBaseConverter::ProcCode)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE

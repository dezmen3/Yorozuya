// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <AutoMineMachineMng.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using AutoMineMachineMngctor_AutoMineMachineMng2_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        using AutoMineMachineMngctor_AutoMineMachineMng2_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, AutoMineMachineMngctor_AutoMineMachineMng2_ptr);
        using AutoMineMachineMngBatteryCharge4_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        using AutoMineMachineMngBatteryCharge4_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*, AutoMineMachineMngBatteryCharge4_ptr);
        using AutoMineMachineMngChangeOwner6_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, int, struct CGuild*, char);
        using AutoMineMachineMngChangeOwner6_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, int, struct CGuild*, char, AutoMineMachineMngChangeOwner6_ptr);
        using AutoMineMachineMngCloseUI8_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        using AutoMineMachineMngCloseUI8_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, AutoMineMachineMngCloseUI8_ptr);
        using AutoMineMachineMngCommand10_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, int, char*);
        using AutoMineMachineMngCommand10_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, int, char*, AutoMineMachineMngCommand10_ptr);
        using AutoMineMachineMngGetMachine12_ptr = struct AutoMineMachine* (WINAPIV*)(struct AutoMineMachineMng*, char, char);
        using AutoMineMachineMngGetMachine12_clbk = struct AutoMineMachine* (WINAPIV*)(struct AutoMineMachineMng*, char, char, AutoMineMachineMngGetMachine12_ptr);
        using AutoMineMachineMngGetOutOre14_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        using AutoMineMachineMngGetOutOre14_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*, AutoMineMachineMngGetOutOre14_ptr);
        using AutoMineMachineMngInitialzie16_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*);
        using AutoMineMachineMngInitialzie16_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, AutoMineMachineMngInitialzie16_ptr);
        using AutoMineMachineMngInstance18_ptr = struct AutoMineMachineMng* (WINAPIV*)();
        using AutoMineMachineMngInstance18_clbk = struct AutoMineMachineMng* (WINAPIV*)(AutoMineMachineMngInstance18_ptr);
        using AutoMineMachineMngLoop20_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        using AutoMineMachineMngLoop20_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, AutoMineMachineMngLoop20_ptr);
        using AutoMineMachineMngMoveOrePos22_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        using AutoMineMachineMngMoveOrePos22_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*, AutoMineMachineMngMoveOrePos22_ptr);
        using AutoMineMachineMngOpenUI24_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        using AutoMineMachineMngOpenUI24_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, AutoMineMachineMngOpenUI24_ptr);
        using AutoMineMachineMngOreMerge26_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        using AutoMineMachineMngOreMerge26_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*, AutoMineMachineMngOreMerge26_ptr);
        using AutoMineMachineMngRelease28_ptr = void (WINAPIV*)();
        using AutoMineMachineMngRelease28_clbk = void (WINAPIV*)(AutoMineMachineMngRelease28_ptr);
        using AutoMineMachineMngSelectOreType30_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        using AutoMineMachineMngSelectOreType30_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*, AutoMineMachineMngSelectOreType30_ptr);
        using AutoMineMachineMngSendMsg_ResultCode32_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, int, char, char);
        using AutoMineMachineMngSendMsg_ResultCode32_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, int, char, char, AutoMineMachineMngSendMsg_ResultCode32_ptr);
        using AutoMineMachineMngStartWorkMachine34_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        using AutoMineMachineMngStartWorkMachine34_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, AutoMineMachineMngStartWorkMachine34_ptr);
        using AutoMineMachineMngStopWorkMachine36_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        using AutoMineMachineMngStopWorkMachine36_clbk = bool (WINAPIV*)(struct AutoMineMachineMng*, int, AutoMineMachineMngStopWorkMachine36_ptr);
        using AutoMineMachineMng_db_qry_insert_newowner38_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_insert_newowner38_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_insert_newowner38_ptr);
        using AutoMineMachineMng_db_qry_update_battery_charge40_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_battery_charge40_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_battery_charge40_ptr);
        using AutoMineMachineMng_db_qry_update_battery_discharge42_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_battery_discharge42_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_battery_discharge42_ptr);
        using AutoMineMachineMng_db_qry_update_mineore44_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_mineore44_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_mineore44_ptr);
        using AutoMineMachineMng_db_qry_update_moveore46_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_moveore46_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_moveore46_ptr);
        using AutoMineMachineMng_db_qry_update_selore48_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_selore48_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_selore48_ptr);
        using AutoMineMachineMng_db_qry_update_workstate50_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMng_db_qry_update_workstate50_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMng_db_qry_update_workstate50_ptr);
        using AutoMineMachineMngget_type54_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, struct CPlayer*, char);
        using AutoMineMachineMngget_type54_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, struct CPlayer*, char, AutoMineMachineMngget_type54_ptr);
        using AutoMineMachineMngrequest_db_query56_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        using AutoMineMachineMngrequest_db_query56_clbk = char (WINAPIV*)(struct AutoMineMachineMng*, char*, AutoMineMachineMngrequest_db_query56_ptr);
        using AutoMineMachineMngresult_db_query58_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, char, char*);
        using AutoMineMachineMngresult_db_query58_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, char, char*, AutoMineMachineMngresult_db_query58_ptr);
        
        using AutoMineMachineMngdtor_AutoMineMachineMng60_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        using AutoMineMachineMngdtor_AutoMineMachineMng60_clbk = void (WINAPIV*)(struct AutoMineMachineMng*, AutoMineMachineMngdtor_AutoMineMachineMng60_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE

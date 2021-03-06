// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CDarkHole.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CDarkHolector_CDarkHole2_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHolector_CDarkHole2_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHolector_CDarkHole2_ptr);
        using CDarkHoleCreate4_ptr = bool (WINAPIV*)(struct CDarkHole*, struct _darkhole_create_setdata*);
        using CDarkHoleCreate4_clbk = bool (WINAPIV*)(struct CDarkHole*, struct _darkhole_create_setdata*, CDarkHoleCreate4_ptr);
        using CDarkHoleDestroy6_ptr = bool (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleDestroy6_clbk = bool (WINAPIV*)(struct CDarkHole*, CDarkHoleDestroy6_ptr);
        using CDarkHoleEnterPlayer8_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*, struct CMapData*, uint16_t, float*, bool);
        using CDarkHoleEnterPlayer8_clbk = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*, struct CMapData*, uint16_t, float*, bool, CDarkHoleEnterPlayer8_ptr);
        using CDarkHoleGetEnterNewPos10_ptr = bool (WINAPIV*)(struct CDarkHole*, struct _ENTER_DUNGEON_NEW_POS*);
        using CDarkHoleGetEnterNewPos10_clbk = bool (WINAPIV*)(struct CDarkHole*, struct _ENTER_DUNGEON_NEW_POS*, CDarkHoleGetEnterNewPos10_ptr);
        using CDarkHoleInit12_ptr = void (WINAPIV*)(struct CDarkHole*, struct _object_id*);
        using CDarkHoleInit12_clbk = void (WINAPIV*)(struct CDarkHole*, struct _object_id*, CDarkHoleInit12_ptr);
        using CDarkHoleIsNewEnterAbleNum14_ptr = bool (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleIsNewEnterAbleNum14_clbk = bool (WINAPIV*)(struct CDarkHole*, CDarkHoleIsNewEnterAbleNum14_ptr);
        using CDarkHoleIsNewEnterAblePlayer16_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*);
        using CDarkHoleIsNewEnterAblePlayer16_clbk = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*, CDarkHoleIsNewEnterAblePlayer16_ptr);
        using CDarkHoleIsOpenPartyMember18_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*);
        using CDarkHoleIsOpenPartyMember18_clbk = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*, CDarkHoleIsOpenPartyMember18_ptr);
        using CDarkHoleLoop20_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleLoop20_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHoleLoop20_ptr);
        using CDarkHoleSendMsg_Create22_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleSendMsg_Create22_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHoleSendMsg_Create22_ptr);
        using CDarkHoleSendMsg_Destroy24_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleSendMsg_Destroy24_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHoleSendMsg_Destroy24_ptr);
        using CDarkHoleSendMsg_FixPosition26_ptr = void (WINAPIV*)(struct CDarkHole*, int);
        using CDarkHoleSendMsg_FixPosition26_clbk = void (WINAPIV*)(struct CDarkHole*, int, CDarkHoleSendMsg_FixPosition26_ptr);
        using CDarkHoleSendMsg_StateChange28_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHoleSendMsg_StateChange28_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHoleSendMsg_StateChange28_ptr);
        
        using CDarkHoledtor_CDarkHole34_ptr = void (WINAPIV*)(struct CDarkHole*);
        using CDarkHoledtor_CDarkHole34_clbk = void (WINAPIV*)(struct CDarkHole*, CDarkHoledtor_CDarkHole34_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE

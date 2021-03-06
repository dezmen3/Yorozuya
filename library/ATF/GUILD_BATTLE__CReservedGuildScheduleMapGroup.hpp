// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CReservedGuildSchedulePage.hpp>
#include <_worlddb_guild_battle_reserved_schedule_info.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CReservedGuildScheduleMapGroup
        {
            unsigned int m_uiMapInx;
            char m_byMaxPage;
            CReservedGuildSchedulePage m_kList[6];
        public:
            CReservedGuildScheduleMapGroup();
            void ctor_CReservedGuildScheduleMapGroup();
            bool Clear();
            struct CReservedGuildSchedulePage* Find(unsigned int dwGuildSerial);
            void Flip();
            char GetMaxPage();
            bool Init(unsigned int uiMapInx);
            bool Load(char byDayID, struct _worlddb_guild_battle_reserved_schedule_info* kInfo);
            void Send(int n, unsigned int dwVer, char byPage, struct CReservedGuildSchedulePage* pkSelfInfoPage);
            ~CReservedGuildScheduleMapGroup();
            void dtor_CReservedGuildScheduleMapGroup();
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE

// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CEventLootTableVtbl.hpp>


START_ATF_NAMESPACE
    struct CEventLootTable
    {
        struct _event_drop
        {
            char strCode[64];
            unsigned __int16 wMagnifications;
            unsigned __int16 wRange;
            unsigned __int16 wDropCntOnce;
            unsigned __int16 wDropDelay;
            _event_drop *pNext;
        public:
            _event_drop();
            void ctor__event_drop();
        };
        CEventLootTableVtbl *vfptr;
        _event_drop *m_pEventDropList;
    public:
        void AddRecord(struct _event_drop* pEventDrop);
        CEventLootTable();
        void ctor_CEventLootTable();
        struct _event_drop* GetRecord(char* szRecordCode);
        bool ReadRecord();
        ~CEventLootTable();
        void dtor_CEventLootTable();
    };
END_ATF_NAMESPACE

// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CObject.hpp>
#include <CPlex.hpp>


START_ATF_NAMESPACE
    struct  CPtrList : CObject
    {
        struct CNode
        {
            struct CNode *pNext;
            struct CNode *pPrev;
            void *data;
        };
        struct CNode *m_pNodeHead;
        struct CNode *m_pNodeTail;
        __int64 m_nCount;
        struct CNode *m_pNodeFree;
        struct CPlex *m_pBlocks;
        __int64 m_nBlockSize;
    };
END_ATF_NAMESPACE

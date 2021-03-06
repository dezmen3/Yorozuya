// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNetCriticalSection.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CNetIndexList
    {
        struct _index_node
        {
            unsigned int m_dwIndex;
            _index_node *m_pPrev;
            _index_node *m_pNext;
        public:
            _index_node();
            void ctor__index_node();
        };
        _index_node m_Head;
        _index_node m_Tail;
        _index_node m_BufHead;
        _index_node m_BufTail;
        _index_node *m_pBufNode;
        CNetCriticalSection m_csList;
        unsigned int m_dwCount;
        unsigned int m_dwBufCount;
        unsigned int m_dwMaxBufNum;
    public:
        CNetIndexList();
        void ctor_CNetIndexList();
        bool CopyFront(unsigned int* pdwOutIndex);
        int CopyIndexList(unsigned int* pdwList, int nMax);
        struct _index_node* FindNode(unsigned int dwIndex);
        bool IsInList(unsigned int dwIndex);
        bool PopNode_Back(unsigned int* pdwOutIndex);
        bool PopNode_Front(unsigned int* pdwOutIndex);
        bool PushNode_Back(unsigned int dwIndex);
        bool PushNode_Front(unsigned int dwIndex);
        void ResetList();
        bool SetList(unsigned int dwMaxBufNum);
        int size();
        ~CNetIndexList();
        void dtor_CNetIndexList();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CNetIndexList, 160>(), "CNetIndexList");
END_ATF_NAMESPACE

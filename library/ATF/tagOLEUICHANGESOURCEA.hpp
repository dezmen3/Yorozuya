// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HRSRC__.hpp>
#include <HWND__.hpp>
#include <IOleUILinkContainerA.hpp>
#include <tagOFNA.hpp>


START_ATF_NAMESPACE
    struct tagOLEUICHANGESOURCEA
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        HWND__ *hWndOwner;
        const char *lpszCaption;
        unsigned int (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lCustData;
        HINSTANCE__ *hInstance;
        const char *lpszTemplate;
        HRSRC__ *hResource;
        tagOFNA *lpOFN;
        unsigned int dwReserved1[4];
        IOleUILinkContainerA *lpOleUILinkContainer;
        unsigned int dwLink;
        char *lpszDisplayName;
        unsigned int nFileLength;
        char *lpszFrom;
        char *lpszTo;
    };
END_ATF_NAMESPACE

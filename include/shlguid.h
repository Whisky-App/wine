/*
 * Copyright (C) 1999 Juergen Schmied
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_SHLGUID_H
#define __WINE_SHLGUID_H

DEFINE_OLEGUID(CLSID_ShellDesktop,      0x00021400L, 0, 0);
DEFINE_OLEGUID(CLSID_ShellLink,         0x00021401L, 0, 0);

DEFINE_OLEGUID(CATID_BrowsableShellExt, 0x00021490L, 0, 0);
DEFINE_OLEGUID(CATID_BrowseInPlace,     0x00021491L, 0, 0);
DEFINE_OLEGUID(CATID_DeskBand,          0x00021492L, 0, 0);
DEFINE_OLEGUID(CATID_InfoBand,          0x00021493L, 0, 0);
DEFINE_OLEGUID(CATID_CommBand,          0x00021494L, 0, 0);

/* shell32 formatids */
DEFINE_OLEGUID(FMTID_Intshcut,          0x000214A0L, 0, 0);
DEFINE_OLEGUID(FMTID_InternetSite,      0x000214A1L, 0, 0);

/* command group ids */
DEFINE_OLEGUID(CGID_Explorer,           0x000214D0L, 0, 0);
DEFINE_OLEGUID(CGID_ShellDocView,       0x000214D1L, 0, 0);
DEFINE_OLEGUID(CGID_ShellServiceObject, 0x000214D2L, 0, 0);
DEFINE_OLEGUID(CGID_ExplorerBarDoc,     0x000214D3L, 0, 0);

DEFINE_OLEGUID(IID_IShellIcon,          0x000214E5L, 0, 0);
DEFINE_OLEGUID(IID_IShellDetails,       0x000214ECL, 0, 0);
DEFINE_OLEGUID(IID_IDelayedRelease,     0x000214EDL, 0, 0);
DEFINE_OLEGUID(IID_IShellCopyHookA,     0x000214EFL, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerA,        0x000214F0L, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerSite,     0x000214F3L, 0, 0);
DEFINE_OLEGUID(IID_IPropSheetPage,      0x000214F6L, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerW,        0x000214F8L, 0, 0);
DEFINE_OLEGUID(IID_IShellCopyHookW,     0x000214FCL, 0, 0);
DEFINE_OLEGUID(IID_IRemoteComputer,     0x000214FEL, 0, 0);
DEFINE_OLEGUID(IID_IQueryInfo,          0x00021500L, 0, 0);

DEFINE_GUID(IID_IACList,   0x77A130B0L,0x94FD,0x11D0,0xA5,0x44,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
DEFINE_GUID(IID_IACList2,  0x470141A0L,0x5186,0x11D2,0xBB,0xB6,0x00,0x60,0x97,0x7B,0x46,0x4C);
DEFINE_GUID(IID_IObjMgr,   0x00BB2761L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);

DEFINE_GUID(IID_IProgressDialog, 0xEBBC7C04,0x315E,0x11D2,0xB6,0x2F,0x00,0x60,0x97,0xDF,0x5B,0xD4);


/* avoid duplicate definitions with shobjidl.h (FIXME) */
/* DEFINE_OLEGUID(IID_IShellPropSheetExt,  0x000214E9L, 0, 0); */
/* DEFINE_OLEGUID(IID_IExtractIconA,       0x000214EBL, 0, 0); */
/* DEFINE_OLEGUID(IID_IExtractIconW,       0x000214FAL, 0, 0); */
/* DEFINE_OLEGUID(IID_IContextMenu,        0x000214E4L, 0, 0); */
/* DEFINE_OLEGUID(IID_IContextMenu2,       0x000214F4L, 0, 0); */
/* DEFINE_OLEGUID(IID_ICommDlgBrowser,     0x000214F1L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellBrowser,       0x000214E2L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellView,          0x000214E3L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellFolder,        0x000214E6L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExtInit,       0x000214E8L, 0, 0); */
/* DEFINE_OLEGUID(IID_IPersistFolder,      0x000214EAL, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellLinkA,         0x000214EEL, 0, 0); */
/* DEFINE_OLEGUID(IID_IEnumIDList,         0x000214F2L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellLinkW,         0x000214F9L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExecuteHookA,  0x000214F5L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExecuteHookW,  0x000214FBL, 0, 0); */
/* DEFINE_OLEGUID(IID_INewShortcutHookA,   0x000214E1L, 0, 0); */
/* DEFINE_OLEGUID(IID_INewShortcutHookW,   0x000214F7L, 0, 0); */

DEFINE_GUID(CLSID_CUrlHistory, 0x3c374a40, 0xbae4, 0x11cf, 0xbf, 0x7d, 0x00, 0xaa, 0x00, 0x69, 0x46, 0xee);
#define SID_SUrlHistory       CLSID_CUrlHistory

DEFINE_GUID(CLSID_CURLSearchHook, 0xcfbfae00, 0x17a6, 0x11d0, 0x99, 0xcb, 0x00, 0xc0, 0x4f, 0xd6, 0x44, 0x97);

DEFINE_GUID(SID_STopLevelBrowser, 0x4C96BE40, 0x915C, 0x11CF, 0x99, 0xD3, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);
DEFINE_GUID(SID_STopWindow,       0x49e1b500, 0x4636, 0x11d3, 0x97, 0xf7, 0x00, 0xc0, 0x4f, 0x45, 0xd0, 0xb3);
DEFINE_GUID(SID_SCommDlgBrowser,  0x80f30233, 0xb7df, 0x11d2, 0xa3, 0x3b, 0x00, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

#define SID_LinkSite          IID_IShellLinkW
#define SID_SShellBrowser     IID_IShellBrowser
#define SID_SShellDesktop     CLSID_ShellDesktop
#define SID_SInternetExplorer IID_IWebBrowserApp
#define SID_SWebBrowserApp    IID_IWebBrowserApp
#define SID_SWebBrowserEventsService    IID_IWebBrowserEventsService

#define IID_IFileViewer       WINELIB_NAME_AW(IID_IFileViewer)
#define IID_IShellLink        WINELIB_NAME_AW(IID_IShellLink)
#define IID_IExtractIcon      WINELIB_NAME_AW(IID_IExtractIcon)
#define IID_IShellCopyHook    WINELIB_NAME_AW(IID_IShellCopyHook)
#define IID_IShellExecuteHook WINELIB_NAME_AW(IID_IShellExecuteHook)
#define IID_INewShortcutHook  WINELIB_NAME_AW(IID_INewShortcutHook)

DEFINE_GUID(IID_IDockingWindow,     0x012dd920L, 0x7B26, 0x11D0, 0x8C, 0xA9, 0x00, 0xA0, 0xC9, 0x2D, 0xBF, 0xE8);
DEFINE_GUID(IID_IDockingWindowSite, 0x2A342FC2L, 0x7B26, 0x11D0, 0x8C, 0xA9, 0x00, 0xA0, 0xC9, 0x2D, 0xBF, 0xE8);
DEFINE_GUID(IID_IInputObject,       0x068284FAA, 0x6A48, 0x11D0, 0x8C, 0x78, 0x00, 0xC0, 0x4F, 0xD9, 0x18, 0xB4);
DEFINE_GUID(IID_IInputObjectSite,   0x0F1DB8392, 0x7331, 0x11D0, 0x8C, 0x99, 0x00, 0xA0, 0xC9, 0x2D, 0xBF, 0xE8);

/****************************************************************************
 * the next IID's are the namespace elements of the pidls
 */
DEFINE_GUID(CLSID_NetworkPlaces, 0x208D2C60, 0x3AEA, 0x1069, 0xA2, 0xD7, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_NetworkDomain, 0x46e06680, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_NetworkServer, 0xc0542a90, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_NetworkShare, 0x54a754c0, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_MyComputer, 0x20D04FE0, 0x3AEA, 0x1069, 0xA2, 0xD8, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_Internet, 0x871C5380, 0x42A0, 0x1069, 0xA2, 0xEA, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_ShellFSFolder, 0xF3364BA0, 0x65B9, 0x11CE, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);
DEFINE_GUID(CLSID_RecycleBin, 0x645FF040, 0x5081, 0x101B, 0x9F, 0x08, 0x00, 0xAA, 0x00, 0x2F, 0x95, 0x4E);
DEFINE_GUID(CLSID_ControlPanel, 0x21EC2020, 0x3AEA, 0x1069, 0xA2, 0xDD, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_Printers, 0x2227A280, 0x3AEA, 0x1069, 0xA2, 0xDE, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_MyDocuments, 0x450d8fba, 0xad25, 0x11d0, 0x98, 0xa8, 0x08, 0x00, 0x36, 0x1b, 0x11, 0x03);
DEFINE_GUID(CLSID_FolderShortcut, 0x0AFACED1, 0xE828, 0x11D1, 0x91, 0x87, 0xB5, 0x32, 0xF1, 0xE9, 0x57, 0x5D);

DEFINE_GUID(IID_IQueryAssociations, 0xc46ca590, 0x3c3f, 0x11d2, 0xbe, 0xe6, 0x00, 0x00, 0xf8, 0x05, 0xca, 0x57);

DEFINE_GUID(CLSID_DragDropHelper, 0x4657278a, 0x411b, 0x11d2, 0x83, 0x9a, 0x00, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

DEFINE_GUID(CLSID_AutoComplete,   0x00bb2763, 0x6a77, 0x11d0, 0xa5, 0x35, 0x00, 0xc0, 0x4f, 0xd7, 0xd0, 0x62);
DEFINE_GUID(CLSID_ACLMulti,       0x00bb2765, 0x6a77, 0x11d0, 0xa5, 0x35, 0x00, 0xc0, 0x4f, 0xd7, 0xd0, 0x62);

DEFINE_GUID(CLSID_ProgressDialog, 0xf8383852, 0xfcd3, 0x11d1, 0xa6, 0xb9, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

#define PSGUID_SHELLDETAILS     {0x28636aa6, 0x953d, 0x11d2, 0xb5, 0xd6, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0}
DEFINE_GUID(FMTID_ShellDetails,  0x28636aa6, 0x953d, 0x11d2, 0xb5, 0xd6, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
#define PID_FINDDATA        0
#define PID_NETRESOURCE     1
#define PID_DESCRIPTIONID   2
#define PID_WHICHFOLDER     3
#define PID_NETWORKLOCATION 4
#define PID_COMPUTERNAME    5

/* Note: PSGUID_STORAGE defined in ntquery.h */
DEFINE_GUID(FMTID_Storage, 0xb725f130, 0x47ef, 0x101a, 0xa5, 0xf1, 0x02, 0x60, 0x8c, 0x9e, 0xeb, 0xac);
/* PID_* for FMTID_Storage defined in ntquery.h*/

#define PSGUID_DISPLACED    {0x9b174b33, 0x40ff, 0x11d2, 0xa2, 0x7e, 0x0, 0xc0, 0x4f, 0xc3, 0x8, 0x71}
DEFINE_GUID(FMTID_Displaced, 0x9b174b33, 0x40ff, 0x11d2, 0xa2, 0x7e, 0x0, 0xc0, 0x4f, 0xc3, 0x8, 0x71);
#define PID_DISPLACED_FROM 2
#define PID_DISPLACED_DATE 3

DEFINE_GUID(CLSID_CAnchorBrowsePropertyPage, 0x3050F3BB, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);
DEFINE_GUID(CLSID_CDocBrowsePropertyPage, 0x3050F3B4, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);
DEFINE_GUID(CLSID_CImageBrowsePropertyPage, 0x3050F3B3, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);

#endif /* __WINE_SHLGUID_H */

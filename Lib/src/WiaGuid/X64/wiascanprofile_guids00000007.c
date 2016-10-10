// Created file "Lib\src\WiaGuid\X64\wiascanprofile_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ScanProfileMgr, 0xcb0fc8e5, 0x686a, 0x478b, 0xa2, 0x52, 0xfd, 0xec, 0xf8, 0xe1, 0x67, 0xb7);


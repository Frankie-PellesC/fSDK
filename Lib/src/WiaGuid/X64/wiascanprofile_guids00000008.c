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

DEFINE_GUID(CLSID_ScanProfileUI, 0x19603261, 0x6059, 0x43df, 0xb9, 0xe1, 0x8b, 0x43, 0x52, 0x82, 0x5a, 0x90);


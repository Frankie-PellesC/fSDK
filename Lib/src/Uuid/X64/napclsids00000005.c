// Created file "Lib\src\Uuid\X64\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapClientManagement, 0xeb082ba1, 0xdf8a, 0x46be, 0x82, 0xf3, 0x35, 0xbf, 0x9e, 0x9b, 0xe5, 0x2f);


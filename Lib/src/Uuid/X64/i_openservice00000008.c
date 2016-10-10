// Created file "Lib\src\Uuid\X64\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_OpenServiceManager, 0x098870b6, 0x39ea, 0x480b, 0xb8, 0xb5, 0xdd, 0x01, 0x67, 0xc4, 0xdb, 0x59);


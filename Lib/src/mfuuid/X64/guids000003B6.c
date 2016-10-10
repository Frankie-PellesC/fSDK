// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETCONNECTION_DOWNLOADREQUEST, 0xb1e78245, 0x64f4, 0x4b9d, 0x8e, 0xff, 0x50, 0xe0, 0xcb, 0x15, 0x0f, 0x9d);


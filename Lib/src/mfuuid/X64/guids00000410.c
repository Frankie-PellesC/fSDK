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

DEFINE_GUID(MFPROTECTION_WMDRMV7, 0xa5fc4337, 0x7a6d, 0x4a13, 0x8b, 0x3d, 0x87, 0x80, 0x7c, 0x5d, 0xe1, 0xf8);


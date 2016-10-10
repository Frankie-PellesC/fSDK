// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFPROTECTION_WMDRMV7ForDevice, 0x4dbb8083, 0xc3f4, 0x428c, 0x89, 0x67, 0x35, 0x1f, 0x49, 0xa9, 0x5d, 0x05);


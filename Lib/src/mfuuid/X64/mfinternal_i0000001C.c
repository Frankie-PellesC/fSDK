// Created file "Lib\src\mfuuid\X64\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFAuthenticationContext, 0x0feb8e8f, 0xaa79, 0x4de8, 0xa9, 0x28, 0xd1, 0xb4, 0xde, 0x05, 0x52, 0xd5);


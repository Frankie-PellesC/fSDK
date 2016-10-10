// Created file "Lib\src\Uuid\X64\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCClientPortManagement, 0xd5df3f03, 0x4bde, 0x4417, 0xae, 0xfe, 0x71, 0x17, 0x7b, 0xda, 0xea, 0x66);


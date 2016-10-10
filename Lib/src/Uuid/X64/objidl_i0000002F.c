// Created file "Lib\src\Uuid\X64\objidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IChannelHook, 0x1008c4a0, 0x7613, 0x11cf, 0x9a, 0xf1, 0x00, 0x20, 0xaf, 0x6e, 0x72, 0xf4);


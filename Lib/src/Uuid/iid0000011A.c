// Created file "Lib\src\Uuid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISystemDebugEventFire, 0x6c736dc1, 0xab0d, 0x11d0, 0xa2, 0xad, 0x00, 0xa0, 0xc9, 0x0f, 0x27, 0xe8);


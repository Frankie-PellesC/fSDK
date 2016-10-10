// Created file "Lib\src\Uuid\X64\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDebugThreadCall64, 0xcb3fa335, 0xe979, 0x42fd, 0x9f, 0xcf, 0xa7, 0x54, 0x6a, 0x0f, 0x39, 0x05);


// Created file "Lib\src\Uuid\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DefaultDebugSessionProvider, 0x834128a2, 0x51f4, 0x11d0, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);


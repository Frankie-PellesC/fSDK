// Created file "Lib\src\Uuid\X64\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITPluggableTerminalInitialization, 0xaed6483c, 0x3304, 0x11d2, 0x86, 0xf1, 0x00, 0x60, 0x08, 0xb0, 0xe5, 0xd2);


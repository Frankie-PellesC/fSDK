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

DEFINE_GUID(IID_AsyncIDebugApplicationNodeEvents, 0xa2e3aa3b, 0xaa8d, 0x4ebf, 0x84, 0xcd, 0x64, 0x8b, 0x73, 0x7b, 0x8c, 0x13);


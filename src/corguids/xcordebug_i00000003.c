// Created file "Lib\src\corguids\xcordebug_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICorDebugMutableDataTarget, 0xa1b8a756, 0x3cb6, 0x4ccb, 0x97, 0x9f, 0x3d, 0xf9, 0x99, 0x67, 0x3a, 0x59);

DEFINE_GUID(IID_ICorDebugProcess4, 0xe930c679, 0x78af, 0x4953, 0x8a, 0xb7, 0xb0, 0xaa, 0xbf, 0x0f, 0x9f, 0x80);


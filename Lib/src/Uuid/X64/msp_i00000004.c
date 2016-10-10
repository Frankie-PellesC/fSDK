// Created file "Lib\src\Uuid\X64\msp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITPluggableTerminalEventSinkRegistration, 0xf7115709, 0xa216, 0x4957, 0xa7, 0x59, 0x06, 0x0a, 0xb3, 0x2a, 0x90, 0xd1);


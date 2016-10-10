// Created file "Lib\src\Uuid\tapi3_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITPluggableTerminalEventSink, 0x6e0887be, 0xba1a, 0x492e, 0xbd, 0x10, 0x40, 0x20, 0xec, 0x5e, 0x33, 0xe0);


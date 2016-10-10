// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSNODETYPE_HDMI_INTERFACE, 0xd1b9cc2a, 0xf519, 0x417f, 0x91, 0xc9, 0x55, 0xfa, 0x65, 0x48, 0x10, 0x01);


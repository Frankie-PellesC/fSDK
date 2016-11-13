// Created file "Lib\src\dxguid\d3d10guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_SYSTEM_COOLING_POLICY, 0x94d3a615, 0xa899, 0x4ac5, 0xae, 0x2b, 0xe4, 0xd8, 0xf6, 0x34, 0x36, 0x7f);


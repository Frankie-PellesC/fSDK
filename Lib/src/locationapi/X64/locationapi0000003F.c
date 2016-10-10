// Created file "Lib\src\locationapi\X64\locationapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_THROTTLE_POLICY, 0x57027304, 0x4af6, 0x4104, 0x92, 0x60, 0xe3, 0xd9, 0x52, 0x48, 0xfc, 0x36);


// Created file "Lib\src\dxguid\X64\d3dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LIDOPEN_POWERSTATE, 0x99ff10e7, 0x23b1, 0x4c07, 0xa9, 0xd1, 0x5c, 0x32, 0x06, 0xd7, 0x41, 0xb4);


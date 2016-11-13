// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_9ecdd80d_0e81_40d8_8903_2bf7b131ac43, 0x9ecdd80d, 0x0e81, 0x40d8, 0x89, 0x03, 0x2b, 0xf7, 0xb1, 0x31, 0xac, 0x43);


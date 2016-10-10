// Created file "Lib\src\Uuid\X64\i_ocmm"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMapMIMEToCLSID, 0xd9e89500, 0x30fa, 0x11d0, 0xb7, 0x24, 0x00, 0xaa, 0x00, 0x6c, 0x1a, 0x01);


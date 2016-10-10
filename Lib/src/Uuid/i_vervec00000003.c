// Created file "Lib\src\Uuid\i_vervec"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVersionVector, 0x4eb01410, 0xdb1a, 0x11d1, 0xba, 0x53, 0x00, 0xc0, 0x4f, 0xc2, 0x04, 0x0e);


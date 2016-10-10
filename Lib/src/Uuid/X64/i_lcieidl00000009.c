// Created file "Lib\src\Uuid\X64\i_lcieidl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILCIESerializableContainer, 0x5a3dd708, 0x20d3, 0x4c5c, 0xa4, 0x70, 0x44, 0xff, 0xbb, 0x24, 0xa7, 0x2d);


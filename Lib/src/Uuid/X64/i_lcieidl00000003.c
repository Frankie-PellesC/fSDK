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

DEFINE_GUID(IID_ILCIEComponent, 0xd2649e5e, 0xe1a3, 0x4255, 0xb7, 0x64, 0xd7, 0x53, 0x1a, 0x79, 0x40, 0x42);


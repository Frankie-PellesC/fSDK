// Created file "Lib\src\Uuid\X64\netcon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetSharingPortMappingProps, 0x24b7e9b5, 0xe38f, 0x4685, 0x85, 0x1b, 0x00, 0x89, 0x2c, 0xf5, 0xf9, 0x40);


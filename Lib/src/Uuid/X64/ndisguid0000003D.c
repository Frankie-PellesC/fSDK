// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_GEN_PCI_DEVICE_CUSTOM_PROPERTIES, 0xaa39f5ab, 0xe260, 0x4d01, 0x82, 0xb0, 0xb7, 0x37, 0xc8, 0x80, 0xea, 0x05);


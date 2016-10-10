// Created file "Lib\src\Uuid\X64\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_ACPI_PORT_RANGES_INTERFACE_STANDARD, 0xf14f609b, 0xcbbd, 0x4957, 0xa6, 0x74, 0xbc, 0x00, 0x21, 0x3f, 0x1c, 0x97);


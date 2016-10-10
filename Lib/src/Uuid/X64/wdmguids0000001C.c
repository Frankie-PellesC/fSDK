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

DEFINE_GUID(GUID_ACPI_CMOS_INTERFACE_STANDARD, 0x3a8d0384, 0x6505, 0x40ca, 0xbc, 0x39, 0x56, 0xc1, 0x5f, 0x8c, 0x5f, 0xed);


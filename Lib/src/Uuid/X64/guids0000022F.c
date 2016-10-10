// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_PROPERTY_ATTRIBUTE_VARTYPE, 0x5d9da160, 0x74ae, 0x43cc, 0x85, 0xa9, 0xfe, 0x55, 0x5a, 0x80, 0x79, 0x8e);


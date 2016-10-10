// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_PROPERTY_OBJECT_ENUMERATION_PARENT_ID, 0xb7474e91, 0xe7f8, 0x4ad9, 0xb4, 0x00, 0xad, 0x1a, 0x4b, 0x58, 0xee, 0xec);


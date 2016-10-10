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

DEFINE_GUID(WPD_PROPERTY_OBJECT_MANAGEMENT_CREATION_PROPERTIES, 0xef1e43dd, 0xa9ed, 0x4341, 0x8b, 0xcc, 0x18, 0x61, 0x92, 0xae, 0xa0, 0x89);


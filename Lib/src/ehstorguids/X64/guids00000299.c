// Created file "Lib\src\ehstorguids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_COMMAND_OBJECT_PROPERTIES_GET_SUPPORTED, 0x9e5582e4, 0x0814, 0x44e6, 0x98, 0x1a, 0xb2, 0x99, 0x8d, 0x58, 0x38, 0x04);


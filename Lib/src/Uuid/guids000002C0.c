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

DEFINE_GUID(WPD_COMMAND_OBJECT_RESOURCES_REVERT, 0xb3a2b22d, 0xa595, 0x4108, 0xbe, 0x0a, 0xfc, 0x3c, 0x96, 0x5f, 0x3d, 0x4a);


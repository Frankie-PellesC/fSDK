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

DEFINE_GUID(WPD_RESOURCE_ATTRIBUTE_CAN_WRITE, 0x1eb6f604, 0x9278, 0x429f, 0x93, 0xcc, 0x5b, 0xb8, 0xc0, 0x66, 0x56, 0xb6);


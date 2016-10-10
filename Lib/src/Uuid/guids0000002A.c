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

DEFINE_GUID(GUID_POWERBUTTON_ACTION_FLAGS, 0x857e7fac, 0x034b, 0x4704, 0xab, 0xb1, 0xbc, 0xa5, 0x4a, 0xa3, 0x14, 0x78);


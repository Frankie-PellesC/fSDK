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

DEFINE_GUID(WPD_CATEGORY_SERVICE_METHODS, 0x2d521ca8, 0xc1b0, 0x4268, 0xa3, 0x42, 0xcf, 0x19, 0x32, 0x15, 0x69, 0xbc);


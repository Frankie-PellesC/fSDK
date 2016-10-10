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

DEFINE_GUID(ENHANCED_STORAGE_PROPERTY_IS_AUTHENTICATION_SILO, 0x91248166, 0xb832, 0x4ad4, 0xba, 0xa4, 0x7c, 0xa0, 0xb6, 0xb2, 0x79, 0x8c);


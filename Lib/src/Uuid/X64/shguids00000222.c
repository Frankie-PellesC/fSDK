// Created file "Lib\src\Uuid\X64\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPropertyDescriptionRelatedPropertyInfo, 0x507393f4, 0x2a3d, 0x4a60, 0xb5, 0x9e, 0xd9, 0xc7, 0x57, 0x16, 0xc2, 0xdd);


// Created file "Lib\src\Uuid\X64\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumOpenServiceActivityCategory, 0x33627a56, 0x8c9a, 0x4430, 0x8f, 0xd1, 0xb5, 0xf5, 0xc7, 0x71, 0xaf, 0xb6);


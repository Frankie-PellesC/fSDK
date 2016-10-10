// Created file "Lib\src\Uuid\i_openservicep"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOpenServiceActivityInternal, 0xd939737b, 0x6370, 0x46ed, 0x96, 0x08, 0x2e, 0xa1, 0xba, 0x64, 0x3f, 0xb8);


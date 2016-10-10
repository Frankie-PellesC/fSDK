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

DEFINE_GUID(IID_IOpenServiceManagerInternal, 0xc987a3fc, 0xa6e7, 0x4ed2, 0xae, 0xd8, 0xa0, 0x8c, 0x3e, 0x1c, 0xc6, 0xde);


// Created file "Lib\src\Uuid\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITIMEFactory, 0xcd51e446, 0x3006, 0x434f, 0x90, 0xe2, 0xe3, 0x7e, 0x8f, 0xb8, 0xca, 0x8f);


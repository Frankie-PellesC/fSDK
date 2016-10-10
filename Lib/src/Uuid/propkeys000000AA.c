// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Contact_BusinessTelephone, 0x6a15e5a0, 0x0a1e, 0x4cd7, 0xbb, 0x8c, 0xd2, 0xf1, 0xb0, 0xc9, 0x29, 0xbc);


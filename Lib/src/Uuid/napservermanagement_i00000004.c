// Created file "Lib\src\Uuid\napservermanagement_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapServerManagement, 0x9de543e7, 0x0f23, 0x47e0, 0xa8, 0xbc, 0x97, 0x1a, 0x89, 0x4f, 0x86, 0xd4);


// Created file "Lib\src\ADSIid\X64\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_LDAPConnectionObject, 0x7da2a9c4, 0x0c46, 0x43bd, 0xb0, 0x4e, 0xd9, 0x2b, 0x1b, 0xe2, 0x7c, 0x45);


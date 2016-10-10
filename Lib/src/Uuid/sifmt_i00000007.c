// Created file "Lib\src\Uuid\sifmt_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FMTID_DiscardableInformation, 0xd725ebb0, 0xc9b8, 0x11d1, 0x89, 0xbc, 0x00, 0x00, 0xf8, 0x04, 0xb0, 0x57);


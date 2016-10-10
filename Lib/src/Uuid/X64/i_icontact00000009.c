// Created file "Lib\src\Uuid\X64\i_icontact"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_Contact, 0x61b68808, 0x8eee, 0x4fd1, 0xac, 0xb8, 0x3d, 0x80, 0x4c, 0x8d, 0xb0, 0x56);


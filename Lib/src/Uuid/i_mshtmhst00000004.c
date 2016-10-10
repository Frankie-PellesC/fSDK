// Created file "Lib\src\Uuid\i_mshtmhst"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_HostDialogHelper, 0x429af92c, 0xa51f, 0x11d2, 0x86, 0x1e, 0x00, 0xc0, 0x4f, 0xa3, 0x5c, 0x89);


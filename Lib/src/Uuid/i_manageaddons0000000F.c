// Created file "Lib\src\Uuid\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_LegacyExtensionEnumerator, 0x89d337c0, 0x6a3c, 0x4966, 0xa0, 0x58, 0x0f, 0x25, 0x62, 0x82, 0x47, 0x1c);


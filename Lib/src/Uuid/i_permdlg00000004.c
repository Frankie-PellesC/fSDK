// Created file "Lib\src\Uuid\i_permdlg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_JavaRuntimeConfiguration, 0x004ce610, 0xccd1, 0x11d0, 0xa9, 0xba, 0x00, 0xa0, 0xc9, 0x08, 0xdb, 0x5e);


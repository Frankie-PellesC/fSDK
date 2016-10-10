// Created file "Lib\src\Uuid\X64\trkadm_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TrkRestoreParser, 0x755939e4, 0xe381, 0x11d0, 0xb1, 0xc5, 0x00, 0xc0, 0x4f, 0xb9, 0x38, 0x6d);


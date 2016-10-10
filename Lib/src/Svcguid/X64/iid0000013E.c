// Created file "Lib\src\Svcguid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ComPlusVbDebugLib, 0xa7e931d8, 0x6918, 0x11d2, 0x9f, 0xed, 0x00, 0xc0, 0x4f, 0x8e, 0xf9, 0x34);


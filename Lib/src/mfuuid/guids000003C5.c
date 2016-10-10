// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETFEEDBACK_BUFFERING, 0x7f9304c8, 0xb40c, 0x4df0, 0x9b, 0xe1, 0xcc, 0x0a, 0xe0, 0xed, 0x36, 0xcb);


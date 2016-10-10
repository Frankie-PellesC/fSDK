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

DEFINE_GUID(PKEY_MFNETFEEDBACK_STREAM_ID, 0x3c9f838a, 0x80c2, 0x4e3e, 0x8e, 0x8b, 0xab, 0x0d, 0x12, 0xf4, 0x54, 0x1d);


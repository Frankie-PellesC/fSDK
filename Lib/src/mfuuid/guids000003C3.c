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

DEFINE_GUID(PKEY_MFNETRTPSTREAM_FEEDBACKINTERVAL, 0xee0b2273, 0xc326, 0x4ced, 0xbc, 0x31, 0xf9, 0x2f, 0x0a, 0xbb, 0x3e, 0xa8);


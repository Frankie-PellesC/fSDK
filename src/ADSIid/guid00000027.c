// Created file "Lib\src\ADSIid\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_ALLOW_SYSTEM_REQUIRED, 0xa4b195f5, 0x8225, 0x47d8, 0x80, 0x12, 0x9d, 0x41, 0x36, 0x97, 0x86, 0xe2);


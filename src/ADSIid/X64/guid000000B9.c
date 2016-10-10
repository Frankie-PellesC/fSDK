// Created file "Lib\src\ADSIid\X64\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IADsUmiHelperPrivate, 0x4fe243f0, 0xad89, 0x4cbc, 0x9b, 0x14, 0x48, 0x61, 0x26, 0x44, 0x6a, 0xe0);


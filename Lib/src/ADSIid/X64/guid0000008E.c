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

DEFINE_GUID(IID_IADsPrintJobOperations, 0x9a52db30, 0x1ecf, 0x11cf, 0xa9, 0x88, 0x00, 0xaa, 0x00, 0x6b, 0xc1, 0x49);


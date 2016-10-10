// Created file "Lib\src\Svcguid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITrustEvaluationContextProvider, 0x9211a27c, 0x7b10, 0x11d1, 0x86, 0x33, 0x00, 0x60, 0x08, 0x9f, 0x60, 0x07);


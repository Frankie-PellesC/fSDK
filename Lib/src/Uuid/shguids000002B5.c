// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWebWizardHost, 0x18bcc359, 0x4990, 0x4bfb, 0xb9, 0x51, 0x3c, 0x83, 0x70, 0x2b, 0xe5, 0xf9);


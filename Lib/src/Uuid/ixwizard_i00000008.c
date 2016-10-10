// Created file "Lib\src\Uuid\ixwizard_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXWizardPageReport, 0x777ba82a, 0x2498, 0x4875, 0x93, 0x3a, 0x30, 0x67, 0xde, 0x88, 0x30, 0x70);


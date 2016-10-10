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

DEFINE_GUID(IID_IHomeGroupWizardUpdate, 0xb2dcc4b3, 0x35b9, 0x4bee, 0xbd, 0xd2, 0xc3, 0x19, 0xb1, 0x0f, 0x5e, 0xd2);


// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_SAM_AccountIsDisabledForLogonUI, 0x8bf6b9f6, 0xb4f5, 0x482f, 0xa2, 0xc2, 0x44, 0xbd, 0xad, 0x2f, 0xcf, 0xa9);


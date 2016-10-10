// Created file "Lib\src\Uuid\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_CONDITION_SEC_ENCRYPT_ALGORITHM, 0x0d306ef0, 0xe974, 0x4f74, 0xb5, 0xc7, 0x59, 0x1b, 0x0d, 0xa7, 0xd5, 0x62);


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

DEFINE_GUID(FWPM_CONDITION_ALE_REMOTE_USER_ID, 0xf63073b7, 0x0189, 0x4ab0, 0x95, 0xa4, 0x61, 0x23, 0xcb, 0xfa, 0xb8, 0x62);


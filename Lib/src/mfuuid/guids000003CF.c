// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETCHFAC_LOCAL_IP_ADDRESS, 0xb0e6b3e1, 0x963c, 0x4863, 0x8f, 0x94, 0x5d, 0xcb, 0xbc, 0x3f, 0xa2, 0xf0);


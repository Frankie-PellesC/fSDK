// Created file "Lib\src\Uuid\i_lcieidl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILCIEShowInternetSecurity, 0x4db066e1, 0x93a3, 0x496f, 0x9a, 0xd8, 0xd8, 0x6b, 0x4a, 0xae, 0xcd, 0x68);


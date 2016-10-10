// Created file "Lib\src\Uuid\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAESCheck, 0x8aca8016, 0xb08c, 0x4c5a, 0x99, 0xca, 0xc2, 0x44, 0x88, 0x38, 0x58, 0x28);


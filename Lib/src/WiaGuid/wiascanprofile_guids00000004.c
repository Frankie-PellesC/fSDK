// Created file "Lib\src\WiaGuid\wiascanprofile_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScanProfile, 0xd68a6c07, 0x9ff8, 0x47d1, 0x9a, 0x2a, 0x42, 0x9d, 0x28, 0xfb, 0xc6, 0xa4);


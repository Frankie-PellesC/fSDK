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

DEFINE_GUID(IID_IScanProfileMgr, 0x34eaae27, 0x2d89, 0x4278, 0x84, 0xef, 0x61, 0xde, 0xfa, 0x32, 0x3f, 0xc1);


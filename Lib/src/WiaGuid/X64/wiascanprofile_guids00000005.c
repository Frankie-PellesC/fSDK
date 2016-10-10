// Created file "Lib\src\WiaGuid\X64\wiascanprofile_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScanProfileUI, 0xb67cddb7, 0x2b20, 0x473e, 0x8d, 0x6c, 0x3f, 0x1b, 0xd2, 0x02, 0xe7, 0x8d);


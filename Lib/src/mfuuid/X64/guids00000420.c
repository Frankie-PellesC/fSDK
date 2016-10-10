// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFFORMATSPECIFIER_MPEGFormatHeader, 0xe05f9671, 0x4123, 0x4734, 0xab, 0x76, 0x09, 0xd6, 0xae, 0x3d, 0xdb, 0xc1);


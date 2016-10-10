// Created file "Lib\src\mfuuid\X64\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFDRMNetHelper, 0x3d1ff0ea, 0x679a, 0x4190, 0x8d, 0x46, 0x7f, 0xa6, 0x9e, 0x8c, 0x7e, 0x15);


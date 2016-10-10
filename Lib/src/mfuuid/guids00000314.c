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

DEFINE_GUID(MF_SCRIPTTRANSFER_SERVICE, 0x4fa0c7f4, 0x59a2, 0x4e0d, 0xa5, 0x02, 0x2e, 0xfb, 0x93, 0xbd, 0x09, 0xff);


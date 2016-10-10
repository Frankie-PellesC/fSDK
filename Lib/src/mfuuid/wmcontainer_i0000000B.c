// Created file "Lib\src\mfuuid\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFASFStreamSelector, 0xd01bad4a, 0x4fa0, 0x4a60, 0x93, 0x49, 0xc2, 0x7e, 0x62, 0xda, 0x9d, 0x41);


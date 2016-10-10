// Created file "Lib\src\mfuuid\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFSource, 0x00f5e896, 0x8813, 0x44e3, 0x87, 0x89, 0x7e, 0x52, 0x0e, 0x0d, 0xe8, 0x73);


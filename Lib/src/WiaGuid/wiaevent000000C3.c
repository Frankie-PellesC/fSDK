// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WiaImgFmt_AVI, 0x32f8ca14, 0x087c, 0x4908, 0xb7, 0xc4, 0x67, 0x57, 0xfe, 0x7e, 0x90, 0xab);


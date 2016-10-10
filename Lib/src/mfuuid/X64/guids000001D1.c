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

DEFINE_GUID(MFNETSOURCE_MAXBUFFERTIMEMS, 0x408b24e6, 0x4038, 0x4401, 0xb5, 0xb2, 0xfe, 0x70, 0x1a, 0x9e, 0xbf, 0x10);


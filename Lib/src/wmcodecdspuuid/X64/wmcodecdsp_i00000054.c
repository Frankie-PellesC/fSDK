// Created file "Lib\src\wmcodecdspuuid\X64\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CVodafoneAACCCDecMediaObject, 0x7e76bf7f, 0xc993, 0x4e26, 0x8f, 0xab, 0x47, 0x0a, 0x70, 0xc0, 0xd5, 0x9c);


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

DEFINE_GUID(CLSID_CNokiaAACCCDecMediaObject, 0xeabf7a6f, 0xccba, 0x4d60, 0x86, 0x20, 0xb1, 0x52, 0xcc, 0x97, 0x72, 0x63);


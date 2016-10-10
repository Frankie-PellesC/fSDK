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

DEFINE_GUID(MFNETCONNECTION_SHARED_LOCK, 0x66fbe3b4, 0x82e8, 0x49c3, 0x9a, 0x38, 0x80, 0xbf, 0x2b, 0xc4, 0x4f, 0x78);


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

DEFINE_GUID(MFNETCONNECTION_SSLCLIENTCERTINFO, 0x1575a7f2, 0x953a, 0x44c5, 0x84, 0x9c, 0x93, 0x21, 0x2e, 0xc7, 0xc1, 0xad);


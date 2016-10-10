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

DEFINE_GUID(GUID_DEVINTERFACE_HIDDEN_VOLUME, 0x7f108a28, 0x9833, 0x4b3b, 0xb7, 0x80, 0x2c, 0x6b, 0x5f, 0xa5, 0xc0, 0x62);


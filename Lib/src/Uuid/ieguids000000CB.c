// Created file "Lib\src\Uuid\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CATID_SafeForInitializing, 0x7dd95802, 0x9882, 0x11cf, 0x9f, 0xa9, 0x00, 0xaa, 0x00, 0x6c, 0x42, 0xc4);


// Created file "Lib\src\Uuid\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeedEnclosure, 0x361c26f7, 0x90a4, 0x4e67, 0xae, 0x09, 0x3a, 0x36, 0xa5, 0x46, 0x43, 0x6a);


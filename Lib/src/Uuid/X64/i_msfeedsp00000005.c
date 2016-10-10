// Created file "Lib\src\Uuid\X64\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWebSlicesManager, 0xd318fb7e, 0xff28, 0x497e, 0xa5, 0x66, 0x9d, 0xf0, 0x9e, 0x6c, 0x50, 0x3b);


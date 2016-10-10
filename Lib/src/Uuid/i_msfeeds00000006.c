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

DEFINE_GUID(IID_IXFeedFolderEvents, 0x7964b769, 0x234a, 0x4bb1, 0xa5, 0xf4, 0x90, 0x45, 0x4c, 0x8a, 0xd0, 0x7e);


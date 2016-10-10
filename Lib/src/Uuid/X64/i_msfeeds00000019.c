// Created file "Lib\src\Uuid\X64\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_FeedFolderWatcher, 0x281001ed, 0x7765, 0x4cb0, 0x84, 0xaf, 0xe9, 0xb3, 0x87, 0xaf, 0x01, 0xff);


// Created file "Lib\src\Uuid\i_dlmgridl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb, 0x80, 0x00, 0x10, 0x4b, 0x35, 0xe7, 0xf9);


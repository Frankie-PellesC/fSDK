// Created file "Lib\src\Uuid\X64\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITIMEPlayList, 0xe9b75b62, 0xdd97, 0x4b19, 0x8f, 0xd9, 0x96, 0x46, 0x29, 0x29, 0x52, 0xe0);


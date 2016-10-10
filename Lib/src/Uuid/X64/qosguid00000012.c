// Created file "Lib\src\Uuid\X64\qosguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_QOS_ENABLE_WINDOW_ADJUSTMENT, 0xaa966725, 0xd3e9, 0x4c55, 0xb3, 0x35, 0x2a, 0x00, 0x27, 0x9a, 0x1e, 0x64);


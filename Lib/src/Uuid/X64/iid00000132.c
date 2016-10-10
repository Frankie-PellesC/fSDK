// Created file "Lib\src\Uuid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_EventObjectChange2, 0xbb07bacd, 0xcd56, 0x4e63, 0xa8, 0xff, 0xcb, 0xf0, 0x35, 0x5f, 0xb9, 0xf4);


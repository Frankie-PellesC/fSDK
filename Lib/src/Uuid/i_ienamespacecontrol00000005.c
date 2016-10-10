// Created file "Lib\src\Uuid\i_ienamespacecontrol"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INSCWinEventHandler, 0xea5f2d61, 0xe008, 0x11cf, 0x99, 0xcb, 0x00, 0xc0, 0x4f, 0xd6, 0x44, 0x97);


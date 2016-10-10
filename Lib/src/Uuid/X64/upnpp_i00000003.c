// Created file "Lib\src\Uuid\X64\upnpp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPPrivateCallbackHelper, 0x8dcc8327, 0xdbe9, 0x48e6, 0x84, 0x6c, 0x33, 0x72, 0x58, 0x65, 0xd5, 0x0c);


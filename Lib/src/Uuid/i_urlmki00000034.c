// Created file "Lib\src\Uuid\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWrappedProtocol, 0x53c84785, 0x8425, 0x4dc5, 0x97, 0x1b, 0xe5, 0x8d, 0x9c, 0x19, 0xf9, 0xb6);


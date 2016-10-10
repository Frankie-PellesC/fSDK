// Created file "Lib\src\Uuid\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IArbiterBroker, 0xedb9ef13, 0x045c, 0x4c0a, 0x80, 0x8e, 0x32, 0x94, 0xc5, 0x97, 0x03, 0xb4);


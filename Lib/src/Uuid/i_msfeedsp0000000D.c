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

DEFINE_GUID(IID_ICredentialBroker, 0x2e3bd64b, 0x6a82, 0x4da0, 0xb4, 0x9e, 0x92, 0xa8, 0xb4, 0xbd, 0x59, 0xf4);


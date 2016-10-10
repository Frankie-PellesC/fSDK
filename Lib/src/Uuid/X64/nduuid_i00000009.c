// Created file "Lib\src\Uuid\X64\nduuid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetworkDiagnostics, 0xa92dfff7, 0x67ca, 0x439c, 0xbe, 0x88, 0x27, 0xb4, 0x57, 0x7f, 0xa5, 0x7e);


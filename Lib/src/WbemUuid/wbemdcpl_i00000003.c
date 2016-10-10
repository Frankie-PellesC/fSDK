// Created file "Lib\src\WbemUuid\wbemdcpl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWbemDecoupledEventSink, 0xcd94ebf2, 0xe622, 0x11d2, 0x9c, 0xb3, 0x00, 0x10, 0x5a, 0x1f, 0x48, 0x01);

DEFINE_GUID(LIBID_PassiveSink, 0xe002eeef, 0xe6ea, 0x11d2, 0x9c, 0xb3, 0x00, 0x10, 0x5a, 0x1f, 0x48, 0x01);

DEFINE_GUID(CLSID_PseudoSink, 0xe002e4f0, 0xe6ea, 0x11d2, 0x9c, 0xb3, 0x00, 0x10, 0x5a, 0x1f, 0x48, 0x01);


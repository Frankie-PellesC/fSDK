// Created file "Lib\src\Uuid\X64\i_ienamespacecontrol"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INamespaceProxy, 0xcf1609ec, 0xfa4b, 0x4818, 0xab, 0x01, 0x55, 0x64, 0x33, 0x67, 0xe6, 0x6d);


// Created file "Lib\src\Uuid\X64\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MailProtocolADEntry, 0x61a5d6f3, 0xc131, 0x4c35, 0xbf, 0x40, 0x90, 0xa5, 0x0f, 0x21, 0x41, 0x22);


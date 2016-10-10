// Created file "Lib\src\Uuid\X64\napenforcementclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapEnforcementClientConnection2, 0xbd244906, 0x70dd, 0x4690, 0xbe, 0xea, 0x64, 0x86, 0x53, 0x39, 0x35, 0x00);


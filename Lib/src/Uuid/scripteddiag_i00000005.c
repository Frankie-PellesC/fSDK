// Created file "Lib\src\Uuid\scripteddiag_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScriptedDiagnosticInformation, 0x2db48474, 0xd18b, 0x4315, 0xb5, 0x52, 0xdc, 0x6c, 0xf5, 0xf6, 0x51, 0xd5);


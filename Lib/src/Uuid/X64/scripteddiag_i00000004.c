// Created file "Lib\src\Uuid\X64\scripteddiag_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScriptedDiagnosticClient, 0x3e905a60, 0xe7b1, 0x466c, 0x88, 0x78, 0xfd, 0x06, 0xc6, 0x68, 0x33, 0x6a);


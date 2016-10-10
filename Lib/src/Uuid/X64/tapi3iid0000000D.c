// Created file "Lib\src\Uuid\X64\tapi3iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_FileRecordingTerminal, 0x521f3d06, 0xc3d0, 0x4511, 0x86, 0x17, 0x86, 0xb9, 0xa7, 0x83, 0xda, 0x77);


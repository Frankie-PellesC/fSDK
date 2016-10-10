// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFNETLISTENER_RECEIVERREPORTSPLITTER, 0xf041231f, 0x0b59, 0x4450, 0x96, 0x93, 0xf1, 0x2e, 0x34, 0x67, 0xdc, 0xe0);


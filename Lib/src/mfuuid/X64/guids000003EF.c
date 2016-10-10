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

DEFINE_GUID(MFNETLISTENER_UNPROTECTED_PMPSERVERCONTEXT, 0x7cc6df62, 0xbd09, 0x42f6, 0x87, 0x23, 0xcb, 0x99, 0xd3, 0x0e, 0xbd, 0x99);


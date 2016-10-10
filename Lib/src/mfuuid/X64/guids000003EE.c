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

DEFINE_GUID(MFNETLISTENER_PMPSERVERCONTEXT, 0x35d27ed3, 0xc3b3, 0x4339, 0xa7, 0xbf, 0x3a, 0x84, 0x47, 0x9d, 0xfa, 0xed);


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

DEFINE_GUID(PKEY_MFNETFEEDBACK_BUFFERSIZE_MS, 0x3db80b90, 0xcad5, 0x43d0, 0x8a, 0x6f, 0x15, 0x39, 0x97, 0xa0, 0x60, 0x79);


// Created file "Lib\src\mfuuid\X64\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFNetSinkControlConnection, 0x20a32133, 0x518c, 0x422a, 0xa9, 0x5a, 0x69, 0x1f, 0x97, 0x72, 0xc3, 0xae);


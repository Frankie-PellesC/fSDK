// Created file "Lib\src\mfuuid\X64\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDemuxRender, 0x8f7c48e9, 0xe418, 0x456f, 0x92, 0x65, 0xa9, 0x22, 0x13, 0x5b, 0x0d, 0x49);


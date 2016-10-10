// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_SEQUENCER_NODE_OFFSET, 0x3d10d317, 0x6cad, 0x44c3, 0x91, 0xa5, 0x1a, 0x9a, 0xbb, 0x04, 0x64, 0xe9);


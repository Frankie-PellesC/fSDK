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

DEFINE_GUID(MF_TOPOLOGY_ENABLE_TRANSCODE_BRANCH_LOADER, 0xf297151b, 0x1410, 0x4936, 0xa1, 0x11, 0x6d, 0x10, 0x3a, 0x46, 0x1f, 0x34);


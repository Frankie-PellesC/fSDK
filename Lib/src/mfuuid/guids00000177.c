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

DEFINE_GUID(MF_TOPOLOGY_PLAYBACK_FRAMERATE, 0xc164737a, 0xc2b1, 0x4553, 0x83, 0xbb, 0x5a, 0x52, 0x60, 0x72, 0x44, 0x8f);


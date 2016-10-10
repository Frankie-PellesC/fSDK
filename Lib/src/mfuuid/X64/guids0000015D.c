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

DEFINE_GUID(MFT_FIELDOFUSE_UNLOCK_Attribute, 0x8ec2e9fd, 0x9148, 0x410d, 0x83, 0x1e, 0x70, 0x24, 0x39, 0x46, 0x1a, 0x8e);


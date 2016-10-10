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

DEFINE_GUID(MFPROTECTIONATTRIBUTE_HDCP_SRM, 0x6f302107, 0x3477, 0x4468, 0x8a, 0x08, 0xee, 0xf9, 0xdb, 0x10, 0xe2, 0x0f);


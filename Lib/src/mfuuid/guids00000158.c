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

DEFINE_GUID(MFT_CONNECTED_TO_HW_STREAM, 0x34e6e728, 0x06d6, 0x4491, 0xa5, 0x53, 0x47, 0x95, 0x65, 0x0d, 0xb9, 0x12);


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

DEFINE_GUID(GUID_COUNTER_ASFMEDIASINK, 0xa13c2719, 0x0ebe, 0x42a7, 0x97, 0x74, 0x7b, 0xa9, 0xe0, 0x89, 0x3d, 0x0d);


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

DEFINE_GUID(MFNETSINK_STATISTICS_SERVICE, 0xf0fcbd7d, 0x9bd4, 0x4fc3, 0x82, 0x05, 0x27, 0x00, 0x0e, 0xfe, 0x77, 0x8e);


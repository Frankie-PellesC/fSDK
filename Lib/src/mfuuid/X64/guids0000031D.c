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

DEFINE_GUID(MFAUDIORENDERSINK_STATISTICS_SERVICE, 0xa942dcb3, 0x091c, 0x47f7, 0x9d, 0x1b, 0x49, 0x6d, 0x70, 0xb9, 0x3d, 0x90);


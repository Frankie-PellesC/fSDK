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

DEFINE_GUID(MSBBUILDER_LOGGING_URL, 0xd8140cb5, 0xaa99, 0x466c, 0xa6, 0x2a, 0xae, 0x9f, 0x3d, 0x8e, 0x72, 0xef);


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

DEFINE_GUID(MF_EVENT_START_PRESENTATION_TIME, 0x5ad914d0, 0x9b45, 0x4a8d, 0xa2, 0xc0, 0x81, 0xd1, 0xe5, 0x0b, 0xfb, 0x07);


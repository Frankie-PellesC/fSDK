// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SID_SContainerDispatch, 0xb722be00, 0x4e68, 0x101b, 0xa2, 0xbc, 0x00, 0xaa, 0x00, 0x40, 0x47, 0x70);


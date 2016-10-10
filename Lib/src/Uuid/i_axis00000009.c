// Created file "Lib\src\Uuid\i_axis"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_AxISService, 0xf963d9e1, 0x7ac7, 0x4131, 0xa6, 0xd0, 0x31, 0xaa, 0xe7, 0x9b, 0xd5, 0x86);


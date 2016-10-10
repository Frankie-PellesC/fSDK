// Created file "Lib\src\Uuid\X64\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITIMEMediaPlayerNetwork, 0xb9987fca, 0x7fbb, 0x4015, 0xbd, 0x3d, 0x74, 0x18, 0x60, 0x55, 0x14, 0xda);


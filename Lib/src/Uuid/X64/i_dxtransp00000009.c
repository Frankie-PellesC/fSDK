// Created file "Lib\src\Uuid\X64\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTFilterBehaviorSite, 0x909b23c2, 0x9018, 0x499f, 0xa8, 0x6d, 0x4e, 0x7d, 0xa9, 0x37, 0xe9, 0x31);


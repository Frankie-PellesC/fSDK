// Created file "Lib\src\Uuid\X64\napcommon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapComponentConfig3, 0x9c4a8101, 0x8cfe, 0x4332, 0x87, 0x6e, 0xc4, 0xa4, 0x9d, 0x1d, 0x3f, 0x77);


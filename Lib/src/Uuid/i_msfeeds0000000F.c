// Created file "Lib\src\Uuid\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeedsEnum, 0xe3cd0028, 0x2eed, 0x4c60, 0x8f, 0xae, 0xa3, 0x22, 0x53, 0x09, 0xa8, 0x36);


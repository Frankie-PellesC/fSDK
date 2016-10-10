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

DEFINE_GUID(IID_ITIMEPlayItem2, 0x4262cd38, 0x6bdc, 0x40a4, 0xbc, 0x50, 0x4c, 0xc5, 0x03, 0x66, 0xe7, 0x02);


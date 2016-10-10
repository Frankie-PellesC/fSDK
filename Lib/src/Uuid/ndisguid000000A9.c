// Created file "Lib\src\Uuid\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_STATUS_MEDIA_SPECIFIC_INDICATION_EX, 0xaaacfca7, 0x954a, 0x4632, 0xa1, 0x6e, 0xa8, 0xa6, 0x37, 0x93, 0xa9, 0xe5);


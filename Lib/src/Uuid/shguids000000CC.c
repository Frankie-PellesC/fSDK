// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FOLDERID_Documents, 0xfdd39ad0, 0x238f, 0x46af, 0xad, 0xb4, 0x6c, 0x85, 0x48, 0x03, 0x69, 0xc7);


// Created file "Lib\src\Uuid\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITIMEDVDPlayerObject, 0x3af7ab68, 0x4f29, 0x462c, 0xaa, 0x6e, 0x58, 0x72, 0x44, 0x88, 0x99, 0xe3);


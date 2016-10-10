// Created file "Lib\src\Uuid\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumPluggableTerminalClassInfo, 0x4567450c, 0xdbee, 0x4e3f, 0xaa, 0xf5, 0x37, 0xbf, 0x9e, 0xbf, 0x5e, 0x29);


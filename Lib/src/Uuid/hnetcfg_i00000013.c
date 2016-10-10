// Created file "Lib\src\Uuid\hnetcfg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumHNetFirewalledConnections, 0x85d18b78, 0x3032, 0x11d4, 0x93, 0x48, 0x00, 0xc0, 0x4f, 0x8e, 0xeb, 0x71);


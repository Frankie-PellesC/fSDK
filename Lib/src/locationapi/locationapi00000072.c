// Created file "Lib\src\locationapi\locationapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PPM_IDLESTATE_CHANGE_GUID, 0x4838fe4f, 0xf71c, 0x4e51, 0x9e, 0xcc, 0x84, 0x30, 0xa7, 0xac, 0x4c, 0x6c);


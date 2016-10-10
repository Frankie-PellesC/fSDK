// Created file "Lib\src\Uuid\X64\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FOLDERID_ImplicitAppShortcuts, 0xbcb5256f, 0x79f6, 0x4cee, 0xb7, 0x25, 0xdc, 0x34, 0xe4, 0x02, 0xfd, 0x46);


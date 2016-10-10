// Created file "Lib\src\Uuid\uiribbon_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(UI_PKEY_FontProperties_Bold, 0x0000012f, 0x7363, 0x696e, 0x84, 0x41, 0x79, 0x8a, 0xcf, 0x5a, 0xeb, 0xb7);


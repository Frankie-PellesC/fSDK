// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_PropList_NonPersonal, 0x49d1091f, 0x082e, 0x493f, 0xb2, 0x3f, 0xd2, 0x30, 0x8a, 0xa9, 0x66, 0x8c);


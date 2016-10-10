// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Sync_CopyIn, 0x328d8b21, 0x7729, 0x4bfc, 0x95, 0x4c, 0x90, 0x2b, 0x32, 0x9d, 0x56, 0xb0);


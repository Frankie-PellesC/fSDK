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

DEFINE_GUID(GUID_LIDCLOSE_ACTION_FLAGS, 0x97e969ac, 0x0d6c, 0x4d08, 0x92, 0x7c, 0xd7, 0xbd, 0x7a, 0xd7, 0x85, 0x7b);


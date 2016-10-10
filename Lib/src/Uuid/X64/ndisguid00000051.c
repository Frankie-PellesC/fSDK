// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_RECEIVE_FILTER_CURRENT_CAPABILITIES, 0x4054e80f, 0x2bc1, 0x4ccc, 0xb0, 0x33, 0x4a, 0xbc, 0x0c, 0x4a, 0x1e, 0x8c);


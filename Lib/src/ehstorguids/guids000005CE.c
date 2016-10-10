// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Task_CompletionStatus, 0x084d8a0a, 0xe6d5, 0x40de, 0xbf, 0x1f, 0xc8, 0x82, 0x0e, 0x7c, 0x87, 0x7c);


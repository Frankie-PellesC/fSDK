// Created file "Lib\src\ehstorguids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_RecordedTV_StationName, 0x1b5439e7, 0xeba1, 0x4af8, 0xbd, 0xd7, 0x7a, 0xf1, 0xd4, 0x54, 0x94, 0x93);


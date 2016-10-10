// Created file "Lib\src\Uuid\i_deletebrowsinghistory"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDeleteBrowsingHistory, 0xcf38ed4b, 0x2be7, 0x4461, 0x8b, 0x5e, 0x9a, 0x46, 0x6d, 0xc8, 0x2a, 0xe3);


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

DEFINE_GUID(CLSID_HgUpdateMergeHookPage, 0x009f3b45, 0x8a6b, 0x4360, 0xb9, 0x97, 0xb2, 0xa0, 0x09, 0xa1, 0x64, 0x02);


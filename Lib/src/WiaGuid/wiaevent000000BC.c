// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WiaImgFmt_RTF, 0x573dd6a3, 0x4834, 0x432d, 0xa9, 0xb5, 0xe1, 0x98, 0xdd, 0x9e, 0x89, 0x0d);


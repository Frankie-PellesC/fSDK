// Created file "Lib\src\Svcguid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IComTrackingInfoObject, 0x116e42c5, 0xd8b1, 0x47bf, 0xab, 0x1e, 0xc8, 0x95, 0xed, 0x3e, 0x23, 0x72);


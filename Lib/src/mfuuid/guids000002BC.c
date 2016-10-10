// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_EVR_DWM_DEQUEUE_EVENT, 0xc8809dd6, 0x2b1c, 0x4f21, 0x8c, 0xbd, 0x01, 0x6a, 0xca, 0x98, 0x02, 0x93);


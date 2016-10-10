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

DEFINE_GUID(MF_EVENT_EXTENDED_TYPE_SEQUENCER_EFFECT_INSERT, 0xd85bf40f, 0x971f, 0x42be, 0x83, 0x35, 0xa0, 0x24, 0x62, 0x7b, 0x00, 0x09);


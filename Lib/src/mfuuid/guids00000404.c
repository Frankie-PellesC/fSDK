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

DEFINE_GUID(MF_EVENT_EXTENDED_TYPE_SEQUENCER_EFFECT_REMOVE, 0x9dba2fe2, 0x461b, 0x4b5a, 0xa3, 0x13, 0x9a, 0xa6, 0x38, 0xa1, 0x94, 0xb6);


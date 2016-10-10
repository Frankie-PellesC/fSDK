// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_EVENT_EXTENDED_TYPE_SEQUENCER_NODE_CHANGE, 0x11f06e09, 0xbcb5, 0x4c8c, 0x96, 0x92, 0x04, 0xe8, 0x1a, 0xd9, 0xcb, 0xd7);


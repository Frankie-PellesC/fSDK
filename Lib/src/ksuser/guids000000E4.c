// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSAUDFNAME_PC_SPEAKER_MUTE, 0x185fedf1, 0x9905, 0x11d1, 0x95, 0xa9, 0x00, 0xc0, 0x4f, 0xb9, 0x25, 0xd3);


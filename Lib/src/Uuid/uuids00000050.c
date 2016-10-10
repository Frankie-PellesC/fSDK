// Created file "Lib\src\Uuid\uuids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD, 0x4b92d758, 0x5a24, 0x4851, 0xa4, 0x70, 0x81, 0x5d, 0x78, 0xae, 0xe1, 0x19);


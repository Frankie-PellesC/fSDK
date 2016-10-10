// Created file "Lib\src\Uuid\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCEnumParticipants, 0xfcd56f29, 0x4a4f, 0x41b2, 0xba, 0x5c, 0xf5, 0xbc, 0xcc, 0x06, 0x0b, 0xf6);


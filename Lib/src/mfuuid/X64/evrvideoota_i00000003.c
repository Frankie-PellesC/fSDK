// Created file "Lib\src\mfuuid\X64\evrvideoota_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVideoOTA, 0x33bd34d4, 0x7d76, 0x424a, 0x84, 0x5d, 0x92, 0xfe, 0x58, 0x13, 0xd1, 0xfd);


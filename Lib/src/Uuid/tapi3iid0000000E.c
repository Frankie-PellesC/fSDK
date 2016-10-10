// Created file "Lib\src\Uuid\tapi3iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_FileRecordingTrack, 0xbf14a2e4, 0xe88b, 0x4ef5, 0x97, 0x40, 0x5a, 0xc5, 0xd0, 0x22, 0xf8, 0xc9);


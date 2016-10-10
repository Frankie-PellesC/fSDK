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

DEFINE_GUID(MFWMI_GUID_AUDIO_RENDER_EVENT, 0xc30d21db, 0xcc0c, 0x4c14, 0x87, 0x4f, 0x04, 0x41, 0x3c, 0xeb, 0x7f, 0x53);


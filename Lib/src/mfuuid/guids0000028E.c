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

DEFINE_GUID(MFWMIGUID_FILE_OPEN_EVENT, 0xc25c3351, 0x9ad3, 0x4338, 0x83, 0xce, 0xc7, 0x3f, 0x83, 0xbf, 0xef, 0xd4);


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

DEFINE_GUID(MFWMIGUID_EVR_MONITOR_ESTIMATE_EVENT, 0xa98951cd, 0xaef4, 0x4072, 0x82, 0x81, 0xc9, 0xf6, 0x6e, 0x5b, 0xe0, 0x33);


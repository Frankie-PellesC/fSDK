// Created file "Lib\src\sensorsapi\X64\sensorsapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_ALLOW_RTC_WAKE, 0xbd3b718a, 0x0680, 0x4d9d, 0x8a, 0xb2, 0xe1, 0xd2, 0xb4, 0xac, 0x80, 0x6d);


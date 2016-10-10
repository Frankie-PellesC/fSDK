// Created file "Lib\src\Uuid\X64\adhoc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDot11AdHocInterfaceNotificationSink, 0x8f10cc2f, 0xcf0d, 0x42a0, 0xac, 0xbe, 0xe2, 0xde, 0x70, 0x07, 0x38, 0x4d);


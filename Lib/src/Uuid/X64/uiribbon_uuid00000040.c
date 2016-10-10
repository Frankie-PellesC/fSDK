// Created file "Lib\src\Uuid\X64\uiribbon_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_THROTTLE_MAXIMUM, 0xbc5038f7, 0x23e0, 0x4960, 0x96, 0xda, 0x33, 0xab, 0xaf, 0x59, 0x35, 0xec);


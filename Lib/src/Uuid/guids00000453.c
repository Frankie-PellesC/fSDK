// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Devices_Notification_StorageFullLinkText, 0xa0e00ee1, 0xf0c7, 0x4d41, 0xb8, 0xe7, 0x26, 0xa7, 0xbd, 0x8d, 0x38, 0xb0);


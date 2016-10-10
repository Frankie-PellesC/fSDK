// Created file "Lib\src\PhotoAcquireUID\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPhotoAcquireGetDeviceType, 0x00f2e5b7, 0xe718, 0x4df8, 0x9a, 0x62, 0x5c, 0xb7, 0x9a, 0x61, 0x9f, 0x98);


// Created file "Lib\src\PhotoAcquireUID\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPhotoAcquireDuplicateTrackingSession, 0x02ecb2e7, 0x430e, 0x48ae, 0xa1, 0xf3, 0xe9, 0xac, 0xbc, 0xa2, 0x13, 0x89);


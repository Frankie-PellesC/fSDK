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

DEFINE_GUID(IID_IPhotoAcquire, 0x00f23353, 0xe31b, 0x4955, 0xa8, 0xad, 0xca, 0x5e, 0xbf, 0x31, 0xe2, 0xce);


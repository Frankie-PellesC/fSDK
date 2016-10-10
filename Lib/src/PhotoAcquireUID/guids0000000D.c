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

DEFINE_GUID(IID_IPhotoAcquirePlugin, 0x00f2dceb, 0xecb8, 0x4f77, 0x8e, 0x47, 0xe7, 0xa9, 0x87, 0xc8, 0x3d, 0xd0);


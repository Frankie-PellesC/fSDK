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

DEFINE_GUID(IID_IPhotoProgressDialogCancelCB, 0x00f2f5f8, 0x9840, 0x4db2, 0xbe, 0x88, 0xcd, 0x20, 0xf6, 0x2a, 0x9e, 0xfb);


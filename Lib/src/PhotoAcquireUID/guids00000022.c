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

DEFINE_GUID(IID_IPhotoEnumProgressCB, 0x38bed4f3, 0xcf2e, 0x4adf, 0x97, 0x7f, 0x74, 0xb7, 0x2a, 0x61, 0xdb, 0x87);


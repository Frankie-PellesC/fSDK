// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETCHFAC_SUPPORT_RELIABLE_DELIVERY, 0x996c17b1, 0xba67, 0x45b5, 0xb3, 0x3f, 0xd6, 0xb0, 0x68, 0x81, 0xd1, 0x87);


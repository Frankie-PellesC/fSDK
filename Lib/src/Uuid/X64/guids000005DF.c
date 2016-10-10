// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Volume_IsMappedDrive, 0x149c0b69, 0x2c2d, 0x48fc, 0x80, 0x8f, 0xd3, 0x18, 0xd7, 0x8c, 0x46, 0x36);


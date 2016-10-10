// Created file "Lib\src\wsbapp_uuid\wsbapp_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWsbApplicationBackupSupport, 0x1eff3510, 0x4a27, 0x46ad, 0xb9, 0xe0, 0x08, 0x33, 0x2f, 0x0f, 0x4f, 0x6d);

DEFINE_GUID(IID_IWsbApplicationRestoreSupport, 0x8d3bdb38, 0x4ee8, 0x4718, 0x85, 0xf9, 0xc7, 0xdb, 0xc4, 0xab, 0x77, 0xaa);

DEFINE_GUID(IID_IWsbApplicationAsync, 0x0843f6f7, 0x895c, 0x44a6, 0xb0, 0xc2, 0x05, 0xa5, 0x02, 0x2a, 0xa3, 0xa1);


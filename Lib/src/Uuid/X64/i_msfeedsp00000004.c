// Created file "Lib\src\Uuid\X64\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMSFolderPriv, 0xbe7101b4, 0x73ff, 0x4acf, 0xa4, 0x72, 0xb7, 0x4c, 0x4f, 0xb5, 0xf4, 0x5d);


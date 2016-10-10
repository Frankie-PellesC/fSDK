// Created file "Lib\src\Uuid\X64\i_perhist"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPersistHistory, 0x91a565c1, 0xe38f, 0x11d0, 0x94, 0xbf, 0x00, 0xa0, 0xc9, 0x05, 0x5c, 0xbf);


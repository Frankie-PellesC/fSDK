// Created file "Lib\src\Uuid\X64\i_dxtrans"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICSSFilterDispatch, 0x9519152b, 0x9484, 0x4a6c, 0xb6, 0xa7, 0x4f, 0x25, 0xe9, 0x2d, 0x6c, 0x6b);


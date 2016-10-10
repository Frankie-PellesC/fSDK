// Created file "Lib\src\Uuid\i_docobj"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IProtectedModeMenuServices, 0x73c105ee, 0x9dff, 0x4a07, 0xb8, 0x3c, 0x7e, 0xff, 0x29, 0x0c, 0x26, 0x6e);


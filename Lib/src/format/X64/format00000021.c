// Created file "Lib\src\format\X64\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMetaDataEmit, 0xba3fee4c, 0xecb9, 0x4e41, 0x83, 0xb7, 0x18, 0x3f, 0xa4, 0x1c, 0xd8, 0x59);


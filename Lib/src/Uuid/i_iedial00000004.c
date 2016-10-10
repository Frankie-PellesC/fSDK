// Created file "Lib\src\Uuid\i_iedial"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDialEngine, 0x39fd782b, 0x7905, 0x40d5, 0x91, 0x48, 0x3c, 0x9b, 0x19, 0x04, 0x23, 0xd5);


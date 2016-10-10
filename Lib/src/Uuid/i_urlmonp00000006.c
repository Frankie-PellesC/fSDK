// Created file "Lib\src\Uuid\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPreBinding, 0x0ddb6f46, 0x82f6, 0x4d1b, 0x80, 0x17, 0x4b, 0x45, 0x35, 0x34, 0x19, 0x18);


// Created file "Lib\src\Uuid\X64\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPreBindingSupport, 0xdc8c6098, 0xd9fc, 0x406a, 0xbb, 0x3e, 0x44, 0xec, 0xef, 0x43, 0x68, 0x47);


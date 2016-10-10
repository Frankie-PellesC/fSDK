// Created file "Lib\src\Uuid\X64\i_docobj"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IProtectFocus, 0xd81f90a3, 0x8156, 0x44f7, 0xad, 0x28, 0x5a, 0xbb, 0x87, 0x00, 0x32, 0x74);


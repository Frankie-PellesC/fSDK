// Created file "Lib\src\Uuid\X64\napcommon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapComponentInfo, 0xb475f925, 0xe3f7, 0x414c, 0x8c, 0x72, 0x1c, 0xee, 0x64, 0xb9, 0xd8, 0xf6);


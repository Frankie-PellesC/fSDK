// Created file "Lib\src\Uuid\X64\i_privacie"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUserFilter, 0x3f457174, 0x09a5, 0x493d, 0xa2, 0x22, 0xa2, 0x38, 0x5c, 0x13, 0x8a, 0x25);


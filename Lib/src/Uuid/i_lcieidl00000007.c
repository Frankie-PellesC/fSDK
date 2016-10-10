// Created file "Lib\src\Uuid\i_lcieidl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMemberOfIESession, 0x0e4e1084, 0x4290, 0x4e24, 0xbb, 0x44, 0x31, 0xf0, 0xb9, 0xf9, 0xf9, 0xc4);


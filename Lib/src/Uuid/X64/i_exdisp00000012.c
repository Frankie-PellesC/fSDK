// Created file "Lib\src\Uuid\X64\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IShellUIHelper2, 0xa7fe6eda, 0x1932, 0x4281, 0xb8, 0x81, 0x87, 0xb3, 0x1b, 0x8b, 0xc5, 0x2c);


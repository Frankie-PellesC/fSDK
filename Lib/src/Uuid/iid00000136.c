// Created file "Lib\src\Uuid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEventClassParallelFiringTimeout, 0xa5657e5c, 0x7bae, 0x4e81, 0x9c, 0x17, 0x28, 0x46, 0x55, 0x91, 0x87, 0x63);


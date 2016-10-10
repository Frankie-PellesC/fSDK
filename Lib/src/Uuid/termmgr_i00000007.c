// Created file "Lib\src\Uuid\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITPluggableTerminalClassRegistration, 0x924a3723, 0xa00b, 0x4f5f, 0x9f, 0xee, 0x8e, 0x9a, 0xeb, 0x9e, 0x82, 0xaa);


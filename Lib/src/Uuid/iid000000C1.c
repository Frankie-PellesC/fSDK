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

DEFINE_GUID(IID_ITransactionProperty2, 0xacf84c81, 0x9f6c, 0x47d5, 0x9b, 0x45, 0x4b, 0xd6, 0xb0, 0x2b, 0xce, 0xcf);


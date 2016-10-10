// Created file "Lib\src\Uuid\X64\i_icontact"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IContactManager, 0xad553d98, 0xdeb1, 0x474a, 0x8e, 0x17, 0xfc, 0x0c, 0x20, 0x75, 0xb7, 0x38);


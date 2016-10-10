// Created file "Lib\src\Uuid\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IQueryPopupMgr, 0xae3080f6, 0x74c7, 0x4329, 0xa2, 0x6d, 0x5e, 0xe5, 0xb9, 0xcc, 0x48, 0xaa);


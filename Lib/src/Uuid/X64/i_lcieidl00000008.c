// Created file "Lib\src\Uuid\X64\i_lcieidl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILCIESerializable, 0x0acb838f, 0xa152, 0x4108, 0xab, 0x65, 0x06, 0xe7, 0x3c, 0x92, 0xee, 0x5f);


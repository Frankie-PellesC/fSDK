// Created file "Lib\src\Uuid\X64\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOpenServiceActivityInput, 0x75cb4db9, 0x6da0, 0x4da3, 0x83, 0xce, 0x42, 0x2b, 0x6a, 0x43, 0x33, 0x46);


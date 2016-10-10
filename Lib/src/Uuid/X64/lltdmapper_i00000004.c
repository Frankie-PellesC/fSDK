// Created file "Lib\src\Uuid\X64\lltdmapper_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILLTDEnumerationEvents, 0x480611c4, 0x18d1, 0x4be9, 0x92, 0xbd, 0x09, 0x18, 0x60, 0x5e, 0xc3, 0x9f);


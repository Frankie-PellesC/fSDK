// Created file "Lib\src\mfuuid\X64\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFASFStreamPrioritization, 0x699bdc27, 0xbbaf, 0x49ff, 0x8e, 0x38, 0x9c, 0x39, 0xc9, 0xb5, 0xe0, 0x88);


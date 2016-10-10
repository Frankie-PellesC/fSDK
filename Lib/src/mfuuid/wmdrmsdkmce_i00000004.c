// Created file "Lib\src\mfuuid\wmdrmsdkmce_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMMCENetReceiver, 0x34dac35e, 0x33fd, 0x4c95, 0xb9, 0xd1, 0xd5, 0x41, 0xac, 0xcb, 0x97, 0x8c);


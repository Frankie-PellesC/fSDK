// Created file "Lib\src\mfuuid\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFSourceOpenMonitor, 0x059054b3, 0x027c, 0x494c, 0xa2, 0x7d, 0x91, 0x13, 0x29, 0x1c, 0xf8, 0x7f);


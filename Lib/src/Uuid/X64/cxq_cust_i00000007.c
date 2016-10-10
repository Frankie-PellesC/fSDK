// Created file "Lib\src\Uuid\X64\cxq_cust_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IH26XRTPControl, 0x1fc3f2c0, 0x2bfd, 0x11d0, 0x88, 0x00, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);


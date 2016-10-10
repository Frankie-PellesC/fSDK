// Created file "Lib\src\Uuid\cxq_cust_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IH26XEncoderControl, 0xf9b78aa1, 0xea12, 0x11cf, 0x9f, 0xec, 0x00, 0xaa, 0x00, 0xa5, 0x9f, 0x69);


// Created file "Lib\src\mfuuid\mfobjects_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFByteStream, 0xad4c1b00, 0x4bf7, 0x422f, 0x91, 0x75, 0x75, 0x66, 0x93, 0xd9, 0x13, 0x0d);


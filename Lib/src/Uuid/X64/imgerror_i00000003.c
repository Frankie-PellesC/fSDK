// Created file "Lib\src\Uuid\X64\imgerror_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IImgErrorInfo, 0x2bce4ece, 0xd30e, 0x445a, 0x94, 0x23, 0x68, 0x29, 0xbe, 0x94, 0x5a, 0xd8);

DEFINE_GUID(IID_IImgCreateErrorInfo, 0x1c55a64c, 0x07cd, 0x4fb5, 0x90, 0xf7, 0xb7, 0x53, 0xd9, 0x1f, 0x0c, 0x9e);


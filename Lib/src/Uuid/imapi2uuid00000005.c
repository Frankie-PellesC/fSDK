// Created file "Lib\src\Uuid\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDiscRecorder2Ex, 0x27354132, 0x7f64, 0x5b0f, 0x8f, 0x00, 0x5d, 0x77, 0xaf, 0xbe, 0x26, 0x1e);


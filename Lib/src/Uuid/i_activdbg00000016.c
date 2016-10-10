// Created file "Lib\src\Uuid\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumDebugStackFrames64, 0x0dc38853, 0xc1b0, 0x4176, 0xa9, 0x84, 0xb2, 0x98, 0x36, 0x10, 0x27, 0xaf);


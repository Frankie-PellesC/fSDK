// Created file "Lib\src\Uuid\X64\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDebugStackFrameSnifferEx64, 0x8cd12af4, 0x49c1, 0x4d52, 0x8d, 0x8a, 0xc1, 0x46, 0xf4, 0x75, 0x81, 0xaa);


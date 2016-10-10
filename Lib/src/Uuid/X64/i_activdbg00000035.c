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

DEFINE_GUID(IID_IDebugApplicationThread64, 0x9dac5886, 0xdbad, 0x456d, 0x9d, 0xee, 0x5d, 0xec, 0x39, 0xab, 0x3d, 0xda);


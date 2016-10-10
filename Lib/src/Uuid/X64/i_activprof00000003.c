// Created file "Lib\src\Uuid\X64\i_activprof"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveScriptProfilerControl, 0x784b5ff0, 0x69b0, 0x47d1, 0xa7, 0xdc, 0x25, 0x18, 0xf4, 0x23, 0x0e, 0x90);


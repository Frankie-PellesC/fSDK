// Created file "Lib\src\dxguid\d3d10guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PPM_PERFSTATE_CHANGE_GUID, 0xa5b32ddd, 0x7f39, 0x4abc, 0xb8, 0x92, 0x90, 0x0e, 0x43, 0xb5, 0x9e, 0xbb);


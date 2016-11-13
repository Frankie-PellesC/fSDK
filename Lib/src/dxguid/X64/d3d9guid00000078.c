// Created file "Lib\src\dxguid\X64\d3d9guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PPM_THERMAL_POLICY_CHANGE_GUID, 0x48f377b8, 0x6880, 0x4c7b, 0x8b, 0xdc, 0x38, 0x01, 0x76, 0xc6, 0x65, 0x4d);


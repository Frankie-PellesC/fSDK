// Created file "Lib\src\dxguid\d3dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DXFILEOBJ_EffectParamDWord, 0xe13963bc, 0xae51, 0x4c5d, 0xb0, 0x0f, 0xcf, 0xa3, 0xa9, 0xd9, 0x7c, 0xe5);


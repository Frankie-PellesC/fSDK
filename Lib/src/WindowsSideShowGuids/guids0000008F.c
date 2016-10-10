// Created file "Lib\src\WindowsSideShowGuids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SIDESHOW_CAPABILITY_CURRENT_LANGUAGE, 0x8abc88a8, 0x857b, 0x4ad7, 0xa3, 0x5a, 0xb5, 0x94, 0x2f, 0x49, 0x2b, 0x99);


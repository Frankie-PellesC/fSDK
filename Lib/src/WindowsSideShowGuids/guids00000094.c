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

DEFINE_GUID(GUID_DEVINTERFACE_SIDESHOW, 0x152e5811, 0xfeb9, 0x4b00, 0x90, 0xf4, 0xd3, 0x29, 0x47, 0xae, 0x16, 0x81);


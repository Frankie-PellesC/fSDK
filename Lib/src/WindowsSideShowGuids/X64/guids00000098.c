// Created file "Lib\src\WindowsSideShowGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SIDESHOW_NEW_EVENT_DATA_AVAILABLE, 0x57813854, 0x2fc1, 0x411c, 0xa5, 0x9f, 0xf2, 0x49, 0x27, 0x60, 0x88, 0x04);


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

DEFINE_GUID(GUID_POWERBUTTON_ACTION, 0x7648efa3, 0xdd9c, 0x4e3e, 0xb5, 0x66, 0x50, 0xf9, 0x29, 0x38, 0x62, 0x80);


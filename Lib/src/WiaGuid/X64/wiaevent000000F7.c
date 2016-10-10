// Created file "Lib\src\WiaGuid\X64\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_StiEventHandler, 0x8144b6f5, 0x20a8, 0x444a, 0xb8, 0xee, 0x19, 0xdf, 0x0b, 0xb8, 0x4b, 0xdb);


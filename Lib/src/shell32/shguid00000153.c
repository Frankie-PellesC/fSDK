// Created file "Lib\src\shell32\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SelectedItemCount_Property_GUID, 0x8fe316d2, 0x0e52, 0x460a, 0x9c, 0x1e, 0x48, 0xf2, 0x73, 0xd4, 0x70, 0xa3);


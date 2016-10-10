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

DEFINE_GUID(FOLDERID_SidebarDefaultParts, 0x7b396e54, 0x9ec5, 0x4300, 0xbe, 0x0a, 0x24, 0x82, 0xeb, 0xae, 0x1a, 0x26);


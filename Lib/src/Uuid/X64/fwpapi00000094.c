// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_CONDITION_DESTINATION_SUB_INTERFACE_INDEX, 0x2b7d4399, 0xd4c7, 0x4738, 0xa2, 0xf5, 0xe9, 0x94, 0xb4, 0x3d, 0xa3, 0x88);


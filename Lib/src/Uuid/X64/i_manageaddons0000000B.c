// Created file "Lib\src\Uuid\X64\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IManageAddOnsUI, 0x38c1c886, 0xa78d, 0x461e, 0x9e, 0x58, 0xce, 0x1c, 0x6e, 0xdc, 0x28, 0x95);


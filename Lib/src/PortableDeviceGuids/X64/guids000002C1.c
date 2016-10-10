// Created file "Lib\src\PortableDeviceGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_COMMAND_OBJECT_PROPERTIES_BULK_SET_VALUES_BY_OBJECT_LIST_NEXT, 0x11c824dd, 0x04cd, 0x4e4e, 0x8c, 0x7b, 0xf6, 0xef, 0xb7, 0x94, 0xd8, 0x4e);


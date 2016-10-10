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

DEFINE_GUID(WPD_FOLDER_CONTENT_TYPES_ALLOWED, 0x7e9a7abf, 0xe568, 0x4b34, 0xaa, 0x2f, 0x13, 0xbb, 0x12, 0xab, 0x17, 0x7d);


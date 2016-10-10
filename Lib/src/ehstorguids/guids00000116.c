// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_DOCUMENT_OBJECT_PROPERTIES_V1, 0x0b110203, 0xeb95, 0x4f02, 0x93, 0xe0, 0x97, 0xc6, 0x31, 0x49, 0x3a, 0xd5);


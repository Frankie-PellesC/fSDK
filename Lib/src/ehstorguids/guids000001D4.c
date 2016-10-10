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

DEFINE_GUID(WPD_SMS_OBJECT_PROPERTIES_V1, 0x7e1074cc, 0x50ff, 0x4dd1, 0xa7, 0x42, 0x53, 0xbe, 0x6f, 0x09, 0x3a, 0x0d);


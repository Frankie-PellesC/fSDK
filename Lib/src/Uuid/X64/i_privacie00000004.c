// Created file "Lib\src\Uuid\X64\i_privacie"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPrivacIEDatabase, 0x0199568a, 0xf46d, 0x4b53, 0x99, 0xf6, 0xf6, 0x37, 0xe0, 0x83, 0x14, 0xb2);


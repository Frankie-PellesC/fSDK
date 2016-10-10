// Created file "Lib\src\Uuid\X64\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_PluggableSuperclassRegistration, 0xbb918e32, 0x2a5c, 0x4986, 0xab, 0x40, 0x16, 0x86, 0xa0, 0x34, 0x39, 0x0a);


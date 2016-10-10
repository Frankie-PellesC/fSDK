// Created file "Lib\src\Uuid\X64\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DIID_DWebBrowserEvents2, 0x34a715a0, 0x6587, 0x11d0, 0x92, 0x4a, 0x00, 0x20, 0xaf, 0xc7, 0xac, 0x4d);


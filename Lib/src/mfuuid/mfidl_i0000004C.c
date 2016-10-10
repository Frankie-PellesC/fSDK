// Created file "Lib\src\mfuuid\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFRemoteDesktopPlugin, 0x1cde6309, 0xcae0, 0x4940, 0x90, 0x7e, 0xc1, 0xec, 0x9c, 0x3d, 0x1d, 0x4a);


// Created file "Lib\src\mfuuid\X64\mfobjects_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFPluginControl, 0x5c6c44bf, 0x1db6, 0x435b, 0x92, 0x49, 0xe8, 0xcd, 0x10, 0xfd, 0xec, 0x96);


// Created file "Lib\src\ScrnSave\X64\scrnsave"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(szScreenSaverKey, 0x746e6f43, 0x6f72, 0x206c, 0x50, 0x61, 0x6e, 0x65, 0x6c, 0x5c, 0x44, 0x65);

DEFINE_GUID(szPasswordValue, 0x65726353, 0x6e65, 0x6153, 0x76, 0x65, 0x5f, 0x44, 0x61, 0x74, 0x61, 0x00);


// Created file "Lib\src\Uuid\X64\ctfspui_g"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SpeechUIServer, 0x1443904b, 0x34e4, 0x40f6, 0xb3, 0x0f, 0x6b, 0xeb, 0x81, 0x26, 0x7b, 0x80);


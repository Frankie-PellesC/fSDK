// Created file "Lib\src\Uuid\ctfspui_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITfSpeechUIServer, 0x90e9a944, 0x9244, 0x489f, 0xa7, 0x8f, 0xde, 0x67, 0xaf, 0xc0, 0x13, 0xa7);


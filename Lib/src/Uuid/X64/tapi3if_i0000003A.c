// Created file "Lib\src\Uuid\X64\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITTTSTerminalEvent, 0xd964788f, 0x95a5, 0x461d, 0xab, 0x0c, 0xb9, 0x90, 0x0a, 0x6c, 0x27, 0x13);


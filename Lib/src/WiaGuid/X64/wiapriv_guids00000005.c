// Created file "Lib\src\WiaGuid\X64\wiapriv_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaWow64, 0x7bb68e65, 0xf426, 0x4698, 0xa0, 0xb7, 0xd2, 0xaf, 0x28, 0xb1, 0xba, 0x81);


// Created file "Lib\src\Uuid\X64\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAuthenticateEx, 0x2ad1edaf, 0xd83d, 0x48b5, 0x9a, 0xdf, 0x03, 0xdb, 0xe1, 0x9f, 0x53, 0xbd);


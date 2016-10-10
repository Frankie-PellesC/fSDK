// Created file "Lib\src\WiaGuid\wiascanprofile_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ScanProfilesLib, 0x77a6bd8a, 0xab60, 0x49ff, 0x85, 0x3c, 0xb6, 0xee, 0x7b, 0xab, 0xaf, 0x96);


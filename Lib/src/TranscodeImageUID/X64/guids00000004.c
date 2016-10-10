// Created file "Lib\src\TranscodeImageUID\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_TranscodeLibrary, 0x17dc7884, 0x443d, 0x478e, 0xab, 0xd7, 0xbc, 0x22, 0x85, 0x6f, 0xc7, 0xf1);


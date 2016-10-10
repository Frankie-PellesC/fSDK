// Created file "Lib\src\CertIdl\X64\ocspreqd_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOCSPRequestD, 0xd7350710, 0xd754, 0x40be, 0x8f, 0xd8, 0x7e, 0x99, 0x9f, 0xbe, 0xe1, 0x07);

DEFINE_GUID(IID_AsyncIOCSPRequestD, 0xb45320f7, 0xaffd, 0x4df2, 0xba, 0x88, 0x47, 0x81, 0x29, 0x64, 0xbb, 0x7e);


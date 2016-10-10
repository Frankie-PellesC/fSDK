// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SOCKET_DEFAULT2_QM_POLICY, 0xaec2ef9c, 0x3a4d, 0x4d3e, 0x88, 0x42, 0x23, 0x99, 0x42, 0xe3, 0x9a, 0x47);


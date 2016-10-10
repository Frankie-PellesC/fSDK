// Created file "Lib\src\ADSIid\X64\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(USER_POLICY_PRESENT_GUID, 0x54fb46c8, 0xf089, 0x464c, 0xb1, 0xfd, 0x59, 0xd1, 0xb6, 0x2c, 0x3b, 0x50);


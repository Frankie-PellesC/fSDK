// Created file "Lib\src\Uuid\i_privacie"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPrivacIEAdvisor, 0x891fcaab, 0x1fb2, 0x44a5, 0xbb, 0x4b, 0x0d, 0x76, 0x4d, 0xfe, 0x88, 0xcc);


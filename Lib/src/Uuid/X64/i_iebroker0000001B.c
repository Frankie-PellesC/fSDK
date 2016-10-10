// Created file "Lib\src\Uuid\X64\i_iebroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEContentAdvisorBroker, 0xc456f893, 0x35ed, 0x0eb4, 0x56, 0xf9, 0x3e, 0x13, 0x9e, 0xbe, 0x5f, 0x47);


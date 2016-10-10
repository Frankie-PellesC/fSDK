// Created file "Lib\src\Uuid\X64\napenforcementclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapEnforcementClientBinding, 0x92b93223, 0x7487, 0x42d9, 0x9a, 0x91, 0x5b, 0x85, 0x07, 0x72, 0x03, 0x84);


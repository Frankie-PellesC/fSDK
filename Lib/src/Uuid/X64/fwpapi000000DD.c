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

DEFINE_GUID(FWPM_CALLOUT_TEREDO_ALE_RESOURCE_ASSIGNMENT_V6, 0x31b95392, 0x066e, 0x42a2, 0xb7, 0xdb, 0x92, 0xf8, 0xac, 0xdd, 0x56, 0xf9);


// Created file "Lib\src\WindowsSideShowGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NETWORK_MANAGER_LAST_IP_ADDRESS_REMOVAL_GUID, 0xcc4ba62a, 0x162e, 0x4648, 0x84, 0x7a, 0xb6, 0xbd, 0xf9, 0x93, 0xe3, 0x35);


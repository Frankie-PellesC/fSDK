// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Message_ToDoFlags, 0x1f856a9f, 0x6900, 0x4aba, 0x95, 0x05, 0x2d, 0x5f, 0x1b, 0x4d, 0x66, 0xcb);


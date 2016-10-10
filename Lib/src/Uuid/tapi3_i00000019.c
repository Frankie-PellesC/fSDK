// Created file "Lib\src\Uuid\tapi3_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DIID_ITTAPIDispatchEventNotification, 0x9f34325b, 0x7e62, 0x11d2, 0x94, 0x57, 0x00, 0xc0, 0x4f, 0x8e, 0xc8, 0x88);


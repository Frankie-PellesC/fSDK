// Created file "Lib\src\Uuid\X64\i_urscallback"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IURSResultCallback, 0xe5851812, 0x0959, 0x41c0, 0x99, 0xb4, 0xb9, 0xd5, 0x81, 0x9c, 0x41, 0x89);


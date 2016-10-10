// Created file "Lib\src\dinput8\dilib3"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(c_dfDIJoystick, 0x00000018, 0x0010, 0x0000, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00);


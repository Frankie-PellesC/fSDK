// Created file "Lib\src\Fci\encapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(enc_slot_mask, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(enc_extra_bits, 0x00000000, 0x0101, 0x0202, 0x03, 0x03, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06);


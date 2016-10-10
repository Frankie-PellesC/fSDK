// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFNETLISTENER_FEEDBACKSPLITTER, 0xed34e70f, 0x5c5c, 0x4f5e, 0xa3, 0x0b, 0x4e, 0xe0, 0x19, 0xb7, 0x17, 0x19);


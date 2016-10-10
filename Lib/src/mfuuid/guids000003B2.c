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

DEFINE_GUID(MFNETCONNECTION_FEEDBACKSOCKET, 0xb3121ae7, 0x2ee4, 0x4626, 0x81, 0x81, 0x0b, 0xda, 0xc3, 0x3b, 0x5e, 0xeb);


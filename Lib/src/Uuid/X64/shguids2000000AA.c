// Created file "Lib\src\Uuid\X64\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAttachmentExecute, 0x73db1241, 0x1e85, 0x4581, 0x8e, 0x4f, 0xa8, 0x1e, 0x1d, 0x0f, 0x8c, 0x57);


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

DEFINE_GUID(MF_PRES_TARGET_SDP_HTTP_V10, 0xb3addc82, 0xc986, 0x48f7, 0x9e, 0x0d, 0x12, 0x67, 0x43, 0x43, 0xcd, 0x75);


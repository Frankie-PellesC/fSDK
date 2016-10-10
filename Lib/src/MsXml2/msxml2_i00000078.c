// Created file "Lib\src\MsXml2\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SAXXMLReader30, 0x3124c396, 0xfb13, 0x4836, 0xa6, 0xad, 0x13, 0x17, 0xf1, 0x71, 0x36, 0x88);


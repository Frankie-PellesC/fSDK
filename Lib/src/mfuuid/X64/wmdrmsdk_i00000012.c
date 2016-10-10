// Created file "Lib\src\mfuuid\X64\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMLicenseBackupRestoreStatus, 0xf653c5a2, 0x0eb3, 0x4503, 0x9d, 0x88, 0xc2, 0x00, 0x55, 0x2d, 0x0d, 0x55);


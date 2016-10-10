// Created file "Lib\src\vss_uuid\X64\vssasr_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVssAsrWriterRestoreEx, 0x272cd7d7, 0x1235, 0x49b3, 0x82, 0x07, 0x20, 0x32, 0x41, 0xcc, 0x54, 0x84);

DEFINE_GUID(IID_IVssAsrWriterBackup, 0x001e7348, 0x6c2f, 0x46c1, 0xbb, 0x33, 0xb3, 0x92, 0xfe, 0xa9, 0x4a, 0x55);

DEFINE_GUID(IID_IVssAsrWriterRestore, 0x6a0a259b, 0x4010, 0x45f8, 0xb4, 0x07, 0x2e, 0x2c, 0x71, 0x29, 0xbf, 0x0a);


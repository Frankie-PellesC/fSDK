// Created file "Lib\src\Uuid\i_permdlg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IJavaZonePermissionEditor, 0x85347f8a, 0xc8b7, 0x11d0, 0x88, 0x23, 0x00, 0xc0, 0x4f, 0xb6, 0x7c, 0x84);


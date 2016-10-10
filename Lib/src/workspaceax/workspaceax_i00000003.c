// Created file "Lib\src\workspaceax\workspaceax_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWorkspaceResTypeRegistry, 0x1d428c79, 0x6e2e, 0x4351, 0xa3, 0x61, 0xc0, 0x40, 0x1a, 0x03, 0xa0, 0xba);


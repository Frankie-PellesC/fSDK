// Created file "Lib\src\corguids\X64\mscorsvc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_mscorsvc, 0xd69cca64, 0x16f7, 0x485c, 0x8c, 0xf1, 0x67, 0x06, 0x3e, 0x44, 0xf0, 0xc3);

DEFINE_GUID(IID_ICorSvcDependencies, 0xddb34005, 0x9ba3, 0x4025, 0x95, 0x54, 0xf0, 0x0a, 0x2d, 0xf5, 0xdb, 0xf5);

DEFINE_GUID(IID_ICorSvcWorker, 0xd1047bc2, 0x67c0, 0x400c, 0xa9, 0x4c, 0xe6, 0x44, 0x46, 0xa6, 0x7f, 0xbe);

DEFINE_GUID(IID_ICorSvcWorker2, 0xf3358a7d, 0x0061, 0x4776, 0x88, 0x0e, 0xa2, 0xf2, 0x1b, 0x9e, 0xf9, 0x3e);

DEFINE_GUID(IID_ICorSvcSetPrivateAttributes, 0xb18e0b40, 0xc089, 0x4350, 0x83, 0x28, 0x06, 0x6c, 0x66, 0x8b, 0xcc, 0xc2);

DEFINE_GUID(IID_ICorSvcRepository, 0xd5346658, 0xb5fd, 0x4353, 0x96, 0x47, 0x07, 0xad, 0x47, 0x83, 0xd5, 0xa0);

DEFINE_GUID(IID_ICorSvcLogger, 0xd189ff1a, 0xe266, 0x4f13, 0x96, 0x37, 0x4b, 0x95, 0x22, 0x27, 0x9f, 0xfc);

DEFINE_GUID(IID_ICorSvcPooledWorker, 0x0631e7e2, 0x6046, 0x4fde, 0x8b, 0x6d, 0xa0, 0x9b, 0x64, 0xfd, 0xa6, 0xf3);

DEFINE_GUID(IID_ICorSvcBindToWorker, 0x5c6fb596, 0x4828, 0x4ed5, 0xb9, 0xdd, 0x29, 0x3d, 0xad, 0x73, 0x6f, 0xb5);

DEFINE_GUID(IID_ICorSvc, 0x3eef5ff0, 0x3680, 0x4f20, 0x8a, 0x8f, 0x90, 0x51, 0xac, 0xa6, 0x6b, 0x22);

DEFINE_GUID(IID_ICompileProgressNotification, 0x01c10030, 0x6c81, 0x4671, 0xbd, 0x51, 0x14, 0xb1, 0x84, 0xc6, 0x73, 0xb2);

DEFINE_GUID(IID_ICompileProgressNotification2, 0x98e5bde2, 0xe9a0, 0x4ade, 0x9c, 0xb2, 0x6c, 0xd0, 0x6f, 0xdb, 0x1a, 0x85);

DEFINE_GUID(IID_ICorSvcInstaller, 0x0523feee, 0xeb0e, 0x4857, 0xb2, 0xaa, 0xdb, 0x78, 0x75, 0x21, 0xd0, 0x77);

DEFINE_GUID(IID_ICorSvcAdvancedInstaller, 0x0871fb80, 0x3ea0, 0x47cc, 0x9b, 0x51, 0xd9, 0x2e, 0x2a, 0xee, 0x75, 0xdb);

DEFINE_GUID(IID_ICorSvcOptimizer, 0x94af0ec4, 0xc10d, 0x45d4, 0xa6, 0x25, 0xd6, 0x8d, 0x1b, 0x02, 0xa3, 0x96);

DEFINE_GUID(IID_ICorSvcOptimizer2, 0xee3b09c2, 0x0110, 0x4b6e, 0xa7, 0x3f, 0xa3, 0xd6, 0x56, 0x2f, 0x98, 0xab);

DEFINE_GUID(IID_ICorSvcManager, 0x8f416a48, 0xd663, 0x4a7e, 0x97, 0x32, 0xfb, 0xca, 0x3f, 0xc4, 0x6e, 0xa8);


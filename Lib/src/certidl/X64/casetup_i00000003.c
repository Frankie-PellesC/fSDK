// Created file "Lib\src\CertIdl\X64\casetup_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertSrvSetupKeyInformation, 0x6ba73778, 0x36da, 0x4c39, 0x8a, 0x85, 0xbc, 0xfa, 0x7d, 0x00, 0x07, 0x93);

DEFINE_GUID(IID_ICertSrvSetupKeyInformationCollection, 0xe65c8b00, 0xe58f, 0x41f9, 0xa9, 0xec, 0xa2, 0x8d, 0x74, 0x27, 0xc8, 0x44);

DEFINE_GUID(IID_ICertSrvSetup, 0xb760a1bb, 0x4784, 0x44c0, 0x8f, 0x12, 0x55, 0x5f, 0x07, 0x80, 0xff, 0x25);

DEFINE_GUID(IID_IMSCEPSetup, 0x4f7761bb, 0x9f3b, 0x4592, 0x9e, 0xe0, 0x9a, 0x73, 0x25, 0x9c, 0x31, 0x3e);

DEFINE_GUID(IID_ICertificateEnrollmentServerSetup, 0x70027fdb, 0x9dd9, 0x4921, 0x89, 0x44, 0xb3, 0x5c, 0xb3, 0x1b, 0xd2, 0xec);

DEFINE_GUID(IID_ICertificateEnrollmentPolicyServerSetup, 0x859252cc, 0x238c, 0x4a88, 0xb8, 0xfd, 0xa3, 0x7e, 0x7d, 0x04, 0xe6, 0x8b);

DEFINE_GUID(LIBID_CertSrvSetupLib, 0x8abc9d1a, 0x02d4, 0x42e4, 0xb5, 0x42, 0x17, 0xb1, 0xeb, 0xcb, 0x2f, 0x51);

DEFINE_GUID(CLSID_CCertSrvSetupKeyInformation, 0x38373906, 0x5433, 0x4633, 0xb0, 0xfb, 0x29, 0xb7, 0xe7, 0x82, 0x62, 0xe1);

DEFINE_GUID(CLSID_CCertSrvSetup, 0x961f180f, 0xf55c, 0x413d, 0xa9, 0xb3, 0x7d, 0x2a, 0xf4, 0xd8, 0xe4, 0x2f);

DEFINE_GUID(CLSID_CMSCEPSetup, 0xaa4f5c02, 0x8e7c, 0x49c4, 0x94, 0xfa, 0x67, 0xa5, 0xcc, 0x5e, 0xad, 0xb4);

DEFINE_GUID(CLSID_CCertificateEnrollmentServerSetup, 0x9902f3bc, 0x88af, 0x4cf8, 0xae, 0x62, 0x71, 0x40, 0x53, 0x15, 0x52, 0xb6);

DEFINE_GUID(CLSID_CCertificateEnrollmentPolicyServerSetup, 0xafe2fa32, 0x41b1, 0x459d, 0xa5, 0xde, 0x49, 0xad, 0xd8, 0xa7, 0x21, 0x82);


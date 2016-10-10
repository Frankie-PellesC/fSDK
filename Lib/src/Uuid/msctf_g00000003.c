// Created file "Lib\src\Uuid\msctf_g"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TF_ThreadMgr, 0x529a9e6b, 0x6587, 0x4f23, 0xab, 0x9e, 0x9c, 0x7d, 0x68, 0x3e, 0x3c, 0x50);

DEFINE_GUID(CLSID_TF_LangBarMgr, 0xebb08c45, 0x6c4a, 0x4fdc, 0xae, 0x53, 0x4e, 0xb8, 0xc4, 0xc7, 0xdb, 0x8e);

DEFINE_GUID(CLSID_TF_DisplayAttributeMgr, 0x3ce74de4, 0x53d3, 0x4d74, 0x8b, 0x83, 0x43, 0x1b, 0x38, 0x28, 0xba, 0x53);

DEFINE_GUID(CLSID_TF_CategoryMgr, 0xa4b544a1, 0x438d, 0x4b41, 0x93, 0x25, 0x86, 0x95, 0x23, 0xe2, 0xd6, 0xc7);

DEFINE_GUID(CLSID_TF_InputProcessorProfiles, 0x33c53a50, 0xf456, 0x4884, 0xb0, 0x49, 0x85, 0xfd, 0x64, 0x3e, 0xcf, 0xed);

DEFINE_GUID(CLSID_TF_LangBarItemMgr, 0xb9931692, 0xa2b3, 0x4fab, 0xbf, 0x33, 0x9e, 0xc6, 0xf9, 0xfb, 0x96, 0xac);

DEFINE_GUID(CLSID_TF_ClassicLangBar, 0x3318360c, 0x1afc, 0x4d09, 0xa8, 0x6b, 0x9f, 0x9c, 0xb6, 0xdc, 0xeb, 0x9c);

DEFINE_GUID(CLSID_TF_TransitoryExtensionUIEntry, 0xae6be008, 0x07fb, 0x400d, 0x8b, 0xeb, 0x33, 0x7a, 0x64, 0xf7, 0x05, 0x1f);

DEFINE_GUID(GUID_PROP_TEXTOWNER, 0xf1e2d520, 0x0969, 0x11d3, 0x8d, 0xf0, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_PROP_ATTRIBUTE, 0x34b45670, 0x7526, 0x11d2, 0xa1, 0x47, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_PROP_LANGID, 0x3280ce20, 0x8032, 0x11d2, 0xb6, 0x03, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_PROP_READING, 0x5463f7c0, 0x8e31, 0x11d2, 0xbf, 0x46, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_PROP_COMPOSING, 0xe12ac060, 0xaf15, 0x11d2, 0xaf, 0xc5, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_SYSTEM_FUNCTIONPROVIDER, 0x9a698bb0, 0x0f21, 0x11d3, 0x8d, 0xf1, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(GUID_APP_FUNCTIONPROVIDER, 0x4caef01e, 0x12af, 0x4b0e, 0x9d, 0xb1, 0xa6, 0xec, 0x5b, 0x88, 0x12, 0x08);

DEFINE_GUID(GUID_TFCAT_CATEGORY_OF_TIP, 0x534c48c1, 0x0607, 0x4098, 0xa5, 0x21, 0x4f, 0xc8, 0x99, 0xc7, 0x3e, 0x90);

DEFINE_GUID(GUID_TFCAT_TIP_KEYBOARD, 0x34745c63, 0xb2f0, 0x4784, 0x8b, 0x67, 0x5e, 0x12, 0xc8, 0x70, 0x1a, 0x31);

DEFINE_GUID(GUID_TFCAT_TIP_SPEECH, 0xb5a73cd1, 0x8355, 0x426b, 0xa1, 0x61, 0x25, 0x98, 0x08, 0xf2, 0x6b, 0x14);

DEFINE_GUID(GUID_TFCAT_TIP_HANDWRITING, 0x246ecb87, 0xc2f2, 0x4abe, 0x90, 0x5b, 0xc8, 0xb3, 0x8a, 0xdd, 0x2c, 0x43);

DEFINE_GUID(GUID_TFCAT_PROP_AUDIODATA, 0x9b7be3a9, 0xe8ab, 0x4d47, 0xa8, 0xfe, 0x25, 0x4f, 0xa4, 0x23, 0x43, 0x6d);

DEFINE_GUID(GUID_TFCAT_PROP_INKDATA, 0x7c6a82ae, 0xb0d7, 0x4f14, 0xa7, 0x45, 0x14, 0xf2, 0x8b, 0x00, 0x9d, 0x61);

DEFINE_GUID(GUID_COMPARTMENT_SAPI_AUDIO, 0x51af2086, 0xcc6b, 0x457d, 0xb5, 0xaa, 0x8b, 0x19, 0xdc, 0x29, 0x0a, 0xb4);

DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_DISABLED, 0x71a5b253, 0x1951, 0x466b, 0x9f, 0xbc, 0x9c, 0x88, 0x08, 0xfa, 0x84, 0xf2);

DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_OPENCLOSE, 0x58273aad, 0x01bb, 0x4164, 0x95, 0xc6, 0x75, 0x5b, 0xa0, 0xb5, 0x16, 0x2d);

DEFINE_GUID(GUID_COMPARTMENT_HANDWRITING_OPENCLOSE, 0xf9ae2c6b, 0x1866, 0x4361, 0xaf, 0x72, 0x7a, 0xa3, 0x09, 0x48, 0x89, 0x0e);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_DISABLED, 0x56c5c607, 0x0703, 0x4e59, 0x8e, 0x52, 0xcb, 0xc8, 0x4e, 0x8b, 0xbe, 0x35);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_OPENCLOSE, 0x544d6a63, 0xe2e8, 0x4752, 0xbb, 0xd1, 0x00, 0x09, 0x60, 0xbc, 0xa0, 0x83);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_GLOBALSTATE, 0x2a54fe8e, 0x0d08, 0x460c, 0xa7, 0x5d, 0x87, 0x03, 0x5f, 0xf4, 0x36, 0xc5);

DEFINE_GUID(GUID_COMPARTMENT_CONVERSIONMODEBIAS, 0x5497f516, 0xee91, 0x436e, 0xb9, 0x46, 0xaa, 0x2c, 0x05, 0xf1, 0xac, 0x5b);

DEFINE_GUID(GUID_PROP_MODEBIAS, 0x372e0716, 0x974f, 0x40ac, 0xa0, 0x88, 0x08, 0xcd, 0xc9, 0x2e, 0xbf, 0xbc);

DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_INPUTMODE, 0xb6592511, 0xbcee, 0x4122, 0xa7, 0xc4, 0x09, 0xf4, 0xb3, 0xfa, 0x43, 0x96);

DEFINE_GUID(GUID_MODEBIAS_NONE, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(GUID_MODEBIAS_URLHISTORY, 0x8b0e54d9, 0x63f2, 0x4c68, 0x84, 0xd4, 0x79, 0xae, 0xe7, 0xa5, 0x9f, 0x09);

DEFINE_GUID(GUID_MODEBIAS_FILENAME, 0xd7f707fe, 0x44c6, 0x4fca, 0x8e, 0x76, 0x86, 0xab, 0x50, 0xc7, 0x93, 0x1b);

DEFINE_GUID(GUID_MODEBIAS_READING, 0xe31643a3, 0x6466, 0x4cbf, 0x8d, 0x8b, 0x0b, 0xd4, 0xd8, 0x54, 0x54, 0x61);

DEFINE_GUID(GUID_MODEBIAS_DATETIME, 0xf2bdb372, 0x7f61, 0x4039, 0x92, 0xef, 0x1c, 0x35, 0x59, 0x9f, 0x02, 0x22);

DEFINE_GUID(GUID_MODEBIAS_NAME, 0xfddc10f0, 0xd239, 0x49bf, 0xb8, 0xfc, 0x54, 0x10, 0xca, 0xaa, 0x42, 0x7e);

DEFINE_GUID(GUID_MODEBIAS_CONVERSATION, 0x0f4ec104, 0x1790, 0x443b, 0x95, 0xf1, 0xe1, 0x0f, 0x93, 0x9d, 0x65, 0x46);

DEFINE_GUID(GUID_MODEBIAS_NUMERIC, 0x4021766c, 0xe872, 0x48fd, 0x9c, 0xee, 0x4e, 0xc5, 0xc7, 0x5e, 0x16, 0xc3);

DEFINE_GUID(GUID_MODEBIAS_HIRAGANA, 0xd73d316e, 0x9b91, 0x46f1, 0xa2, 0x80, 0x31, 0x59, 0x7f, 0x52, 0xc6, 0x94);

DEFINE_GUID(GUID_MODEBIAS_KATAKANA, 0x2e0eeddd, 0x3a1a, 0x499e, 0x85, 0x43, 0x3c, 0x7e, 0xe7, 0x94, 0x98, 0x11);

DEFINE_GUID(GUID_MODEBIAS_HANGUL, 0x76ef0541, 0x23b3, 0x4d77, 0xa0, 0x74, 0x69, 0x18, 0x01, 0xcc, 0xea, 0x17);

DEFINE_GUID(GUID_MODEBIAS_CHINESE, 0x7add26de, 0x4328, 0x489b, 0x83, 0xae, 0x64, 0x93, 0x75, 0x0c, 0xad, 0x5c);

DEFINE_GUID(GUID_MODEBIAS_HALFWIDTHKATAKANA, 0x005f6b63, 0x78d4, 0x41cc, 0x88, 0x59, 0x48, 0x5c, 0xa8, 0x21, 0xa7, 0x95);

DEFINE_GUID(GUID_MODEBIAS_FULLWIDTHALPHANUMERIC, 0x81489fb8, 0xb36a, 0x473d, 0x81, 0x46, 0xe4, 0xa2, 0x25, 0x8b, 0x24, 0xae);

DEFINE_GUID(GUID_MODEBIAS_HALFWIDTHALPHANUMERIC, 0xc6f24fc0, 0x4479, 0x46ed, 0x93, 0x8a, 0x60, 0x52, 0xb1, 0x65, 0x3d, 0x3b);

DEFINE_GUID(GUID_MODEBIAS_FULLWIDTHHANGUL, 0xc01ae6c9, 0x45b5, 0x4fd0, 0x9c, 0xb1, 0x9f, 0x4c, 0xeb, 0xc3, 0x9f, 0xea);

DEFINE_GUID(GUID_TFCAT_PROPSTYLE_CUSTOM, 0x24af3031, 0x852d, 0x40a2, 0xbc, 0x09, 0x89, 0x92, 0x89, 0x8c, 0xe7, 0x22);

DEFINE_GUID(GUID_TFCAT_PROPSTYLE_STATIC, 0x565fb8d8, 0x6bd4, 0x4ca1, 0xb2, 0x23, 0x0f, 0x2c, 0xcb, 0x8f, 0x4f, 0x96);

DEFINE_GUID(GUID_TFCAT_PROPSTYLE_STATICCOMPACT, 0x85f9794b, 0x4d19, 0x40d8, 0x88, 0x64, 0x4e, 0x74, 0x73, 0x71, 0xa6, 0x6d);

DEFINE_GUID(GUID_TFCAT_DISPLAYATTRIBUTEPROVIDER, 0x046b8c80, 0x1647, 0x40f7, 0x9b, 0x21, 0xb9, 0x3b, 0x81, 0xaa, 0xbc, 0x1b);

DEFINE_GUID(GUID_TFCAT_DISPLAYATTRIBUTEPROPERTY, 0xb95f181b, 0xea4c, 0x4af1, 0x80, 0x56, 0x7c, 0x32, 0x1a, 0xbb, 0xb0, 0x91);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_DICTATIONSTAT, 0x1edb55cc, 0x58f0, 0x4592, 0xaa, 0xe1, 0xfe, 0x51, 0xf4, 0x3b, 0x95, 0xc5);

DEFINE_GUID(GUID_COMPARTMENT_PERSISTMENUENABLED, 0x575f3783, 0x70c8, 0x47c8, 0xae, 0x5d, 0x91, 0xa0, 0x1a, 0x1f, 0x75, 0x92);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_UI_STATUS, 0xd92016f0, 0x9367, 0x4fe7, 0x9a, 0xbf, 0xbc, 0x59, 0xda, 0xcb, 0xe0, 0xe3);

DEFINE_GUID(GUID_COMPARTMENT_EMPTYCONTEXT, 0xd7487dbf, 0x804e, 0x41c5, 0x89, 0x4d, 0xad, 0x96, 0xfd, 0x4e, 0xea, 0x13);

DEFINE_GUID(GUID_COMPARTMENT_TIPUISTATUS, 0x148ca3ec, 0x0366, 0x401c, 0x8d, 0x75, 0xed, 0x97, 0x8d, 0x85, 0xfb, 0xc9);

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_CFGMENU, 0xfb6c5c2d, 0x4e83, 0x4bb6, 0x91, 0xa2, 0xe0, 0x19, 0xbf, 0xf6, 0x76, 0x2d);

DEFINE_GUID(GUID_LBI_SAPILAYR_CFGMENUBUTTON, 0xd02f24a1, 0x942d, 0x422e, 0x8d, 0x99, 0xb4, 0xf2, 0xad, 0xde, 0xe9, 0x99);

DEFINE_GUID(GUID_TFCAT_TIPCAP_SECUREMODE, 0x49d2f9ce, 0x1f5e, 0x11d7, 0xa6, 0xd3, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_TFCAT_TIPCAP_UIELEMENTENABLED, 0x49d2f9cf, 0x1f5e, 0x11d7, 0xa6, 0xd3, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_TFCAT_TIPCAP_INPUTMODECOMPARTMENT, 0xccf05dd7, 0x4a87, 0x11d7, 0xa6, 0xe2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_TFCAT_TIPCAP_COMLESS, 0x364215d9, 0x75bc, 0x11d7, 0xa6, 0xef, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_TFCAT_TIPCAP_WOW16, 0x364215da, 0x75bc, 0x11d7, 0xa6, 0xef, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION, 0xccf05dd8, 0x4a87, 0x11d7, 0xa6, 0xe2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_INPUTMODE_SENTENCE, 0xccf05dd9, 0x4a87, 0x11d7, 0xa6, 0xe2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_COMPARTMENT_TRANSITORYEXTENSION, 0x8be347f5, 0xc7a0, 0x11d7, 0xb4, 0x08, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_COMPARTMENT_TRANSITORYEXTENSION_DOCUMENTMANAGER, 0x8be347f7, 0xc7a0, 0x11d7, 0xb4, 0x08, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_COMPARTMENT_TRANSITORYEXTENSION_PARENT, 0x8be347f8, 0xc7a0, 0x11d7, 0xb4, 0x08, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(GUID_TFCAT_TRANSITORYEXTENSIONUI, 0x6302de22, 0xa5cf, 0x4b02, 0xbf, 0xe8, 0x4d, 0x72, 0xb2, 0xbe, 0xd3, 0xc6);

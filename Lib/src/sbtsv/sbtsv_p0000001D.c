// Created file "Lib\src\sbtsv\sbtsv_p"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(_ITsSbPluginStubVtbl, 0x00000000, 0x0000, 0x0000, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbResourcePluginStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbLoadBalancingStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbPlacementStubVtbl, 0x00000000, 0x0000, 0x0000, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbOrchestrationStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbEnvironmentStubVtbl, 0x00000000, 0x0000, 0x0000, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbLoadBalanceResultStubVtbl, 0x00000000, 0x0000, 0x0000, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbTargetStubVtbl, 0x00000000, 0x0000, 0x0000, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbSessionStubVtbl, 0x00000000, 0x0000, 0x0000, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbResourceNotificationStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbBaseNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbPluginNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbTargetNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbSessionNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbLoadBalancingNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbPlacementNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbOrchestrationNotifySinkStubVtbl, 0x00000000, 0x0000, 0x0000, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbClientConnectionStubVtbl, 0x00000000, 0x0000, 0x0000, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbProviderStubVtbl, 0x00000000, 0x0000, 0x0000, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbResourcePluginStoreStubVtbl, 0x00000000, 0x0000, 0x0000, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_ITsSbGlobalStoreStubVtbl, 0x00000000, 0x0000, 0x0000, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_sbtsv_ProxyVtblList, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_sbtsv_StubVtblList, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_sbtsv_InterfaceNamesList, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(_sbtsv_BaseIIDList, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(sbtsv_ProxyFileInfo, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

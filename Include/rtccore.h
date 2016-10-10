/*+@@file@@----------------------------------------------------------------*//*!
 \file		rtccore.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:56:35 2016
 \date		Modified on Fri Sep 16 19:56:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __rtccore_h__
#define __rtccore_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRTCClient_FWD_DEFINED__
#define __IRTCClient_FWD_DEFINED__
typedef interface IRTCClient IRTCClient;
#endif
#ifndef __IRTCClient2_FWD_DEFINED__
#define __IRTCClient2_FWD_DEFINED__
typedef interface IRTCClient2 IRTCClient2;
#endif
#ifndef __IRTCClientPresence_FWD_DEFINED__
#define __IRTCClientPresence_FWD_DEFINED__
typedef interface IRTCClientPresence IRTCClientPresence;
#endif
#ifndef __IRTCClientPresence2_FWD_DEFINED__
#define __IRTCClientPresence2_FWD_DEFINED__
typedef interface IRTCClientPresence2 IRTCClientPresence2;
#endif
#ifndef __IRTCClientProvisioning_FWD_DEFINED__
#define __IRTCClientProvisioning_FWD_DEFINED__
typedef interface IRTCClientProvisioning IRTCClientProvisioning;
#endif
#ifndef __IRTCClientProvisioning2_FWD_DEFINED__
#define __IRTCClientProvisioning2_FWD_DEFINED__
typedef interface IRTCClientProvisioning2 IRTCClientProvisioning2;
#endif
#ifndef __IRTCProfile_FWD_DEFINED__
#define __IRTCProfile_FWD_DEFINED__
typedef interface IRTCProfile IRTCProfile;
#endif
#ifndef __IRTCProfile2_FWD_DEFINED__
#define __IRTCProfile2_FWD_DEFINED__
typedef interface IRTCProfile2 IRTCProfile2;
#endif
#ifndef __IRTCSession_FWD_DEFINED__
#define __IRTCSession_FWD_DEFINED__
typedef interface IRTCSession IRTCSession;
#endif
#ifndef __IRTCSession2_FWD_DEFINED__
#define __IRTCSession2_FWD_DEFINED__
typedef interface IRTCSession2 IRTCSession2;
#endif
#ifndef __IRTCSessionCallControl_FWD_DEFINED__
#define __IRTCSessionCallControl_FWD_DEFINED__
typedef interface IRTCSessionCallControl IRTCSessionCallControl;
#endif
#ifndef __IRTCParticipant_FWD_DEFINED__
#define __IRTCParticipant_FWD_DEFINED__
typedef interface IRTCParticipant IRTCParticipant;
#endif
#ifndef __IRTCRoamingEvent_FWD_DEFINED__
#define __IRTCRoamingEvent_FWD_DEFINED__
typedef interface IRTCRoamingEvent IRTCRoamingEvent;
#endif
#ifndef __IRTCProfileEvent_FWD_DEFINED__
#define __IRTCProfileEvent_FWD_DEFINED__
typedef interface IRTCProfileEvent IRTCProfileEvent;
#endif
#ifndef __IRTCProfileEvent2_FWD_DEFINED__
#define __IRTCProfileEvent2_FWD_DEFINED__
typedef interface IRTCProfileEvent2 IRTCProfileEvent2;
#endif
#ifndef __IRTCClientEvent_FWD_DEFINED__
#define __IRTCClientEvent_FWD_DEFINED__
typedef interface IRTCClientEvent IRTCClientEvent;
#endif
#ifndef __IRTCRegistrationStateChangeEvent_FWD_DEFINED__
#define __IRTCRegistrationStateChangeEvent_FWD_DEFINED__
typedef interface IRTCRegistrationStateChangeEvent IRTCRegistrationStateChangeEvent;
#endif
#ifndef __IRTCSessionStateChangeEvent_FWD_DEFINED__
#define __IRTCSessionStateChangeEvent_FWD_DEFINED__
typedef interface IRTCSessionStateChangeEvent IRTCSessionStateChangeEvent;
#endif
#ifndef __IRTCSessionStateChangeEvent2_FWD_DEFINED__
#define __IRTCSessionStateChangeEvent2_FWD_DEFINED__
typedef interface IRTCSessionStateChangeEvent2 IRTCSessionStateChangeEvent2;
#endif
#ifndef __IRTCSessionOperationCompleteEvent_FWD_DEFINED__
#define __IRTCSessionOperationCompleteEvent_FWD_DEFINED__
typedef interface IRTCSessionOperationCompleteEvent IRTCSessionOperationCompleteEvent;
#endif
#ifndef __IRTCSessionOperationCompleteEvent2_FWD_DEFINED__
#define __IRTCSessionOperationCompleteEvent2_FWD_DEFINED__
typedef interface IRTCSessionOperationCompleteEvent2 IRTCSessionOperationCompleteEvent2;
#endif
#ifndef __IRTCParticipantStateChangeEvent_FWD_DEFINED__
#define __IRTCParticipantStateChangeEvent_FWD_DEFINED__
typedef interface IRTCParticipantStateChangeEvent IRTCParticipantStateChangeEvent;
#endif
#ifndef __IRTCMediaEvent_FWD_DEFINED__
#define __IRTCMediaEvent_FWD_DEFINED__
typedef interface IRTCMediaEvent IRTCMediaEvent;
#endif
#ifndef __IRTCIntensityEvent_FWD_DEFINED__
#define __IRTCIntensityEvent_FWD_DEFINED__
typedef interface IRTCIntensityEvent IRTCIntensityEvent;
#endif
#ifndef __IRTCMessagingEvent_FWD_DEFINED__
#define __IRTCMessagingEvent_FWD_DEFINED__
typedef interface IRTCMessagingEvent IRTCMessagingEvent;
#endif
#ifndef __IRTCBuddyEvent_FWD_DEFINED__
#define __IRTCBuddyEvent_FWD_DEFINED__
typedef interface IRTCBuddyEvent IRTCBuddyEvent;
#endif
#ifndef __IRTCBuddyEvent2_FWD_DEFINED__
#define __IRTCBuddyEvent2_FWD_DEFINED__
typedef interface IRTCBuddyEvent2 IRTCBuddyEvent2;
#endif
#ifndef __IRTCWatcherEvent_FWD_DEFINED__
#define __IRTCWatcherEvent_FWD_DEFINED__
typedef interface IRTCWatcherEvent IRTCWatcherEvent;
#endif
#ifndef __IRTCWatcherEvent2_FWD_DEFINED__
#define __IRTCWatcherEvent2_FWD_DEFINED__
typedef interface IRTCWatcherEvent2 IRTCWatcherEvent2;
#endif
#ifndef __IRTCBuddyGroupEvent_FWD_DEFINED__
#define __IRTCBuddyGroupEvent_FWD_DEFINED__
typedef interface IRTCBuddyGroupEvent IRTCBuddyGroupEvent;
#endif
#ifndef __IRTCInfoEvent_FWD_DEFINED__
#define __IRTCInfoEvent_FWD_DEFINED__
typedef interface IRTCInfoEvent IRTCInfoEvent;
#endif
#ifndef __IRTCMediaRequestEvent_FWD_DEFINED__
#define __IRTCMediaRequestEvent_FWD_DEFINED__
typedef interface IRTCMediaRequestEvent IRTCMediaRequestEvent;
#endif
#ifndef __IRTCReInviteEvent_FWD_DEFINED__
#define __IRTCReInviteEvent_FWD_DEFINED__
typedef interface IRTCReInviteEvent IRTCReInviteEvent;
#endif
#ifndef __IRTCPresencePropertyEvent_FWD_DEFINED__
#define __IRTCPresencePropertyEvent_FWD_DEFINED__
typedef interface IRTCPresencePropertyEvent IRTCPresencePropertyEvent;
#endif
#ifndef __IRTCPresenceDataEvent_FWD_DEFINED__
#define __IRTCPresenceDataEvent_FWD_DEFINED__
typedef interface IRTCPresenceDataEvent IRTCPresenceDataEvent;
#endif
#ifndef __IRTCPresenceStatusEvent_FWD_DEFINED__
#define __IRTCPresenceStatusEvent_FWD_DEFINED__
typedef interface IRTCPresenceStatusEvent IRTCPresenceStatusEvent;
#endif
#ifndef __IRTCCollection_FWD_DEFINED__
#define __IRTCCollection_FWD_DEFINED__
typedef interface IRTCCollection IRTCCollection;
#endif
#ifndef __IRTCEnumParticipants_FWD_DEFINED__
#define __IRTCEnumParticipants_FWD_DEFINED__
typedef interface IRTCEnumParticipants IRTCEnumParticipants;
#endif
#ifndef __IRTCEnumProfiles_FWD_DEFINED__
#define __IRTCEnumProfiles_FWD_DEFINED__
typedef interface IRTCEnumProfiles IRTCEnumProfiles;
#endif
#ifndef __IRTCEnumBuddies_FWD_DEFINED__
#define __IRTCEnumBuddies_FWD_DEFINED__
typedef interface IRTCEnumBuddies IRTCEnumBuddies;
#endif
#ifndef __IRTCEnumWatchers_FWD_DEFINED__
#define __IRTCEnumWatchers_FWD_DEFINED__
typedef interface IRTCEnumWatchers IRTCEnumWatchers;
#endif
#ifndef __IRTCEnumGroups_FWD_DEFINED__
#define __IRTCEnumGroups_FWD_DEFINED__
typedef interface IRTCEnumGroups IRTCEnumGroups;
#endif
#ifndef __IRTCPresenceContact_FWD_DEFINED__
#define __IRTCPresenceContact_FWD_DEFINED__
typedef interface IRTCPresenceContact IRTCPresenceContact;
#endif
#ifndef __IRTCBuddy_FWD_DEFINED__
#define __IRTCBuddy_FWD_DEFINED__
typedef interface IRTCBuddy IRTCBuddy;
#endif
#ifndef __IRTCBuddy2_FWD_DEFINED__
#define __IRTCBuddy2_FWD_DEFINED__
typedef interface IRTCBuddy2 IRTCBuddy2;
#endif
#ifndef __IRTCWatcher_FWD_DEFINED__
#define __IRTCWatcher_FWD_DEFINED__
typedef interface IRTCWatcher IRTCWatcher;
#endif
#ifndef __IRTCWatcher2_FWD_DEFINED__
#define __IRTCWatcher2_FWD_DEFINED__
typedef interface IRTCWatcher2 IRTCWatcher2;
#endif
#ifndef __IRTCBuddyGroup_FWD_DEFINED__
#define __IRTCBuddyGroup_FWD_DEFINED__
typedef interface IRTCBuddyGroup IRTCBuddyGroup;
#endif
#ifndef __IRTCEventNotification_FWD_DEFINED__
#define __IRTCEventNotification_FWD_DEFINED__
typedef interface IRTCEventNotification IRTCEventNotification;
#endif
#ifndef __IRTCDispatchEventNotification_FWD_DEFINED__
#define __IRTCDispatchEventNotification_FWD_DEFINED__
typedef interface IRTCDispatchEventNotification IRTCDispatchEventNotification;
#endif
#ifndef __IRTCPortManager_FWD_DEFINED__
#define __IRTCPortManager_FWD_DEFINED__
typedef interface IRTCPortManager IRTCPortManager;
#endif
#ifndef __IRTCSessionPortManagement_FWD_DEFINED__
#define __IRTCSessionPortManagement_FWD_DEFINED__
typedef interface IRTCSessionPortManagement IRTCSessionPortManagement;
#endif
#ifndef __IRTCClientPortManagement_FWD_DEFINED__
#define __IRTCClientPortManagement_FWD_DEFINED__
typedef interface IRTCClientPortManagement IRTCClientPortManagement;
#endif
#ifndef __IRTCUserSearch_FWD_DEFINED__
#define __IRTCUserSearch_FWD_DEFINED__
typedef interface IRTCUserSearch IRTCUserSearch;
#endif
#ifndef __IRTCUserSearchQuery_FWD_DEFINED__
#define __IRTCUserSearchQuery_FWD_DEFINED__
typedef interface IRTCUserSearchQuery IRTCUserSearchQuery;
#endif
#ifndef __IRTCUserSearchResult_FWD_DEFINED__
#define __IRTCUserSearchResult_FWD_DEFINED__
typedef interface IRTCUserSearchResult IRTCUserSearchResult;
#endif
#ifndef __IRTCEnumUserSearchResults_FWD_DEFINED__
#define __IRTCEnumUserSearchResults_FWD_DEFINED__
typedef interface IRTCEnumUserSearchResults IRTCEnumUserSearchResults;
#endif
#ifndef __IRTCUserSearchResultsEvent_FWD_DEFINED__
#define __IRTCUserSearchResultsEvent_FWD_DEFINED__
typedef interface IRTCUserSearchResultsEvent IRTCUserSearchResultsEvent;
#endif
#ifndef __IRTCSessionReferStatusEvent_FWD_DEFINED__
#define __IRTCSessionReferStatusEvent_FWD_DEFINED__
typedef interface IRTCSessionReferStatusEvent IRTCSessionReferStatusEvent;
#endif
#ifndef __IRTCSessionReferredEvent_FWD_DEFINED__
#define __IRTCSessionReferredEvent_FWD_DEFINED__
typedef interface IRTCSessionReferredEvent IRTCSessionReferredEvent;
#endif
#ifndef __IRTCSessionDescriptionManager_FWD_DEFINED__
#define __IRTCSessionDescriptionManager_FWD_DEFINED__
typedef interface IRTCSessionDescriptionManager IRTCSessionDescriptionManager;
#endif
#ifndef __IRTCEnumPresenceDevices_FWD_DEFINED__
#define __IRTCEnumPresenceDevices_FWD_DEFINED__
typedef interface IRTCEnumPresenceDevices IRTCEnumPresenceDevices;
#endif
#ifndef __IRTCPresenceDevice_FWD_DEFINED__
#define __IRTCPresenceDevice_FWD_DEFINED__
typedef interface IRTCPresenceDevice IRTCPresenceDevice;
#endif
#ifndef __IRTCProfile_FWD_DEFINED__
#define __IRTCProfile_FWD_DEFINED__
typedef interface IRTCProfile IRTCProfile;
#endif
#ifndef __IRTCProfile2_FWD_DEFINED__
#define __IRTCProfile2_FWD_DEFINED__
typedef interface IRTCProfile2 IRTCProfile2;
#endif
#ifndef __IRTCEnumProfiles_FWD_DEFINED__
#define __IRTCEnumProfiles_FWD_DEFINED__
typedef interface IRTCEnumProfiles IRTCEnumProfiles;
#endif
#ifndef __IRTCSession_FWD_DEFINED__
#define __IRTCSession_FWD_DEFINED__
typedef interface IRTCSession IRTCSession;
#endif
#ifndef __IRTCSession2_FWD_DEFINED__
#define __IRTCSession2_FWD_DEFINED__
typedef interface IRTCSession2 IRTCSession2;
#endif
#ifndef __IRTCSessionCallControl_FWD_DEFINED__
#define __IRTCSessionCallControl_FWD_DEFINED__
typedef interface IRTCSessionCallControl IRTCSessionCallControl;
#endif
#ifndef __IRTCParticipant_FWD_DEFINED__
#define __IRTCParticipant_FWD_DEFINED__
typedef interface IRTCParticipant IRTCParticipant;
#endif
#ifndef __IRTCEnumParticipants_FWD_DEFINED__
#define __IRTCEnumParticipants_FWD_DEFINED__
typedef interface IRTCEnumParticipants IRTCEnumParticipants;
#endif
#ifndef __IRTCCollection_FWD_DEFINED__
#define __IRTCCollection_FWD_DEFINED__
typedef interface IRTCCollection IRTCCollection;
#endif
#ifndef __IRTCPresenceContact_FWD_DEFINED__
#define __IRTCPresenceContact_FWD_DEFINED__
typedef interface IRTCPresenceContact IRTCPresenceContact;
#endif
#ifndef __IRTCBuddy_FWD_DEFINED__
#define __IRTCBuddy_FWD_DEFINED__
typedef interface IRTCBuddy IRTCBuddy;
#endif
#ifndef __IRTCBuddy2_FWD_DEFINED__
#define __IRTCBuddy2_FWD_DEFINED__
typedef interface IRTCBuddy2 IRTCBuddy2;
#endif
#ifndef __IRTCEnumBuddies_FWD_DEFINED__
#define __IRTCEnumBuddies_FWD_DEFINED__
typedef interface IRTCEnumBuddies IRTCEnumBuddies;
#endif
#ifndef __IRTCWatcher_FWD_DEFINED__
#define __IRTCWatcher_FWD_DEFINED__
typedef interface IRTCWatcher IRTCWatcher;
#endif
#ifndef __IRTCWatcher2_FWD_DEFINED__
#define __IRTCWatcher2_FWD_DEFINED__
typedef interface IRTCWatcher2 IRTCWatcher2;
#endif
#ifndef __IRTCEnumWatchers_FWD_DEFINED__
#define __IRTCEnumWatchers_FWD_DEFINED__
typedef interface IRTCEnumWatchers IRTCEnumWatchers;
#endif
#ifndef __IRTCBuddyGroup_FWD_DEFINED__
#define __IRTCBuddyGroup_FWD_DEFINED__
typedef interface IRTCBuddyGroup IRTCBuddyGroup;
#endif
#ifndef __IRTCEnumGroups_FWD_DEFINED__
#define __IRTCEnumGroups_FWD_DEFINED__
typedef interface IRTCEnumGroups IRTCEnumGroups;
#endif
#ifndef __IRTCUserSearchQuery_FWD_DEFINED__
#define __IRTCUserSearchQuery_FWD_DEFINED__
typedef interface IRTCUserSearchQuery IRTCUserSearchQuery;
#endif
#ifndef __IRTCUserSearchResult_FWD_DEFINED__
#define __IRTCUserSearchResult_FWD_DEFINED__
typedef interface IRTCUserSearchResult IRTCUserSearchResult;
#endif
#ifndef __IRTCEnumUserSearchResults_FWD_DEFINED__
#define __IRTCEnumUserSearchResults_FWD_DEFINED__
typedef interface IRTCEnumUserSearchResults IRTCEnumUserSearchResults;
#endif
#ifndef __IRTCEventNotification_FWD_DEFINED__
#define __IRTCEventNotification_FWD_DEFINED__
typedef interface IRTCEventNotification IRTCEventNotification;
#endif
#ifndef __IRTCClientEvent_FWD_DEFINED__
#define __IRTCClientEvent_FWD_DEFINED__
typedef interface IRTCClientEvent IRTCClientEvent;
#endif
#ifndef __IRTCRegistrationStateChangeEvent_FWD_DEFINED__
#define __IRTCRegistrationStateChangeEvent_FWD_DEFINED__
typedef interface IRTCRegistrationStateChangeEvent IRTCRegistrationStateChangeEvent;
#endif
#ifndef __IRTCSessionStateChangeEvent_FWD_DEFINED__
#define __IRTCSessionStateChangeEvent_FWD_DEFINED__
typedef interface IRTCSessionStateChangeEvent IRTCSessionStateChangeEvent;
#endif
#ifndef __IRTCSessionStateChangeEvent2_FWD_DEFINED__
#define __IRTCSessionStateChangeEvent2_FWD_DEFINED__
typedef interface IRTCSessionStateChangeEvent2 IRTCSessionStateChangeEvent2;
#endif
#ifndef __IRTCSessionOperationCompleteEvent_FWD_DEFINED__
#define __IRTCSessionOperationCompleteEvent_FWD_DEFINED__
typedef interface IRTCSessionOperationCompleteEvent IRTCSessionOperationCompleteEvent;
#endif
#ifndef __IRTCSessionOperationCompleteEvent2_FWD_DEFINED__
#define __IRTCSessionOperationCompleteEvent2_FWD_DEFINED__
typedef interface IRTCSessionOperationCompleteEvent2 IRTCSessionOperationCompleteEvent2;
#endif
#ifndef __IRTCParticipantStateChangeEvent_FWD_DEFINED__
#define __IRTCParticipantStateChangeEvent_FWD_DEFINED__
typedef interface IRTCParticipantStateChangeEvent IRTCParticipantStateChangeEvent;
#endif
#ifndef __IRTCMediaEvent_FWD_DEFINED__
#define __IRTCMediaEvent_FWD_DEFINED__
typedef interface IRTCMediaEvent IRTCMediaEvent;
#endif
#ifndef __IRTCIntensityEvent_FWD_DEFINED__
#define __IRTCIntensityEvent_FWD_DEFINED__
typedef interface IRTCIntensityEvent IRTCIntensityEvent;
#endif
#ifndef __IRTCMessagingEvent_FWD_DEFINED__
#define __IRTCMessagingEvent_FWD_DEFINED__
typedef interface IRTCMessagingEvent IRTCMessagingEvent;
#endif
#ifndef __IRTCBuddyEvent_FWD_DEFINED__
#define __IRTCBuddyEvent_FWD_DEFINED__
typedef interface IRTCBuddyEvent IRTCBuddyEvent;
#endif
#ifndef __IRTCBuddyEvent2_FWD_DEFINED__
#define __IRTCBuddyEvent2_FWD_DEFINED__
typedef interface IRTCBuddyEvent2 IRTCBuddyEvent2;
#endif
#ifndef __IRTCWatcherEvent_FWD_DEFINED__
#define __IRTCWatcherEvent_FWD_DEFINED__
typedef interface IRTCWatcherEvent IRTCWatcherEvent;
#endif
#ifndef __IRTCPortManager_FWD_DEFINED__
#define __IRTCPortManager_FWD_DEFINED__
typedef interface IRTCPortManager IRTCPortManager;
#endif
#ifndef __IRTCSessionPortManagement_FWD_DEFINED__
#define __IRTCSessionPortManagement_FWD_DEFINED__
typedef interface IRTCSessionPortManagement IRTCSessionPortManagement;
#endif
#ifndef __IRTCClientPortManagement_FWD_DEFINED__
#define __IRTCClientPortManagement_FWD_DEFINED__
typedef interface IRTCClientPortManagement IRTCClientPortManagement;
#endif
#ifndef __IRTCWatcherEvent2_FWD_DEFINED__
#define __IRTCWatcherEvent2_FWD_DEFINED__
typedef interface IRTCWatcherEvent2 IRTCWatcherEvent2;
#endif
#ifndef __IRTCBuddyGroupEvent_FWD_DEFINED__
#define __IRTCBuddyGroupEvent_FWD_DEFINED__
typedef interface IRTCBuddyGroupEvent IRTCBuddyGroupEvent;
#endif
#ifndef __IRTCProfileEvent_FWD_DEFINED__
#define __IRTCProfileEvent_FWD_DEFINED__
typedef interface IRTCProfileEvent IRTCProfileEvent;
#endif
#ifndef __IRTCProfileEvent2_FWD_DEFINED__
#define __IRTCProfileEvent2_FWD_DEFINED__
typedef interface IRTCProfileEvent2 IRTCProfileEvent2;
#endif
#ifndef __IRTCUserSearchResultsEvent_FWD_DEFINED__
#define __IRTCUserSearchResultsEvent_FWD_DEFINED__
typedef interface IRTCUserSearchResultsEvent IRTCUserSearchResultsEvent;
#endif
#ifndef __IRTCInfoEvent_FWD_DEFINED__
#define __IRTCInfoEvent_FWD_DEFINED__
typedef interface IRTCInfoEvent IRTCInfoEvent;
#endif
#ifndef __IRTCRoamingEvent_FWD_DEFINED__
#define __IRTCRoamingEvent_FWD_DEFINED__
typedef interface IRTCRoamingEvent IRTCRoamingEvent;
#endif
#ifndef __IRTCMediaRequestEvent_FWD_DEFINED__
#define __IRTCMediaRequestEvent_FWD_DEFINED__
typedef interface IRTCMediaRequestEvent IRTCMediaRequestEvent;
#endif
#ifndef __IRTCReInviteEvent_FWD_DEFINED__
#define __IRTCReInviteEvent_FWD_DEFINED__
typedef interface IRTCReInviteEvent IRTCReInviteEvent;
#endif
#ifndef __IRTCPresencePropertyEvent_FWD_DEFINED__
#define __IRTCPresencePropertyEvent_FWD_DEFINED__
typedef interface IRTCPresencePropertyEvent IRTCPresencePropertyEvent;
#endif
#ifndef __IRTCPresenceDataEvent_FWD_DEFINED__
#define __IRTCPresenceDataEvent_FWD_DEFINED__
typedef interface IRTCPresenceDataEvent IRTCPresenceDataEvent;
#endif
#ifndef __IRTCPresenceStatusEvent_FWD_DEFINED__
#define __IRTCPresenceStatusEvent_FWD_DEFINED__
typedef interface IRTCPresenceStatusEvent IRTCPresenceStatusEvent;
#endif
#ifndef __IRTCSessionReferStatusEvent_FWD_DEFINED__
#define __IRTCSessionReferStatusEvent_FWD_DEFINED__
typedef interface IRTCSessionReferStatusEvent IRTCSessionReferStatusEvent;
#endif
#ifndef __IRTCSessionReferredEvent_FWD_DEFINED__
#define __IRTCSessionReferredEvent_FWD_DEFINED__
typedef interface IRTCSessionReferredEvent IRTCSessionReferredEvent;
#endif
#ifndef __IRTCSessionDescriptionManager_FWD_DEFINED__
#define __IRTCSessionDescriptionManager_FWD_DEFINED__
typedef interface IRTCSessionDescriptionManager IRTCSessionDescriptionManager;
#endif
#ifndef __IRTCEnumPresenceDevices_FWD_DEFINED__
#define __IRTCEnumPresenceDevices_FWD_DEFINED__
typedef interface IRTCEnumPresenceDevices IRTCEnumPresenceDevices;
#endif
#ifndef __IRTCPresenceDevice_FWD_DEFINED__
#define __IRTCPresenceDevice_FWD_DEFINED__
typedef interface IRTCPresenceDevice IRTCPresenceDevice;
#endif
#ifndef __IRTCDispatchEventNotification_FWD_DEFINED__
#define __IRTCDispatchEventNotification_FWD_DEFINED__
typedef interface IRTCDispatchEventNotification IRTCDispatchEventNotification;
#endif
#ifndef __RTCClient_FWD_DEFINED__
#define __RTCClient_FWD_DEFINED__
typedef struct RTCClient RTCClient;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "control.h"
typedef enum RTC_AUDIO_DEVICE
{
	RTCAD_SPEAKER = 0,
	RTCAD_MICROPHONE = (RTCAD_SPEAKER + 1)
} RTC_AUDIO_DEVICE;
typedef enum RTC_VIDEO_DEVICE
{
	RTCVD_RECEIVE = 0,
	RTCVD_PREVIEW = (RTCVD_RECEIVE + 1)
} RTC_VIDEO_DEVICE;
typedef enum RTC_EVENT
{
	RTCE_CLIENT = 0,
	RTCE_REGISTRATION_STATE_CHANGE = (RTCE_CLIENT + 1),
	RTCE_SESSION_STATE_CHANGE = (RTCE_REGISTRATION_STATE_CHANGE + 1),
	RTCE_SESSION_OPERATION_COMPLETE = (RTCE_SESSION_STATE_CHANGE + 1),
	RTCE_PARTICIPANT_STATE_CHANGE = (RTCE_SESSION_OPERATION_COMPLETE + 1),
	RTCE_MEDIA = (RTCE_PARTICIPANT_STATE_CHANGE + 1),
	RTCE_INTENSITY = (RTCE_MEDIA + 1),
	RTCE_MESSAGING = (RTCE_INTENSITY + 1),
	RTCE_BUDDY = (RTCE_MESSAGING + 1),
	RTCE_WATCHER = (RTCE_BUDDY + 1),
	RTCE_PROFILE = (RTCE_WATCHER + 1),
	RTCE_USERSEARCH = (RTCE_PROFILE + 1),
	RTCE_INFO = (RTCE_USERSEARCH + 1),
	RTCE_GROUP = (RTCE_INFO + 1),
	RTCE_MEDIA_REQUEST = (RTCE_GROUP + 1),
	RTCE_ROAMING = (RTCE_MEDIA_REQUEST + 1),
	RTCE_PRESENCE_PROPERTY = (RTCE_ROAMING + 1),
	RTCE_PRESENCE_DATA = (RTCE_PRESENCE_PROPERTY + 1),
	RTCE_PRESENCE_STATUS = (RTCE_PRESENCE_DATA + 1),
	RTCE_SESSION_REFER_STATUS = (RTCE_PRESENCE_STATUS + 1),
	RTCE_SESSION_REFERRED = (RTCE_SESSION_REFER_STATUS + 1),
	RTCE_REINVITE = (RTCE_SESSION_REFERRED + 1)
} RTC_EVENT;
typedef enum RTC_LISTEN_MODE
{
	RTCLM_NONE = 0,
	RTCLM_DYNAMIC = (RTCLM_NONE + 1),
	RTCLM_BOTH = (RTCLM_DYNAMIC + 1)
} RTC_LISTEN_MODE;
typedef enum RTC_CLIENT_EVENT_TYPE
{
	RTCCET_VOLUME_CHANGE = 0,
	RTCCET_DEVICE_CHANGE = (RTCCET_VOLUME_CHANGE + 1),
	RTCCET_NETWORK_QUALITY_CHANGE = (RTCCET_DEVICE_CHANGE + 1),
	RTCCET_ASYNC_CLEANUP_DONE = (RTCCET_NETWORK_QUALITY_CHANGE + 1)
} RTC_CLIENT_EVENT_TYPE;
typedef enum RTC_BUDDY_EVENT_TYPE
{
	RTCBET_BUDDY_ADD = 0,
	RTCBET_BUDDY_REMOVE = (RTCBET_BUDDY_ADD + 1),
	RTCBET_BUDDY_UPDATE = (RTCBET_BUDDY_REMOVE + 1),
	RTCBET_BUDDY_STATE_CHANGE = (RTCBET_BUDDY_UPDATE + 1),
	RTCBET_BUDDY_ROAMED = (RTCBET_BUDDY_STATE_CHANGE + 1),
	RTCBET_BUDDY_SUBSCRIBED = (RTCBET_BUDDY_ROAMED + 1)
} RTC_BUDDY_EVENT_TYPE;
typedef enum RTC_WATCHER_EVENT_TYPE
{
	RTCWET_WATCHER_ADD = 0,
	RTCWET_WATCHER_REMOVE = (RTCWET_WATCHER_ADD + 1),
	RTCWET_WATCHER_UPDATE = (RTCWET_WATCHER_REMOVE + 1),
	RTCWET_WATCHER_OFFERING = (RTCWET_WATCHER_UPDATE + 1),
	RTCWET_WATCHER_ROAMED = (RTCWET_WATCHER_OFFERING + 1)
} RTC_WATCHER_EVENT_TYPE;
typedef enum RTC_GROUP_EVENT_TYPE
{
	RTCGET_GROUP_ADD = 0,
	RTCGET_GROUP_REMOVE = (RTCGET_GROUP_ADD + 1),
	RTCGET_GROUP_UPDATE = (RTCGET_GROUP_REMOVE + 1),
	RTCGET_GROUP_BUDDY_ADD = (RTCGET_GROUP_UPDATE + 1),
	RTCGET_GROUP_BUDDY_REMOVE = (RTCGET_GROUP_BUDDY_ADD + 1),
	RTCGET_GROUP_ROAMED = (RTCGET_GROUP_BUDDY_REMOVE + 1)
} RTC_GROUP_EVENT_TYPE;
typedef enum RTC_TERMINATE_REASON
{
	RTCTR_NORMAL = 0,
	RTCTR_DND = (RTCTR_NORMAL + 1),
	RTCTR_BUSY = (RTCTR_DND + 1),
	RTCTR_REJECT = (RTCTR_BUSY + 1),
	RTCTR_TIMEOUT = (RTCTR_REJECT + 1),
	RTCTR_SHUTDOWN = (RTCTR_TIMEOUT + 1),
	RTCTR_INSUFFICIENT_SECURITY_LEVEL = (RTCTR_SHUTDOWN + 1),
	RTCTR_NOT_SUPPORTED = (RTCTR_INSUFFICIENT_SECURITY_LEVEL + 1)
} RTC_TERMINATE_REASON;
typedef enum RTC_REGISTRATION_STATE
{
	RTCRS_NOT_REGISTERED = 0,
	RTCRS_REGISTERING = (RTCRS_NOT_REGISTERED + 1),
	RTCRS_REGISTERED = (RTCRS_REGISTERING + 1),
	RTCRS_REJECTED = (RTCRS_REGISTERED + 1),
	RTCRS_UNREGISTERING = (RTCRS_REJECTED + 1),
	RTCRS_ERROR = (RTCRS_UNREGISTERING + 1),
	RTCRS_LOGGED_OFF = (RTCRS_ERROR + 1),
	RTCRS_LOCAL_PA_LOGGED_OFF = (RTCRS_LOGGED_OFF + 1),
	RTCRS_REMOTE_PA_LOGGED_OFF = (RTCRS_LOCAL_PA_LOGGED_OFF + 1)
} RTC_REGISTRATION_STATE;
typedef enum RTC_SESSION_STATE
{
	RTCSS_IDLE = 0,
	RTCSS_INCOMING = (RTCSS_IDLE + 1),
	RTCSS_ANSWERING = (RTCSS_INCOMING + 1),
	RTCSS_INPROGRESS = (RTCSS_ANSWERING + 1),
	RTCSS_CONNECTED = (RTCSS_INPROGRESS + 1),
	RTCSS_DISCONNECTED = (RTCSS_CONNECTED + 1),
	RTCSS_HOLD = (RTCSS_DISCONNECTED + 1),
	RTCSS_REFER = (RTCSS_HOLD + 1)
} RTC_SESSION_STATE;
typedef enum RTC_PARTICIPANT_STATE
{
	RTCPS_IDLE = 0,
	RTCPS_PENDING = (RTCPS_IDLE + 1),
	RTCPS_INCOMING = (RTCPS_PENDING + 1),
	RTCPS_ANSWERING = (RTCPS_INCOMING + 1),
	RTCPS_INPROGRESS = (RTCPS_ANSWERING + 1),
	RTCPS_ALERTING = (RTCPS_INPROGRESS + 1),
	RTCPS_CONNECTED = (RTCPS_ALERTING + 1),
	RTCPS_DISCONNECTING = (RTCPS_CONNECTED + 1),
	RTCPS_DISCONNECTED = (RTCPS_DISCONNECTING + 1)
} RTC_PARTICIPANT_STATE;
typedef enum RTC_WATCHER_STATE
{
	RTCWS_UNKNOWN = 0,
	RTCWS_OFFERING = (RTCWS_UNKNOWN + 1),
	RTCWS_ALLOWED = (RTCWS_OFFERING + 1),
	RTCWS_BLOCKED = (RTCWS_ALLOWED + 1),
	RTCWS_DENIED = (RTCWS_BLOCKED + 1),
	RTCWS_PROMPT = (RTCWS_DENIED + 1)
} RTC_WATCHER_STATE;
typedef enum RTC_ACE_SCOPE
{
	RTCAS_SCOPE_USER = 0,
	RTCAS_SCOPE_DOMAIN = (RTCAS_SCOPE_USER + 1),
	RTCAS_SCOPE_ALL = (RTCAS_SCOPE_DOMAIN + 1)
} RTC_ACE_SCOPE;
typedef enum RTC_OFFER_WATCHER_MODE
{
	RTCOWM_OFFER_WATCHER_EVENT = 0,
	RTCOWM_AUTOMATICALLY_ADD_WATCHER = (RTCOWM_OFFER_WATCHER_EVENT + 1)
} RTC_OFFER_WATCHER_MODE;
typedef enum RTC_WATCHER_MATCH_MODE
{
	RTCWMM_EXACT_MATCH = 0,
	RTCWMM_BEST_ACE_MATCH = (RTCWMM_EXACT_MATCH + 1)
} RTC_WATCHER_MATCH_MODE;
typedef enum RTC_PRIVACY_MODE
{
	RTCPM_BLOCK_LIST_EXCLUDED = 0,
	RTCPM_ALLOW_LIST_ONLY = (RTCPM_BLOCK_LIST_EXCLUDED + 1)
} RTC_PRIVACY_MODE;
typedef enum RTC_SESSION_TYPE
{
	RTCST_PC_TO_PC = 0,
	RTCST_PC_TO_PHONE = (RTCST_PC_TO_PC + 1),
	RTCST_PHONE_TO_PHONE = (RTCST_PC_TO_PHONE + 1),
	RTCST_IM = (RTCST_PHONE_TO_PHONE + 1),
	RTCST_MULTIPARTY_IM = (RTCST_IM + 1),
	RTCST_APPLICATION = (RTCST_MULTIPARTY_IM + 1)
} RTC_SESSION_TYPE;
typedef enum RTC_PRESENCE_STATUS
{
	RTCXS_PRESENCE_OFFLINE = 0,
	RTCXS_PRESENCE_ONLINE = (RTCXS_PRESENCE_OFFLINE + 1),
	RTCXS_PRESENCE_AWAY = (RTCXS_PRESENCE_ONLINE + 1),
	RTCXS_PRESENCE_IDLE = (RTCXS_PRESENCE_AWAY + 1),
	RTCXS_PRESENCE_BUSY = (RTCXS_PRESENCE_IDLE + 1),
	RTCXS_PRESENCE_BE_RIGHT_BACK = (RTCXS_PRESENCE_BUSY + 1),
	RTCXS_PRESENCE_ON_THE_PHONE = (RTCXS_PRESENCE_BE_RIGHT_BACK + 1),
	RTCXS_PRESENCE_OUT_TO_LUNCH = (RTCXS_PRESENCE_ON_THE_PHONE + 1)
} RTC_PRESENCE_STATUS;
typedef enum RTC_BUDDY_SUBSCRIPTION_TYPE
{
	RTCBT_SUBSCRIBED = 0,
	RTCBT_ALWAYS_OFFLINE = (RTCBT_SUBSCRIBED + 1),
	RTCBT_ALWAYS_ONLINE = (RTCBT_ALWAYS_OFFLINE + 1),
	RTCBT_POLL = (RTCBT_ALWAYS_ONLINE + 1)
} RTC_BUDDY_SUBSCRIPTION_TYPE;
typedef enum RTC_MEDIA_EVENT_TYPE
{
	RTCMET_STOPPED = 0,
	RTCMET_STARTED = (RTCMET_STOPPED + 1),
	RTCMET_FAILED = (RTCMET_STARTED + 1)
} RTC_MEDIA_EVENT_TYPE;
typedef enum RTC_MEDIA_EVENT_REASON
{
	RTCMER_NORMAL = 0,
	RTCMER_HOLD = (RTCMER_NORMAL + 1),
	RTCMER_TIMEOUT = (RTCMER_HOLD + 1),
	RTCMER_BAD_DEVICE = (RTCMER_TIMEOUT + 1),
	RTCMER_NO_PORT = (RTCMER_BAD_DEVICE + 1),
	RTCMER_PORT_MAPPING_FAILED = (RTCMER_NO_PORT + 1),
	RTCMER_REMOTE_REQUEST = (RTCMER_PORT_MAPPING_FAILED + 1)
} RTC_MEDIA_EVENT_REASON;
typedef enum RTC_MESSAGING_EVENT_TYPE
{
	RTCMSET_MESSAGE = 0,
	RTCMSET_STATUS = (RTCMSET_MESSAGE + 1)
} RTC_MESSAGING_EVENT_TYPE;
typedef enum RTC_MESSAGING_USER_STATUS
{
	RTCMUS_IDLE = 0,
	RTCMUS_TYPING = (RTCMUS_IDLE + 1)
} RTC_MESSAGING_USER_STATUS;
typedef enum RTC_DTMF
{
	RTC_DTMF_0 = 0,
	RTC_DTMF_1 = (RTC_DTMF_0 + 1),
	RTC_DTMF_2 = (RTC_DTMF_1 + 1),
	RTC_DTMF_3 = (RTC_DTMF_2 + 1),
	RTC_DTMF_4 = (RTC_DTMF_3 + 1),
	RTC_DTMF_5 = (RTC_DTMF_4 + 1),
	RTC_DTMF_6 = (RTC_DTMF_5 + 1),
	RTC_DTMF_7 = (RTC_DTMF_6 + 1),
	RTC_DTMF_8 = (RTC_DTMF_7 + 1),
	RTC_DTMF_9 = (RTC_DTMF_8 + 1),
	RTC_DTMF_STAR = (RTC_DTMF_9 + 1),
	RTC_DTMF_POUND = (RTC_DTMF_STAR + 1),
	RTC_DTMF_A = (RTC_DTMF_POUND + 1),
	RTC_DTMF_B = (RTC_DTMF_A + 1),
	RTC_DTMF_C = (RTC_DTMF_B + 1),
	RTC_DTMF_D = (RTC_DTMF_C + 1),
	RTC_DTMF_FLASH = (RTC_DTMF_D + 1)
} RTC_DTMF;
typedef enum RTC_PROVIDER_URI
{
	RTCPU_URIHOMEPAGE = 0,
	RTCPU_URIHELPDESK = (RTCPU_URIHOMEPAGE + 1),
	RTCPU_URIPERSONALACCOUNT = (RTCPU_URIHELPDESK + 1),
	RTCPU_URIDISPLAYDURINGCALL = (RTCPU_URIPERSONALACCOUNT + 1),
	RTCPU_URIDISPLAYDURINGIDLE = (RTCPU_URIDISPLAYDURINGCALL + 1)
} RTC_PROVIDER_URI;
typedef enum RTC_RING_TYPE
{
	RTCRT_PHONE = 0,
	RTCRT_MESSAGE = (RTCRT_PHONE + 1),
	RTCRT_RINGBACK = (RTCRT_MESSAGE + 1)
} RTC_RING_TYPE;
typedef enum RTC_T120_APPLET
{
	RTCTA_WHITEBOARD = 0,
	RTCTA_APPSHARING = (RTCTA_WHITEBOARD + 1)
} RTC_T120_APPLET;
typedef enum RTC_PORT_TYPE
{
	RTCPT_AUDIO_RTP = 0,
	RTCPT_AUDIO_RTCP = (RTCPT_AUDIO_RTP + 1),
	RTCPT_VIDEO_RTP = (RTCPT_AUDIO_RTCP + 1),
	RTCPT_VIDEO_RTCP = (RTCPT_VIDEO_RTP + 1),
	RTCPT_SIP = (RTCPT_VIDEO_RTCP + 1)
} RTC_PORT_TYPE;
typedef enum RTC_USER_SEARCH_COLUMN
{
	RTCUSC_URI = 0,
	RTCUSC_DISPLAYNAME = (RTCUSC_URI + 1),
	RTCUSC_TITLE = (RTCUSC_DISPLAYNAME + 1),
	RTCUSC_OFFICE = (RTCUSC_TITLE + 1),
	RTCUSC_PHONE = (RTCUSC_OFFICE + 1),
	RTCUSC_COMPANY = (RTCUSC_PHONE + 1),
	RTCUSC_CITY = (RTCUSC_COMPANY + 1),
	RTCUSC_STATE = (RTCUSC_CITY + 1),
	RTCUSC_COUNTRY = (RTCUSC_STATE + 1),
	RTCUSC_EMAIL = (RTCUSC_COUNTRY + 1)
} RTC_USER_SEARCH_COLUMN;
typedef enum RTC_USER_SEARCH_PREFERENCE
{
	RTCUSP_MAX_MATCHES = 0,
	RTCUSP_TIME_LIMIT = (RTCUSP_MAX_MATCHES + 1)
} RTC_USER_SEARCH_PREFERENCE;
typedef enum RTC_ROAMING_EVENT_TYPE
{
	RTCRET_BUDDY_ROAMING = 0,
	RTCRET_WATCHER_ROAMING = (RTCRET_BUDDY_ROAMING + 1),
	RTCRET_PRESENCE_ROAMING = (RTCRET_WATCHER_ROAMING + 1),
	RTCRET_PROFILE_ROAMING = (RTCRET_PRESENCE_ROAMING + 1),
	RTCRET_WPENDING_ROAMING = (RTCRET_PROFILE_ROAMING + 1)
} RTC_ROAMING_EVENT_TYPE;
typedef enum RTC_PROFILE_EVENT_TYPE
{
	RTCPFET_PROFILE_GET = 0,
	RTCPFET_PROFILE_UPDATE = (RTCPFET_PROFILE_GET + 1)
} RTC_PROFILE_EVENT_TYPE;
typedef enum RTC_ANSWER_MODE
{
	RTCAM_OFFER_SESSION_EVENT = 0,
	RTCAM_AUTOMATICALLY_ACCEPT = (RTCAM_OFFER_SESSION_EVENT + 1),
	RTCAM_AUTOMATICALLY_REJECT = (RTCAM_AUTOMATICALLY_ACCEPT + 1),
	RTCAM_NOT_SUPPORTED = (RTCAM_AUTOMATICALLY_REJECT + 1)
} RTC_ANSWER_MODE;
typedef enum RTC_SESSION_REFER_STATUS
{
	RTCSRS_REFERRING = 0,
	RTCSRS_ACCEPTED = (RTCSRS_REFERRING + 1),
	RTCSRS_ERROR = (RTCSRS_ACCEPTED + 1),
	RTCSRS_REJECTED = (RTCSRS_ERROR + 1),
	RTCSRS_DROPPED = (RTCSRS_REJECTED + 1),
	RTCSRS_DONE = (RTCSRS_DROPPED + 1)
} RTC_SESSION_REFER_STATUS;
typedef enum RTC_PRESENCE_PROPERTY
{
	RTCPP_PHONENUMBER = 0,
	RTCPP_DISPLAYNAME = (RTCPP_PHONENUMBER + 1),
	RTCPP_EMAIL = (RTCPP_DISPLAYNAME + 1),
	RTCPP_DEVICE_NAME = (RTCPP_EMAIL + 1),
	RTCPP_MULTIPLE = (RTCPP_DEVICE_NAME + 1)
} RTC_PRESENCE_PROPERTY;
typedef enum RTC_SECURITY_TYPE
{
	RTCSECT_AUDIO_VIDEO_MEDIA_ENCRYPTION = 0,
	RTCSECT_T120_MEDIA_ENCRYPTION = (RTCSECT_AUDIO_VIDEO_MEDIA_ENCRYPTION + 1)
} RTC_SECURITY_TYPE;
typedef enum RTC_SECURITY_LEVEL
{
	RTCSECL_UNSUPPORTED = 1,
	RTCSECL_SUPPORTED = (RTCSECL_UNSUPPORTED + 1),
	RTCSECL_REQUIRED = (RTCSECL_SUPPORTED + 1)
} RTC_SECURITY_LEVEL;
typedef enum RTC_REINVITE_STATE
{
	RTCRIN_INCOMING = 0,
	RTCRIN_SUCCEEDED = (RTCRIN_INCOMING + 1),
	RTCRIN_FAIL = (RTCRIN_SUCCEEDED + 1)
} RTC_REINVITE_STATE;
#define RTCCS_FORCE_PROFILE          0x00000001
#define RTCCS_FAIL_ON_REDIRECT       0x00000002
#define RTCMT_AUDIO_SEND     0x00000001
#define RTCMT_AUDIO_RECEIVE  0x00000002
#define RTCMT_VIDEO_SEND     0x00000004
#define RTCMT_VIDEO_RECEIVE  0x00000008
#define RTCMT_T120_SENDRECV  0x00000010
#define RTCMT_ALL_RTP   ( RTCMT_AUDIO_SEND    | RTCMT_AUDIO_RECEIVE  | RTCMT_VIDEO_SEND  | RTCMT_VIDEO_RECEIVE )
#define RTCMT_ALL       ( RTCMT_ALL_RTP    | RTCMT_T120_SENDRECV  )
#define RTCSI_PC_TO_PC       0x00000001
#define RTCSI_PC_TO_PHONE    0x00000002
#define RTCSI_PHONE_TO_PHONE 0x00000004
#define RTCSI_IM             0x00000008
#define RTCSI_MULTIPARTY_IM  0x00000010
#define RTCSI_APPLICATION	0x00000020
#define RTCTR_UDP            0x00000001
#define RTCTR_TCP            0x00000002
#define RTCTR_TLS            0x00000004
#define RTCAU_BASIC                  0x00000001
#define RTCAU_DIGEST                 0x00000002
#define RTCAU_NTLM                   0x00000004
#define RTCAU_KERBEROS               0x00000008
#define RTCAU_USE_LOGON_CRED         0x00010000
#define RTCRF_REGISTER_INVITE_SESSIONS   0x00000001
#define RTCRF_REGISTER_MESSAGE_SESSIONS  0x00000002
#define RTCRF_REGISTER_PRESENCE          0x00000004
#define RTCRF_REGISTER_NOTIFY            0x00000008
#define RTCRF_REGISTER_ALL               0x0000000F
#define RTCRMF_BUDDY_ROAMING              0x00000001
#define RTCRMF_WATCHER_ROAMING            0x00000002
#define RTCRMF_PRESENCE_ROAMING           0x00000004
#define RTCRMF_PROFILE_ROAMING            0x00000008
#define RTCRMF_ALL_ROAMING                0x0000000F
#define RTCEF_CLIENT                     0x00000001
#define RTCEF_REGISTRATION_STATE_CHANGE  0x00000002
#define RTCEF_SESSION_STATE_CHANGE       0x00000004
#define RTCEF_SESSION_OPERATION_COMPLETE 0x00000008
#define RTCEF_PARTICIPANT_STATE_CHANGE   0x00000010
#define RTCEF_MEDIA                      0x00000020
#define RTCEF_INTENSITY                  0x00000040
#define RTCEF_MESSAGING                  0x00000080
#define RTCEF_BUDDY                      0x00000100
#define RTCEF_WATCHER                    0x00000200
#define RTCEF_PROFILE                    0x00000400
#define RTCEF_USERSEARCH                 0x00000800
#define RTCEF_INFO                       0x00001000
#define RTCEF_GROUP                      0x00002000
#define RTCEF_MEDIA_REQUEST              0x00004000
#define RTCEF_ROAMING                    0x00010000
#define RTCEF_PRESENCE_PROPERTY          0x00020000
#define RTCEF_BUDDY2                     0x00040000
#define RTCEF_WATCHER2                   0x00080000
#define RTCEF_SESSION_REFER_STATUS       0x00100000
#define RTCEF_SESSION_REFERRED           0x00200000
#define RTCEF_REINVITE                   0x00400000
#define RTCEF_PRESENCE_DATA              0x00800000
#define RTCEF_PRESENCE_STATUS            0x01000000
#define RTCEF_ALL                        0x01FFFFFF
#define RTCIF_DISABLE_MEDIA                          0x00000001
#define RTCIF_DISABLE_UPNP                           0x00000002
#define RTCIF_ENABLE_SERVER_CLASS                    0x00000004
#define RTCIF_DISABLE_STRICT_DNS                     0x00000008
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0000_v0_0_s_ifspec;
#ifndef __IRTCClient_INTERFACE_DEFINED__
#define __IRTCClient_INTERFACE_DEFINED__
extern const IID IID_IRTCClient;
typedef struct IRTCClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClient *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClient * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IRTCClient * This);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IRTCClient * This);
	HRESULT(STDMETHODCALLTYPE * PrepareForShutdown) (IRTCClient * This);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (IRTCClient * This, long lFilter);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (IRTCClient * This, long *plFilter);
	HRESULT(STDMETHODCALLTYPE * SetPreferredMediaTypes) (IRTCClient * This, long lMediaTypes, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_PreferredMediaTypes) (IRTCClient * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * get_MediaCapabilities) (IRTCClient * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IRTCClient * This, RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile * pProfile, long lFlags, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * put_ListenForIncomingSessions) (IRTCClient * This, RTC_LISTEN_MODE enListen);
	HRESULT(STDMETHODCALLTYPE * get_ListenForIncomingSessions) (IRTCClient * This, RTC_LISTEN_MODE * penListen);
	HRESULT(STDMETHODCALLTYPE * get_NetworkAddresses) (IRTCClient * This, VARIANT_BOOL fTCP, VARIANT_BOOL fExternal, VARIANT * pvAddresses);
	HRESULT(STDMETHODCALLTYPE * put_Volume) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_Volume) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_AudioMuted) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL fMuted);
	HRESULT(STDMETHODCALLTYPE * get_AudioMuted) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL * pfMuted);
	HRESULT(STDMETHODCALLTYPE * get_IVideoWindow) (IRTCClient * This, RTC_VIDEO_DEVICE enDevice, IVideoWindow ** ppIVideoWindow);
	HRESULT(STDMETHODCALLTYPE * put_PreferredAudioDevice) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_PreferredAudioDevice) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * put_PreferredVolume) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_PreferredVolume) (IRTCClient * This, RTC_AUDIO_DEVICE enDevice, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_PreferredAEC) (IRTCClient * This, VARIANT_BOOL bEnable);
	HRESULT(STDMETHODCALLTYPE * get_PreferredAEC) (IRTCClient * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_PreferredVideoDevice) (IRTCClient * This, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_PreferredVideoDevice) (IRTCClient * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_ActiveMedia) (IRTCClient * This, long *plMediaType);
	HRESULT(STDMETHODCALLTYPE * put_MaxBitrate) (IRTCClient * This, long lMaxBitrate);
	HRESULT(STDMETHODCALLTYPE * get_MaxBitrate) (IRTCClient * This, long *plMaxBitrate);
	HRESULT(STDMETHODCALLTYPE * put_TemporalSpatialTradeOff) (IRTCClient * This, long lValue);
	HRESULT(STDMETHODCALLTYPE * get_TemporalSpatialTradeOff) (IRTCClient * This, long *plValue);
	HRESULT(STDMETHODCALLTYPE * get_NetworkQuality) (IRTCClient * This, long *plNetworkQuality);
	HRESULT(STDMETHODCALLTYPE * StartT120Applet) (IRTCClient * This, RTC_T120_APPLET enApplet);
	HRESULT(STDMETHODCALLTYPE * StopT120Applets) (IRTCClient * This);
	HRESULT(STDMETHODCALLTYPE * get_IsT120AppletRunning) (IRTCClient * This, RTC_T120_APPLET enApplet, VARIANT_BOOL * pfRunning);
	HRESULT(STDMETHODCALLTYPE * get_LocalUserURI) (IRTCClient * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * put_LocalUserURI) (IRTCClient * This, BSTR bstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_LocalUserName) (IRTCClient * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * put_LocalUserName) (IRTCClient * This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE * PlayRing) (IRTCClient * This, RTC_RING_TYPE enType, VARIANT_BOOL bPlay);
	HRESULT(STDMETHODCALLTYPE * SendDTMF) (IRTCClient * This, RTC_DTMF enDTMF);
	HRESULT(STDMETHODCALLTYPE * InvokeTuningWizard) (IRTCClient * This, OAHWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * get_IsTuned) (IRTCClient * This, VARIANT_BOOL * pfTuned);
	END_INTERFACE
}  IRTCClientVtbl;
interface IRTCClient
{
	CONST_VTBL struct IRTCClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClient_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClient_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClient_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClient_Initialize(This) ( (This)->lpVtbl -> Initialize(This) )
#define IRTCClient_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define IRTCClient_PrepareForShutdown(This) ( (This)->lpVtbl -> PrepareForShutdown(This) )
#define IRTCClient_put_EventFilter(This,lFilter) ( (This)->lpVtbl -> put_EventFilter(This,lFilter) )
#define IRTCClient_get_EventFilter(This,plFilter) ( (This)->lpVtbl -> get_EventFilter(This,plFilter) )
#define IRTCClient_SetPreferredMediaTypes(This,lMediaTypes,fPersistent) ( (This)->lpVtbl -> SetPreferredMediaTypes(This,lMediaTypes,fPersistent) )
#define IRTCClient_get_PreferredMediaTypes(This,plMediaTypes) ( (This)->lpVtbl -> get_PreferredMediaTypes(This,plMediaTypes) )
#define IRTCClient_get_MediaCapabilities(This,plMediaTypes) ( (This)->lpVtbl -> get_MediaCapabilities(This,plMediaTypes) )
#define IRTCClient_CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) ( (This)->lpVtbl -> CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) )
#define IRTCClient_put_ListenForIncomingSessions(This,enListen) ( (This)->lpVtbl -> put_ListenForIncomingSessions(This,enListen) )
#define IRTCClient_get_ListenForIncomingSessions(This,penListen) ( (This)->lpVtbl -> get_ListenForIncomingSessions(This,penListen) )
#define IRTCClient_get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) ( (This)->lpVtbl -> get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) )
#define IRTCClient_put_Volume(This,enDevice,lVolume) ( (This)->lpVtbl -> put_Volume(This,enDevice,lVolume) )
#define IRTCClient_get_Volume(This,enDevice,plVolume) ( (This)->lpVtbl -> get_Volume(This,enDevice,plVolume) )
#define IRTCClient_put_AudioMuted(This,enDevice,fMuted) ( (This)->lpVtbl -> put_AudioMuted(This,enDevice,fMuted) )
#define IRTCClient_get_AudioMuted(This,enDevice,pfMuted) ( (This)->lpVtbl -> get_AudioMuted(This,enDevice,pfMuted) )
#define IRTCClient_get_IVideoWindow(This,enDevice,ppIVideoWindow) ( (This)->lpVtbl -> get_IVideoWindow(This,enDevice,ppIVideoWindow) )
#define IRTCClient_put_PreferredAudioDevice(This,enDevice,bstrDeviceName) ( (This)->lpVtbl -> put_PreferredAudioDevice(This,enDevice,bstrDeviceName) )
#define IRTCClient_get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) ( (This)->lpVtbl -> get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) )
#define IRTCClient_put_PreferredVolume(This,enDevice,lVolume) ( (This)->lpVtbl -> put_PreferredVolume(This,enDevice,lVolume) )
#define IRTCClient_get_PreferredVolume(This,enDevice,plVolume) ( (This)->lpVtbl -> get_PreferredVolume(This,enDevice,plVolume) )
#define IRTCClient_put_PreferredAEC(This,bEnable) ( (This)->lpVtbl -> put_PreferredAEC(This,bEnable) )
#define IRTCClient_get_PreferredAEC(This,pbEnabled) ( (This)->lpVtbl -> get_PreferredAEC(This,pbEnabled) )
#define IRTCClient_put_PreferredVideoDevice(This,bstrDeviceName) ( (This)->lpVtbl -> put_PreferredVideoDevice(This,bstrDeviceName) )
#define IRTCClient_get_PreferredVideoDevice(This,pbstrDeviceName) ( (This)->lpVtbl -> get_PreferredVideoDevice(This,pbstrDeviceName) )
#define IRTCClient_get_ActiveMedia(This,plMediaType) ( (This)->lpVtbl -> get_ActiveMedia(This,plMediaType) )
#define IRTCClient_put_MaxBitrate(This,lMaxBitrate) ( (This)->lpVtbl -> put_MaxBitrate(This,lMaxBitrate) )
#define IRTCClient_get_MaxBitrate(This,plMaxBitrate) ( (This)->lpVtbl -> get_MaxBitrate(This,plMaxBitrate) )
#define IRTCClient_put_TemporalSpatialTradeOff(This,lValue) ( (This)->lpVtbl -> put_TemporalSpatialTradeOff(This,lValue) )
#define IRTCClient_get_TemporalSpatialTradeOff(This,plValue) ( (This)->lpVtbl -> get_TemporalSpatialTradeOff(This,plValue) )
#define IRTCClient_get_NetworkQuality(This,plNetworkQuality) ( (This)->lpVtbl -> get_NetworkQuality(This,plNetworkQuality) )
#define IRTCClient_StartT120Applet(This,enApplet) ( (This)->lpVtbl -> StartT120Applet(This,enApplet) )
#define IRTCClient_StopT120Applets(This) ( (This)->lpVtbl -> StopT120Applets(This) )
#define IRTCClient_get_IsT120AppletRunning(This,enApplet,pfRunning) ( (This)->lpVtbl -> get_IsT120AppletRunning(This,enApplet,pfRunning) )
#define IRTCClient_get_LocalUserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_LocalUserURI(This,pbstrUserURI) )
#define IRTCClient_put_LocalUserURI(This,bstrUserURI) ( (This)->lpVtbl -> put_LocalUserURI(This,bstrUserURI) )
#define IRTCClient_get_LocalUserName(This,pbstrUserName) ( (This)->lpVtbl -> get_LocalUserName(This,pbstrUserName) )
#define IRTCClient_put_LocalUserName(This,bstrUserName) ( (This)->lpVtbl -> put_LocalUserName(This,bstrUserName) )
#define IRTCClient_PlayRing(This,enType,bPlay) ( (This)->lpVtbl -> PlayRing(This,enType,bPlay) )
#define IRTCClient_SendDTMF(This,enDTMF) ( (This)->lpVtbl -> SendDTMF(This,enDTMF) )
#define IRTCClient_InvokeTuningWizard(This,hwndParent) ( (This)->lpVtbl -> InvokeTuningWizard(This,hwndParent) )
#define IRTCClient_get_IsTuned(This,pfTuned) ( (This)->lpVtbl -> get_IsTuned(This,pfTuned) )
#endif
#endif
#ifndef __IRTCClient2_INTERFACE_DEFINED__
#define __IRTCClient2_INTERFACE_DEFINED__
extern const IID IID_IRTCClient2;
typedef struct IRTCClient2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClient2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClient2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClient2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IRTCClient2 * This);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IRTCClient2 * This);
	HRESULT(STDMETHODCALLTYPE * PrepareForShutdown) (IRTCClient2 * This);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (IRTCClient2 * This, long lFilter);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (IRTCClient2 * This, long *plFilter);
	HRESULT(STDMETHODCALLTYPE * SetPreferredMediaTypes) (IRTCClient2 * This, long lMediaTypes, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_PreferredMediaTypes) (IRTCClient2 * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * get_MediaCapabilities) (IRTCClient2 * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IRTCClient2 * This, RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile * pProfile, long lFlags, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * put_ListenForIncomingSessions) (IRTCClient2 * This, RTC_LISTEN_MODE enListen);
	HRESULT(STDMETHODCALLTYPE * get_ListenForIncomingSessions) (IRTCClient2 * This, RTC_LISTEN_MODE * penListen);
	HRESULT(STDMETHODCALLTYPE * get_NetworkAddresses) (IRTCClient2 * This, VARIANT_BOOL fTCP, VARIANT_BOOL fExternal, VARIANT * pvAddresses);
	HRESULT(STDMETHODCALLTYPE * put_Volume) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_Volume) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_AudioMuted) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL fMuted);
	HRESULT(STDMETHODCALLTYPE * get_AudioMuted) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL * pfMuted);
	HRESULT(STDMETHODCALLTYPE * get_IVideoWindow) (IRTCClient2 * This, RTC_VIDEO_DEVICE enDevice, IVideoWindow ** ppIVideoWindow);
	HRESULT(STDMETHODCALLTYPE * put_PreferredAudioDevice) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_PreferredAudioDevice) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * put_PreferredVolume) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_PreferredVolume) (IRTCClient2 * This, RTC_AUDIO_DEVICE enDevice, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_PreferredAEC) (IRTCClient2 * This, VARIANT_BOOL bEnable);
	HRESULT(STDMETHODCALLTYPE * get_PreferredAEC) (IRTCClient2 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_PreferredVideoDevice) (IRTCClient2 * This, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_PreferredVideoDevice) (IRTCClient2 * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_ActiveMedia) (IRTCClient2 * This, long *plMediaType);
	HRESULT(STDMETHODCALLTYPE * put_MaxBitrate) (IRTCClient2 * This, long lMaxBitrate);
	HRESULT(STDMETHODCALLTYPE * get_MaxBitrate) (IRTCClient2 * This, long *plMaxBitrate);
	HRESULT(STDMETHODCALLTYPE * put_TemporalSpatialTradeOff) (IRTCClient2 * This, long lValue);
	HRESULT(STDMETHODCALLTYPE * get_TemporalSpatialTradeOff) (IRTCClient2 * This, long *plValue);
	HRESULT(STDMETHODCALLTYPE * get_NetworkQuality) (IRTCClient2 * This, long *plNetworkQuality);
	HRESULT(STDMETHODCALLTYPE * StartT120Applet) (IRTCClient2 * This, RTC_T120_APPLET enApplet);
	HRESULT(STDMETHODCALLTYPE * StopT120Applets) (IRTCClient2 * This);
	HRESULT(STDMETHODCALLTYPE * get_IsT120AppletRunning) (IRTCClient2 * This, RTC_T120_APPLET enApplet, VARIANT_BOOL * pfRunning);
	HRESULT(STDMETHODCALLTYPE * get_LocalUserURI) (IRTCClient2 * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * put_LocalUserURI) (IRTCClient2 * This, BSTR bstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_LocalUserName) (IRTCClient2 * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * put_LocalUserName) (IRTCClient2 * This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE * PlayRing) (IRTCClient2 * This, RTC_RING_TYPE enType, VARIANT_BOOL bPlay);
	HRESULT(STDMETHODCALLTYPE * SendDTMF) (IRTCClient2 * This, RTC_DTMF enDTMF);
	HRESULT(STDMETHODCALLTYPE * InvokeTuningWizard) (IRTCClient2 * This, OAHWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * get_IsTuned) (IRTCClient2 * This, VARIANT_BOOL * pfTuned);
	HRESULT(STDMETHODCALLTYPE * put_AnswerMode) (IRTCClient2 * This, RTC_SESSION_TYPE enType, RTC_ANSWER_MODE enMode);
	HRESULT(STDMETHODCALLTYPE * get_AnswerMode) (IRTCClient2 * This, RTC_SESSION_TYPE enType, RTC_ANSWER_MODE * penMode);
	HRESULT(STDMETHODCALLTYPE * InvokeTuningWizardEx) (IRTCClient2 * This, OAHWND hwndParent, VARIANT_BOOL fAllowAudio, VARIANT_BOOL fAllowVideo);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IRTCClient2 * This, long *plVersion);
	HRESULT(STDMETHODCALLTYPE * put_ClientName) (IRTCClient2 * This, BSTR bstrClientName);
	HRESULT(STDMETHODCALLTYPE * put_ClientCurVer) (IRTCClient2 * This, BSTR bstrClientCurVer);
	HRESULT(STDMETHODCALLTYPE * InitializeEx) (IRTCClient2 * This, long lFlags);
	HRESULT(STDMETHODCALLTYPE * CreateSessionWithDescription) (IRTCClient2 * This, BSTR bstrContentType, BSTR bstrSessionDescription, IRTCProfile * pProfile, long lFlags, IRTCSession2 ** ppSession2);
	HRESULT(STDMETHODCALLTYPE * SetSessionDescriptionManager) (IRTCClient2 * This, IRTCSessionDescriptionManager * pSessionDescriptionManager);
	HRESULT(STDMETHODCALLTYPE * put_PreferredSecurityLevel) (IRTCClient2 * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL enSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * get_PreferredSecurityLevel) (IRTCClient2 * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL * penSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * put_AllowedPorts) (IRTCClient2 * This, long lTransport, RTC_LISTEN_MODE enListenMode);
	HRESULT(STDMETHODCALLTYPE * get_AllowedPorts) (IRTCClient2 * This, long lTransport, RTC_LISTEN_MODE * penListenMode);
	END_INTERFACE
}  IRTCClient2Vtbl;
interface IRTCClient2
{
	CONST_VTBL struct IRTCClient2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClient2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClient2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClient2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClient2_Initialize(This) ( (This)->lpVtbl -> Initialize(This) )
#define IRTCClient2_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define IRTCClient2_PrepareForShutdown(This) ( (This)->lpVtbl -> PrepareForShutdown(This) )
#define IRTCClient2_put_EventFilter(This,lFilter) ( (This)->lpVtbl -> put_EventFilter(This,lFilter) )
#define IRTCClient2_get_EventFilter(This,plFilter) ( (This)->lpVtbl -> get_EventFilter(This,plFilter) )
#define IRTCClient2_SetPreferredMediaTypes(This,lMediaTypes,fPersistent) ( (This)->lpVtbl -> SetPreferredMediaTypes(This,lMediaTypes,fPersistent) )
#define IRTCClient2_get_PreferredMediaTypes(This,plMediaTypes) ( (This)->lpVtbl -> get_PreferredMediaTypes(This,plMediaTypes) )
#define IRTCClient2_get_MediaCapabilities(This,plMediaTypes) ( (This)->lpVtbl -> get_MediaCapabilities(This,plMediaTypes) )
#define IRTCClient2_CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) ( (This)->lpVtbl -> CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) )
#define IRTCClient2_put_ListenForIncomingSessions(This,enListen) ( (This)->lpVtbl -> put_ListenForIncomingSessions(This,enListen) )
#define IRTCClient2_get_ListenForIncomingSessions(This,penListen) ( (This)->lpVtbl -> get_ListenForIncomingSessions(This,penListen) )
#define IRTCClient2_get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) ( (This)->lpVtbl -> get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) )
#define IRTCClient2_put_Volume(This,enDevice,lVolume) ( (This)->lpVtbl -> put_Volume(This,enDevice,lVolume) )
#define IRTCClient2_get_Volume(This,enDevice,plVolume) ( (This)->lpVtbl -> get_Volume(This,enDevice,plVolume) )
#define IRTCClient2_put_AudioMuted(This,enDevice,fMuted) ( (This)->lpVtbl -> put_AudioMuted(This,enDevice,fMuted) )
#define IRTCClient2_get_AudioMuted(This,enDevice,pfMuted) ( (This)->lpVtbl -> get_AudioMuted(This,enDevice,pfMuted) )
#define IRTCClient2_get_IVideoWindow(This,enDevice,ppIVideoWindow) ( (This)->lpVtbl -> get_IVideoWindow(This,enDevice,ppIVideoWindow) )
#define IRTCClient2_put_PreferredAudioDevice(This,enDevice,bstrDeviceName) ( (This)->lpVtbl -> put_PreferredAudioDevice(This,enDevice,bstrDeviceName) )
#define IRTCClient2_get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) ( (This)->lpVtbl -> get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) )
#define IRTCClient2_put_PreferredVolume(This,enDevice,lVolume) ( (This)->lpVtbl -> put_PreferredVolume(This,enDevice,lVolume) )
#define IRTCClient2_get_PreferredVolume(This,enDevice,plVolume) ( (This)->lpVtbl -> get_PreferredVolume(This,enDevice,plVolume) )
#define IRTCClient2_put_PreferredAEC(This,bEnable) ( (This)->lpVtbl -> put_PreferredAEC(This,bEnable) )
#define IRTCClient2_get_PreferredAEC(This,pbEnabled) ( (This)->lpVtbl -> get_PreferredAEC(This,pbEnabled) )
#define IRTCClient2_put_PreferredVideoDevice(This,bstrDeviceName) ( (This)->lpVtbl -> put_PreferredVideoDevice(This,bstrDeviceName) )
#define IRTCClient2_get_PreferredVideoDevice(This,pbstrDeviceName) ( (This)->lpVtbl -> get_PreferredVideoDevice(This,pbstrDeviceName) )
#define IRTCClient2_get_ActiveMedia(This,plMediaType) ( (This)->lpVtbl -> get_ActiveMedia(This,plMediaType) )
#define IRTCClient2_put_MaxBitrate(This,lMaxBitrate) ( (This)->lpVtbl -> put_MaxBitrate(This,lMaxBitrate) )
#define IRTCClient2_get_MaxBitrate(This,plMaxBitrate) ( (This)->lpVtbl -> get_MaxBitrate(This,plMaxBitrate) )
#define IRTCClient2_put_TemporalSpatialTradeOff(This,lValue) ( (This)->lpVtbl -> put_TemporalSpatialTradeOff(This,lValue) )
#define IRTCClient2_get_TemporalSpatialTradeOff(This,plValue) ( (This)->lpVtbl -> get_TemporalSpatialTradeOff(This,plValue) )
#define IRTCClient2_get_NetworkQuality(This,plNetworkQuality) ( (This)->lpVtbl -> get_NetworkQuality(This,plNetworkQuality) )
#define IRTCClient2_StartT120Applet(This,enApplet) ( (This)->lpVtbl -> StartT120Applet(This,enApplet) )
#define IRTCClient2_StopT120Applets(This) ( (This)->lpVtbl -> StopT120Applets(This) )
#define IRTCClient2_get_IsT120AppletRunning(This,enApplet,pfRunning) ( (This)->lpVtbl -> get_IsT120AppletRunning(This,enApplet,pfRunning) )
#define IRTCClient2_get_LocalUserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_LocalUserURI(This,pbstrUserURI) )
#define IRTCClient2_put_LocalUserURI(This,bstrUserURI) ( (This)->lpVtbl -> put_LocalUserURI(This,bstrUserURI) )
#define IRTCClient2_get_LocalUserName(This,pbstrUserName) ( (This)->lpVtbl -> get_LocalUserName(This,pbstrUserName) )
#define IRTCClient2_put_LocalUserName(This,bstrUserName) ( (This)->lpVtbl -> put_LocalUserName(This,bstrUserName) )
#define IRTCClient2_PlayRing(This,enType,bPlay) ( (This)->lpVtbl -> PlayRing(This,enType,bPlay) )
#define IRTCClient2_SendDTMF(This,enDTMF) ( (This)->lpVtbl -> SendDTMF(This,enDTMF) )
#define IRTCClient2_InvokeTuningWizard(This,hwndParent) ( (This)->lpVtbl -> InvokeTuningWizard(This,hwndParent) )
#define IRTCClient2_get_IsTuned(This,pfTuned) ( (This)->lpVtbl -> get_IsTuned(This,pfTuned) )
#define IRTCClient2_put_AnswerMode(This,enType,enMode) ( (This)->lpVtbl -> put_AnswerMode(This,enType,enMode) )
#define IRTCClient2_get_AnswerMode(This,enType,penMode) ( (This)->lpVtbl -> get_AnswerMode(This,enType,penMode) )
#define IRTCClient2_InvokeTuningWizardEx(This,hwndParent,fAllowAudio,fAllowVideo) ( (This)->lpVtbl -> InvokeTuningWizardEx(This,hwndParent,fAllowAudio,fAllowVideo) )
#define IRTCClient2_get_Version(This,plVersion) ( (This)->lpVtbl -> get_Version(This,plVersion) )
#define IRTCClient2_put_ClientName(This,bstrClientName) ( (This)->lpVtbl -> put_ClientName(This,bstrClientName) )
#define IRTCClient2_put_ClientCurVer(This,bstrClientCurVer) ( (This)->lpVtbl -> put_ClientCurVer(This,bstrClientCurVer) )
#define IRTCClient2_InitializeEx(This,lFlags) ( (This)->lpVtbl -> InitializeEx(This,lFlags) )
#define IRTCClient2_CreateSessionWithDescription(This,bstrContentType,bstrSessionDescription,pProfile,lFlags,ppSession2) ( (This)->lpVtbl -> CreateSessionWithDescription(This,bstrContentType,bstrSessionDescription,pProfile,lFlags,ppSession2) )
#define IRTCClient2_SetSessionDescriptionManager(This,pSessionDescriptionManager) ( (This)->lpVtbl -> SetSessionDescriptionManager(This,pSessionDescriptionManager) )
#define IRTCClient2_put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) ( (This)->lpVtbl -> put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) )
#define IRTCClient2_get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) ( (This)->lpVtbl -> get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
#define IRTCClient2_put_AllowedPorts(This,lTransport,enListenMode) ( (This)->lpVtbl -> put_AllowedPorts(This,lTransport,enListenMode) )
#define IRTCClient2_get_AllowedPorts(This,lTransport,penListenMode) ( (This)->lpVtbl -> get_AllowedPorts(This,lTransport,penListenMode) )
#endif
#endif
#ifndef __IRTCClientPresence_INTERFACE_DEFINED__
#define __IRTCClientPresence_INTERFACE_DEFINED__
extern const IID IID_IRTCClientPresence;
typedef struct IRTCClientPresenceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClientPresence *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientPresence * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientPresence * This);
	HRESULT(STDMETHODCALLTYPE * EnablePresence) (IRTCClientPresence * This, VARIANT_BOOL fUseStorage, VARIANT varStorage);
	HRESULT(STDMETHODCALLTYPE * Export) (IRTCClientPresence * This, VARIANT varStorage);
	HRESULT(STDMETHODCALLTYPE * Import) (IRTCClientPresence * This, VARIANT varStorage, VARIANT_BOOL fReplaceAll);
	HRESULT(STDMETHODCALLTYPE * EnumerateBuddies) (IRTCClientPresence * This, IRTCEnumBuddies ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Buddies) (IRTCClientPresence * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Buddy) (IRTCClientPresence * This, BSTR bstrPresentityURI, IRTCBuddy ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * AddBuddy) (IRTCClientPresence * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fPersistent, IRTCProfile * pProfile, long lFlags, IRTCBuddy ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * RemoveBuddy) (IRTCClientPresence * This, IRTCBuddy * pBuddy);
	HRESULT(STDMETHODCALLTYPE * EnumerateWatchers) (IRTCClientPresence * This, IRTCEnumWatchers ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Watchers) (IRTCClientPresence * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Watcher) (IRTCClientPresence * This, BSTR bstrPresentityURI, IRTCWatcher ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * AddWatcher) (IRTCClientPresence * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fBlocked, VARIANT_BOOL fPersistent, IRTCWatcher ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * RemoveWatcher) (IRTCClientPresence * This, IRTCWatcher * pWatcher);
	HRESULT(STDMETHODCALLTYPE * SetLocalPresenceInfo) (IRTCClientPresence * This, RTC_PRESENCE_STATUS enStatus, BSTR bstrNotes);
	HRESULT(STDMETHODCALLTYPE * get_OfferWatcherMode) (IRTCClientPresence * This, RTC_OFFER_WATCHER_MODE * penMode);
	HRESULT(STDMETHODCALLTYPE * put_OfferWatcherMode) (IRTCClientPresence * This, RTC_OFFER_WATCHER_MODE enMode);
	HRESULT(STDMETHODCALLTYPE * get_PrivacyMode) (IRTCClientPresence * This, RTC_PRIVACY_MODE * penMode);
	HRESULT(STDMETHODCALLTYPE * put_PrivacyMode) (IRTCClientPresence * This, RTC_PRIVACY_MODE enMode);
	END_INTERFACE
}  IRTCClientPresenceVtbl;
interface IRTCClientPresence
{
	CONST_VTBL struct IRTCClientPresenceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientPresence_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientPresence_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientPresence_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientPresence_EnablePresence(This,fUseStorage,varStorage) ( (This)->lpVtbl -> EnablePresence(This,fUseStorage,varStorage) )
#define IRTCClientPresence_Export(This,varStorage) ( (This)->lpVtbl -> Export(This,varStorage) )
#define IRTCClientPresence_Import(This,varStorage,fReplaceAll) ( (This)->lpVtbl -> Import(This,varStorage,fReplaceAll) )
#define IRTCClientPresence_EnumerateBuddies(This,ppEnum) ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
#define IRTCClientPresence_get_Buddies(This,ppCollection) ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
#define IRTCClientPresence_get_Buddy(This,bstrPresentityURI,ppBuddy) ( (This)->lpVtbl -> get_Buddy(This,bstrPresentityURI,ppBuddy) )
#define IRTCClientPresence_AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) ( (This)->lpVtbl -> AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) )
#define IRTCClientPresence_RemoveBuddy(This,pBuddy) ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
#define IRTCClientPresence_EnumerateWatchers(This,ppEnum) ( (This)->lpVtbl -> EnumerateWatchers(This,ppEnum) )
#define IRTCClientPresence_get_Watchers(This,ppCollection) ( (This)->lpVtbl -> get_Watchers(This,ppCollection) )
#define IRTCClientPresence_get_Watcher(This,bstrPresentityURI,ppWatcher) ( (This)->lpVtbl -> get_Watcher(This,bstrPresentityURI,ppWatcher) )
#define IRTCClientPresence_AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) ( (This)->lpVtbl -> AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) )
#define IRTCClientPresence_RemoveWatcher(This,pWatcher) ( (This)->lpVtbl -> RemoveWatcher(This,pWatcher) )
#define IRTCClientPresence_SetLocalPresenceInfo(This,enStatus,bstrNotes) ( (This)->lpVtbl -> SetLocalPresenceInfo(This,enStatus,bstrNotes) )
#define IRTCClientPresence_get_OfferWatcherMode(This,penMode) ( (This)->lpVtbl -> get_OfferWatcherMode(This,penMode) )
#define IRTCClientPresence_put_OfferWatcherMode(This,enMode) ( (This)->lpVtbl -> put_OfferWatcherMode(This,enMode) )
#define IRTCClientPresence_get_PrivacyMode(This,penMode) ( (This)->lpVtbl -> get_PrivacyMode(This,penMode) )
#define IRTCClientPresence_put_PrivacyMode(This,enMode) ( (This)->lpVtbl -> put_PrivacyMode(This,enMode) )
#endif
#endif
#ifndef __IRTCClientPresence2_INTERFACE_DEFINED__
#define __IRTCClientPresence2_INTERFACE_DEFINED__
extern const IID IID_IRTCClientPresence2;
typedef struct IRTCClientPresence2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClientPresence2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientPresence2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientPresence2 * This);
	HRESULT(STDMETHODCALLTYPE * EnablePresence) (IRTCClientPresence2 * This, VARIANT_BOOL fUseStorage, VARIANT varStorage);
	HRESULT(STDMETHODCALLTYPE * Export) (IRTCClientPresence2 * This, VARIANT varStorage);
	HRESULT(STDMETHODCALLTYPE * Import) (IRTCClientPresence2 * This, VARIANT varStorage, VARIANT_BOOL fReplaceAll);
	HRESULT(STDMETHODCALLTYPE * EnumerateBuddies) (IRTCClientPresence2 * This, IRTCEnumBuddies ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Buddies) (IRTCClientPresence2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Buddy) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, IRTCBuddy ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * AddBuddy) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fPersistent, IRTCProfile * pProfile, long lFlags, IRTCBuddy ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * RemoveBuddy) (IRTCClientPresence2 * This, IRTCBuddy * pBuddy);
	HRESULT(STDMETHODCALLTYPE * EnumerateWatchers) (IRTCClientPresence2 * This, IRTCEnumWatchers ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Watchers) (IRTCClientPresence2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Watcher) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, IRTCWatcher ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * AddWatcher) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fBlocked, VARIANT_BOOL fPersistent, IRTCWatcher ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * RemoveWatcher) (IRTCClientPresence2 * This, IRTCWatcher * pWatcher);
	HRESULT(STDMETHODCALLTYPE * SetLocalPresenceInfo) (IRTCClientPresence2 * This, RTC_PRESENCE_STATUS enStatus, BSTR bstrNotes);
	HRESULT(STDMETHODCALLTYPE * get_OfferWatcherMode) (IRTCClientPresence2 * This, RTC_OFFER_WATCHER_MODE * penMode);
	HRESULT(STDMETHODCALLTYPE * put_OfferWatcherMode) (IRTCClientPresence2 * This, RTC_OFFER_WATCHER_MODE enMode);
	HRESULT(STDMETHODCALLTYPE * get_PrivacyMode) (IRTCClientPresence2 * This, RTC_PRIVACY_MODE * penMode);
	HRESULT(STDMETHODCALLTYPE * put_PrivacyMode) (IRTCClientPresence2 * This, RTC_PRIVACY_MODE enMode);
	HRESULT(STDMETHODCALLTYPE * EnablePresenceEx) (IRTCClientPresence2 * This, IRTCProfile * pProfile, VARIANT varStorage, long lFlags);
	HRESULT(STDMETHODCALLTYPE * DisablePresence) (IRTCClientPresence2 * This);
	HRESULT(STDMETHODCALLTYPE * AddGroup) (IRTCClientPresence2 * This, BSTR bstrGroupName, BSTR bstrData, IRTCProfile * pProfile, long lFlags, IRTCBuddyGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * RemoveGroup) (IRTCClientPresence2 * This, IRTCBuddyGroup * pGroup);
	HRESULT(STDMETHODCALLTYPE * EnumerateGroups) (IRTCClientPresence2 * This, IRTCEnumGroups ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Groups) (IRTCClientPresence2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Group) (IRTCClientPresence2 * This, BSTR bstrGroupName, IRTCBuddyGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * AddWatcherEx) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, RTC_WATCHER_STATE enState, VARIANT_BOOL fPersistent, RTC_ACE_SCOPE enScope, IRTCProfile * pProfile, long lFlags, IRTCWatcher2 ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * get_WatcherEx) (IRTCClientPresence2 * This, RTC_WATCHER_MATCH_MODE enMode, BSTR bstrPresentityURI, IRTCWatcher2 ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * put_PresenceProperty) (IRTCClientPresence2 * This, RTC_PRESENCE_PROPERTY enProperty, BSTR bstrProperty);
	HRESULT(STDMETHODCALLTYPE * get_PresenceProperty) (IRTCClientPresence2 * This, RTC_PRESENCE_PROPERTY enProperty, BSTR * pbstrProperty);
	HRESULT(STDMETHODCALLTYPE * SetPresenceData) (IRTCClientPresence2 * This, BSTR bstrNamespace, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * GetPresenceData) (IRTCClientPresence2 * This, BSTR * pbstrNamespace, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetLocalPresenceInfo) (IRTCClientPresence2 * This, RTC_PRESENCE_STATUS * penStatus, BSTR * pbstrNotes);
	HRESULT(STDMETHODCALLTYPE * AddBuddyEx) (IRTCClientPresence2 * This, BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fPersistent, RTC_BUDDY_SUBSCRIPTION_TYPE enSubscriptionType, IRTCProfile * pProfile, long lFlags, IRTCBuddy2 ** ppBuddy);
	END_INTERFACE
}  IRTCClientPresence2Vtbl;
interface IRTCClientPresence2
{
	CONST_VTBL struct IRTCClientPresence2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientPresence2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientPresence2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientPresence2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientPresence2_EnablePresence(This,fUseStorage,varStorage) ( (This)->lpVtbl -> EnablePresence(This,fUseStorage,varStorage) )
#define IRTCClientPresence2_Export(This,varStorage) ( (This)->lpVtbl -> Export(This,varStorage) )
#define IRTCClientPresence2_Import(This,varStorage,fReplaceAll) ( (This)->lpVtbl -> Import(This,varStorage,fReplaceAll) )
#define IRTCClientPresence2_EnumerateBuddies(This,ppEnum) ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
#define IRTCClientPresence2_get_Buddies(This,ppCollection) ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
#define IRTCClientPresence2_get_Buddy(This,bstrPresentityURI,ppBuddy) ( (This)->lpVtbl -> get_Buddy(This,bstrPresentityURI,ppBuddy) )
#define IRTCClientPresence2_AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) ( (This)->lpVtbl -> AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) )
#define IRTCClientPresence2_RemoveBuddy(This,pBuddy) ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
#define IRTCClientPresence2_EnumerateWatchers(This,ppEnum) ( (This)->lpVtbl -> EnumerateWatchers(This,ppEnum) )
#define IRTCClientPresence2_get_Watchers(This,ppCollection) ( (This)->lpVtbl -> get_Watchers(This,ppCollection) )
#define IRTCClientPresence2_get_Watcher(This,bstrPresentityURI,ppWatcher) ( (This)->lpVtbl -> get_Watcher(This,bstrPresentityURI,ppWatcher) )
#define IRTCClientPresence2_AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) ( (This)->lpVtbl -> AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) )
#define IRTCClientPresence2_RemoveWatcher(This,pWatcher) ( (This)->lpVtbl -> RemoveWatcher(This,pWatcher) )
#define IRTCClientPresence2_SetLocalPresenceInfo(This,enStatus,bstrNotes) ( (This)->lpVtbl -> SetLocalPresenceInfo(This,enStatus,bstrNotes) )
#define IRTCClientPresence2_get_OfferWatcherMode(This,penMode) ( (This)->lpVtbl -> get_OfferWatcherMode(This,penMode) )
#define IRTCClientPresence2_put_OfferWatcherMode(This,enMode) ( (This)->lpVtbl -> put_OfferWatcherMode(This,enMode) )
#define IRTCClientPresence2_get_PrivacyMode(This,penMode) ( (This)->lpVtbl -> get_PrivacyMode(This,penMode) )
#define IRTCClientPresence2_put_PrivacyMode(This,enMode) ( (This)->lpVtbl -> put_PrivacyMode(This,enMode) )
#define IRTCClientPresence2_EnablePresenceEx(This,pProfile,varStorage,lFlags) ( (This)->lpVtbl -> EnablePresenceEx(This,pProfile,varStorage,lFlags) )
#define IRTCClientPresence2_DisablePresence(This) ( (This)->lpVtbl -> DisablePresence(This) )
#define IRTCClientPresence2_AddGroup(This,bstrGroupName,bstrData,pProfile,lFlags,ppGroup) ( (This)->lpVtbl -> AddGroup(This,bstrGroupName,bstrData,pProfile,lFlags,ppGroup) )
#define IRTCClientPresence2_RemoveGroup(This,pGroup) ( (This)->lpVtbl -> RemoveGroup(This,pGroup) )
#define IRTCClientPresence2_EnumerateGroups(This,ppEnum) ( (This)->lpVtbl -> EnumerateGroups(This,ppEnum) )
#define IRTCClientPresence2_get_Groups(This,ppCollection) ( (This)->lpVtbl -> get_Groups(This,ppCollection) )
#define IRTCClientPresence2_get_Group(This,bstrGroupName,ppGroup) ( (This)->lpVtbl -> get_Group(This,bstrGroupName,ppGroup) )
#define IRTCClientPresence2_AddWatcherEx(This,bstrPresentityURI,bstrUserName,bstrData,enState,fPersistent,enScope,pProfile,lFlags,ppWatcher) ( (This)->lpVtbl -> AddWatcherEx(This,bstrPresentityURI,bstrUserName,bstrData,enState,fPersistent,enScope,pProfile,lFlags,ppWatcher) )
#define IRTCClientPresence2_get_WatcherEx(This,enMode,bstrPresentityURI,ppWatcher) ( (This)->lpVtbl -> get_WatcherEx(This,enMode,bstrPresentityURI,ppWatcher) )
#define IRTCClientPresence2_put_PresenceProperty(This,enProperty,bstrProperty) ( (This)->lpVtbl -> put_PresenceProperty(This,enProperty,bstrProperty) )
#define IRTCClientPresence2_get_PresenceProperty(This,enProperty,pbstrProperty) ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
#define IRTCClientPresence2_SetPresenceData(This,bstrNamespace,bstrData) ( (This)->lpVtbl -> SetPresenceData(This,bstrNamespace,bstrData) )
#define IRTCClientPresence2_GetPresenceData(This,pbstrNamespace,pbstrData) ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
#define IRTCClientPresence2_GetLocalPresenceInfo(This,penStatus,pbstrNotes) ( (This)->lpVtbl -> GetLocalPresenceInfo(This,penStatus,pbstrNotes) )
#define IRTCClientPresence2_AddBuddyEx(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,enSubscriptionType,pProfile,lFlags,ppBuddy) ( (This)->lpVtbl -> AddBuddyEx(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,enSubscriptionType,pProfile,lFlags,ppBuddy) )
#endif
#endif
#ifndef __IRTCClientProvisioning_INTERFACE_DEFINED__
#define __IRTCClientProvisioning_INTERFACE_DEFINED__
extern const IID IID_IRTCClientProvisioning;
typedef struct IRTCClientProvisioningVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClientProvisioning *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientProvisioning * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientProvisioning * This);
	HRESULT(STDMETHODCALLTYPE * CreateProfile) (IRTCClientProvisioning * This, BSTR bstrProfileXML, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * EnableProfile) (IRTCClientProvisioning * This, IRTCProfile * pProfile, long lRegisterFlags);
	HRESULT(STDMETHODCALLTYPE * DisableProfile) (IRTCClientProvisioning * This, IRTCProfile * pProfile);
	HRESULT(STDMETHODCALLTYPE * EnumerateProfiles) (IRTCClientProvisioning * This, IRTCEnumProfiles ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Profiles) (IRTCClientProvisioning * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * GetProfile) (IRTCClientProvisioning * This, BSTR bstrUserAccount, BSTR bstrUserPassword, BSTR bstrUserURI, BSTR bstrServer, long lTransport, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * get_SessionCapabilities) (IRTCClientProvisioning * This, long *plSupportedSessions);
	END_INTERFACE
}  IRTCClientProvisioningVtbl;
interface IRTCClientProvisioning
{
	CONST_VTBL struct IRTCClientProvisioningVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientProvisioning_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientProvisioning_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientProvisioning_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientProvisioning_CreateProfile(This,bstrProfileXML,ppProfile) ( (This)->lpVtbl -> CreateProfile(This,bstrProfileXML,ppProfile) )
#define IRTCClientProvisioning_EnableProfile(This,pProfile,lRegisterFlags) ( (This)->lpVtbl -> EnableProfile(This,pProfile,lRegisterFlags) )
#define IRTCClientProvisioning_DisableProfile(This,pProfile) ( (This)->lpVtbl -> DisableProfile(This,pProfile) )
#define IRTCClientProvisioning_EnumerateProfiles(This,ppEnum) ( (This)->lpVtbl -> EnumerateProfiles(This,ppEnum) )
#define IRTCClientProvisioning_get_Profiles(This,ppCollection) ( (This)->lpVtbl -> get_Profiles(This,ppCollection) )
#define IRTCClientProvisioning_GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) ( (This)->lpVtbl -> GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) )
#define IRTCClientProvisioning_get_SessionCapabilities(This,plSupportedSessions) ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
#endif
#endif
#ifndef __IRTCClientProvisioning2_INTERFACE_DEFINED__
#define __IRTCClientProvisioning2_INTERFACE_DEFINED__
extern const IID IID_IRTCClientProvisioning2;
typedef struct IRTCClientProvisioning2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCClientProvisioning2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientProvisioning2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientProvisioning2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateProfile) (IRTCClientProvisioning2 * This, BSTR bstrProfileXML, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * EnableProfile) (IRTCClientProvisioning2 * This, IRTCProfile * pProfile, long lRegisterFlags);
	HRESULT(STDMETHODCALLTYPE * DisableProfile) (IRTCClientProvisioning2 * This, IRTCProfile * pProfile);
	HRESULT(STDMETHODCALLTYPE * EnumerateProfiles) (IRTCClientProvisioning2 * This, IRTCEnumProfiles ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Profiles) (IRTCClientProvisioning2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * GetProfile) (IRTCClientProvisioning2 * This, BSTR bstrUserAccount, BSTR bstrUserPassword, BSTR bstrUserURI, BSTR bstrServer, long lTransport, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * get_SessionCapabilities) (IRTCClientProvisioning2 * This, long *plSupportedSessions);
	HRESULT(STDMETHODCALLTYPE * EnableProfileEx) (IRTCClientProvisioning2 * This, IRTCProfile * pProfile, long lRegisterFlags, long lRoamingFlags);
	END_INTERFACE
}  IRTCClientProvisioning2Vtbl;
interface IRTCClientProvisioning2
{
	CONST_VTBL struct IRTCClientProvisioning2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientProvisioning2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientProvisioning2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientProvisioning2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientProvisioning2_CreateProfile(This,bstrProfileXML,ppProfile) ( (This)->lpVtbl -> CreateProfile(This,bstrProfileXML,ppProfile) )
#define IRTCClientProvisioning2_EnableProfile(This,pProfile,lRegisterFlags) ( (This)->lpVtbl -> EnableProfile(This,pProfile,lRegisterFlags) )
#define IRTCClientProvisioning2_DisableProfile(This,pProfile) ( (This)->lpVtbl -> DisableProfile(This,pProfile) )
#define IRTCClientProvisioning2_EnumerateProfiles(This,ppEnum) ( (This)->lpVtbl -> EnumerateProfiles(This,ppEnum) )
#define IRTCClientProvisioning2_get_Profiles(This,ppCollection) ( (This)->lpVtbl -> get_Profiles(This,ppCollection) )
#define IRTCClientProvisioning2_GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) ( (This)->lpVtbl -> GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) )
#define IRTCClientProvisioning2_get_SessionCapabilities(This,plSupportedSessions) ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
#define IRTCClientProvisioning2_EnableProfileEx(This,pProfile,lRegisterFlags,lRoamingFlags) ( (This)->lpVtbl -> EnableProfileEx(This,pProfile,lRegisterFlags,lRoamingFlags) )
#endif
#endif
#ifndef __IRTCProfile_INTERFACE_DEFINED__
#define __IRTCProfile_INTERFACE_DEFINED__
extern const IID IID_IRTCProfile;
typedef struct IRTCProfileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCProfile *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCProfile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCProfile * This);
	HRESULT(STDMETHODCALLTYPE * get_Key) (IRTCProfile * This, BSTR * pbstrKey);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCProfile * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_XML) (IRTCProfile * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (IRTCProfile * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_ProviderURI) (IRTCProfile * This, RTC_PROVIDER_URI enURI, BSTR * pbstrURI);
	HRESULT(STDMETHODCALLTYPE * get_ProviderData) (IRTCProfile * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IRTCProfile * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_ClientBanner) (IRTCProfile * This, VARIANT_BOOL * pfBanner);
	HRESULT(STDMETHODCALLTYPE * get_ClientMinVer) (IRTCProfile * This, BSTR * pbstrMinVer);
	HRESULT(STDMETHODCALLTYPE * get_ClientCurVer) (IRTCProfile * This, BSTR * pbstrCurVer);
	HRESULT(STDMETHODCALLTYPE * get_ClientUpdateURI) (IRTCProfile * This, BSTR * pbstrUpdateURI);
	HRESULT(STDMETHODCALLTYPE * get_ClientData) (IRTCProfile * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * get_UserURI) (IRTCProfile * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IRTCProfile * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IRTCProfile * This, BSTR * pbstrUserAccount);
	HRESULT(STDMETHODCALLTYPE * SetCredentials) (IRTCProfile * This, BSTR bstrUserURI, BSTR bstrUserAccount, BSTR bstrPassword);
	HRESULT(STDMETHODCALLTYPE * get_SessionCapabilities) (IRTCProfile * This, long *plSupportedSessions);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCProfile * This, RTC_REGISTRATION_STATE * penState);
	END_INTERFACE
}  IRTCProfileVtbl;
interface IRTCProfile
{
	CONST_VTBL struct IRTCProfileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCProfile_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCProfile_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCProfile_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCProfile_get_Key(This,pbstrKey) ( (This)->lpVtbl -> get_Key(This,pbstrKey) )
#define IRTCProfile_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCProfile_get_XML(This,pbstrXML) ( (This)->lpVtbl -> get_XML(This,pbstrXML) )
#define IRTCProfile_get_ProviderName(This,pbstrName) ( (This)->lpVtbl -> get_ProviderName(This,pbstrName) )
#define IRTCProfile_get_ProviderURI(This,enURI,pbstrURI) ( (This)->lpVtbl -> get_ProviderURI(This,enURI,pbstrURI) )
#define IRTCProfile_get_ProviderData(This,pbstrData) ( (This)->lpVtbl -> get_ProviderData(This,pbstrData) )
#define IRTCProfile_get_ClientName(This,pbstrName) ( (This)->lpVtbl -> get_ClientName(This,pbstrName) )
#define IRTCProfile_get_ClientBanner(This,pfBanner) ( (This)->lpVtbl -> get_ClientBanner(This,pfBanner) )
#define IRTCProfile_get_ClientMinVer(This,pbstrMinVer) ( (This)->lpVtbl -> get_ClientMinVer(This,pbstrMinVer) )
#define IRTCProfile_get_ClientCurVer(This,pbstrCurVer) ( (This)->lpVtbl -> get_ClientCurVer(This,pbstrCurVer) )
#define IRTCProfile_get_ClientUpdateURI(This,pbstrUpdateURI) ( (This)->lpVtbl -> get_ClientUpdateURI(This,pbstrUpdateURI) )
#define IRTCProfile_get_ClientData(This,pbstrData) ( (This)->lpVtbl -> get_ClientData(This,pbstrData) )
#define IRTCProfile_get_UserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
#define IRTCProfile_get_UserName(This,pbstrUserName) ( (This)->lpVtbl -> get_UserName(This,pbstrUserName) )
#define IRTCProfile_get_UserAccount(This,pbstrUserAccount) ( (This)->lpVtbl -> get_UserAccount(This,pbstrUserAccount) )
#define IRTCProfile_SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) ( (This)->lpVtbl -> SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) )
#define IRTCProfile_get_SessionCapabilities(This,plSupportedSessions) ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
#define IRTCProfile_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#endif
#endif
#ifndef __IRTCProfile2_INTERFACE_DEFINED__
#define __IRTCProfile2_INTERFACE_DEFINED__
extern const IID IID_IRTCProfile2;
typedef struct IRTCProfile2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCProfile2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCProfile2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCProfile2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Key) (IRTCProfile2 * This, BSTR * pbstrKey);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCProfile2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_XML) (IRTCProfile2 * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (IRTCProfile2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_ProviderURI) (IRTCProfile2 * This, RTC_PROVIDER_URI enURI, BSTR * pbstrURI);
	HRESULT(STDMETHODCALLTYPE * get_ProviderData) (IRTCProfile2 * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IRTCProfile2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_ClientBanner) (IRTCProfile2 * This, VARIANT_BOOL * pfBanner);
	HRESULT(STDMETHODCALLTYPE * get_ClientMinVer) (IRTCProfile2 * This, BSTR * pbstrMinVer);
	HRESULT(STDMETHODCALLTYPE * get_ClientCurVer) (IRTCProfile2 * This, BSTR * pbstrCurVer);
	HRESULT(STDMETHODCALLTYPE * get_ClientUpdateURI) (IRTCProfile2 * This, BSTR * pbstrUpdateURI);
	HRESULT(STDMETHODCALLTYPE * get_ClientData) (IRTCProfile2 * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * get_UserURI) (IRTCProfile2 * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IRTCProfile2 * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IRTCProfile2 * This, BSTR * pbstrUserAccount);
	HRESULT(STDMETHODCALLTYPE * SetCredentials) (IRTCProfile2 * This, BSTR bstrUserURI, BSTR bstrUserAccount, BSTR bstrPassword);
	HRESULT(STDMETHODCALLTYPE * get_SessionCapabilities) (IRTCProfile2 * This, long *plSupportedSessions);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCProfile2 * This, RTC_REGISTRATION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_Realm) (IRTCProfile2 * This, BSTR * pbstrRealm);
	HRESULT(STDMETHODCALLTYPE * put_Realm) (IRTCProfile2 * This, BSTR bstrRealm);
	HRESULT(STDMETHODCALLTYPE * get_AllowedAuth) (IRTCProfile2 * This, long *plAllowedAuth);
	HRESULT(STDMETHODCALLTYPE * put_AllowedAuth) (IRTCProfile2 * This, long lAllowedAuth);
	END_INTERFACE
}  IRTCProfile2Vtbl;
interface IRTCProfile2
{
	CONST_VTBL struct IRTCProfile2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCProfile2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCProfile2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCProfile2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCProfile2_get_Key(This,pbstrKey) ( (This)->lpVtbl -> get_Key(This,pbstrKey) )
#define IRTCProfile2_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCProfile2_get_XML(This,pbstrXML) ( (This)->lpVtbl -> get_XML(This,pbstrXML) )
#define IRTCProfile2_get_ProviderName(This,pbstrName) ( (This)->lpVtbl -> get_ProviderName(This,pbstrName) )
#define IRTCProfile2_get_ProviderURI(This,enURI,pbstrURI) ( (This)->lpVtbl -> get_ProviderURI(This,enURI,pbstrURI) )
#define IRTCProfile2_get_ProviderData(This,pbstrData) ( (This)->lpVtbl -> get_ProviderData(This,pbstrData) )
#define IRTCProfile2_get_ClientName(This,pbstrName) ( (This)->lpVtbl -> get_ClientName(This,pbstrName) )
#define IRTCProfile2_get_ClientBanner(This,pfBanner) ( (This)->lpVtbl -> get_ClientBanner(This,pfBanner) )
#define IRTCProfile2_get_ClientMinVer(This,pbstrMinVer) ( (This)->lpVtbl -> get_ClientMinVer(This,pbstrMinVer) )
#define IRTCProfile2_get_ClientCurVer(This,pbstrCurVer) ( (This)->lpVtbl -> get_ClientCurVer(This,pbstrCurVer) )
#define IRTCProfile2_get_ClientUpdateURI(This,pbstrUpdateURI) ( (This)->lpVtbl -> get_ClientUpdateURI(This,pbstrUpdateURI) )
#define IRTCProfile2_get_ClientData(This,pbstrData) ( (This)->lpVtbl -> get_ClientData(This,pbstrData) )
#define IRTCProfile2_get_UserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
#define IRTCProfile2_get_UserName(This,pbstrUserName) ( (This)->lpVtbl -> get_UserName(This,pbstrUserName) )
#define IRTCProfile2_get_UserAccount(This,pbstrUserAccount) ( (This)->lpVtbl -> get_UserAccount(This,pbstrUserAccount) )
#define IRTCProfile2_SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) ( (This)->lpVtbl -> SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) )
#define IRTCProfile2_get_SessionCapabilities(This,plSupportedSessions) ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
#define IRTCProfile2_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCProfile2_get_Realm(This,pbstrRealm) ( (This)->lpVtbl -> get_Realm(This,pbstrRealm) )
#define IRTCProfile2_put_Realm(This,bstrRealm) ( (This)->lpVtbl -> put_Realm(This,bstrRealm) )
#define IRTCProfile2_get_AllowedAuth(This,plAllowedAuth) ( (This)->lpVtbl -> get_AllowedAuth(This,plAllowedAuth) )
#define IRTCProfile2_put_AllowedAuth(This,lAllowedAuth) ( (This)->lpVtbl -> put_AllowedAuth(This,lAllowedAuth) )
#endif
#endif
#ifndef __IRTCSession_INTERFACE_DEFINED__
#define __IRTCSession_INTERFACE_DEFINED__
extern const IID IID_IRTCSession;
typedef struct IRTCSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCSession *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSession * This);
	HRESULT(STDMETHODCALLTYPE * get_Client) (IRTCSession * This, IRTCClient ** ppClient);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCSession * This, RTC_SESSION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IRTCSession * This, RTC_SESSION_TYPE * penType);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCSession * This, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Participants) (IRTCSession * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * Answer) (IRTCSession * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IRTCSession * This, RTC_TERMINATE_REASON enReason);
	HRESULT(STDMETHODCALLTYPE * Redirect) (IRTCSession * This, RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile * pProfile, long lFlags);
	HRESULT(STDMETHODCALLTYPE * AddParticipant) (IRTCSession * This, BSTR bstrAddress, BSTR bstrName, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * RemoveParticipant) (IRTCSession * This, IRTCParticipant * pParticipant);
	HRESULT(STDMETHODCALLTYPE * EnumerateParticipants) (IRTCSession * This, IRTCEnumParticipants ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_CanAddParticipants) (IRTCSession * This, VARIANT_BOOL * pfCanAdd);
	HRESULT(STDMETHODCALLTYPE * get_RedirectedUserURI) (IRTCSession * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_RedirectedUserName) (IRTCSession * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * NextRedirectedUser) (IRTCSession * This);
	HRESULT(STDMETHODCALLTYPE * SendMessage) (IRTCSession * This, BSTR bstrMessageHeader, BSTR bstrMessage, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * SendMessageStatus) (IRTCSession * This, RTC_MESSAGING_USER_STATUS enUserStatus, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IRTCSession * This, long lMediaType, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IRTCSession * This, long lMediaType, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionKey) (IRTCSession * This, long lMediaType, BSTR EncryptionKey);
	END_INTERFACE
}  IRTCSessionVtbl;
interface IRTCSession
{
	CONST_VTBL struct IRTCSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSession_get_Client(This,ppClient) ( (This)->lpVtbl -> get_Client(This,ppClient) )
#define IRTCSession_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCSession_get_Type(This,penType) ( (This)->lpVtbl -> get_Type(This,penType) )
#define IRTCSession_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCSession_get_Participants(This,ppCollection) ( (This)->lpVtbl -> get_Participants(This,ppCollection) )
#define IRTCSession_Answer(This) ( (This)->lpVtbl -> Answer(This) )
#define IRTCSession_Terminate(This,enReason) ( (This)->lpVtbl -> Terminate(This,enReason) )
#define IRTCSession_Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) ( (This)->lpVtbl -> Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) )
#define IRTCSession_AddParticipant(This,bstrAddress,bstrName,ppParticipant) ( (This)->lpVtbl -> AddParticipant(This,bstrAddress,bstrName,ppParticipant) )
#define IRTCSession_RemoveParticipant(This,pParticipant) ( (This)->lpVtbl -> RemoveParticipant(This,pParticipant) )
#define IRTCSession_EnumerateParticipants(This,ppEnum) ( (This)->lpVtbl -> EnumerateParticipants(This,ppEnum) )
#define IRTCSession_get_CanAddParticipants(This,pfCanAdd) ( (This)->lpVtbl -> get_CanAddParticipants(This,pfCanAdd) )
#define IRTCSession_get_RedirectedUserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_RedirectedUserURI(This,pbstrUserURI) )
#define IRTCSession_get_RedirectedUserName(This,pbstrUserName) ( (This)->lpVtbl -> get_RedirectedUserName(This,pbstrUserName) )
#define IRTCSession_NextRedirectedUser(This) ( (This)->lpVtbl -> NextRedirectedUser(This) )
#define IRTCSession_SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) ( (This)->lpVtbl -> SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) )
#define IRTCSession_SendMessageStatus(This,enUserStatus,lCookie) ( (This)->lpVtbl -> SendMessageStatus(This,enUserStatus,lCookie) )
#define IRTCSession_AddStream(This,lMediaType,lCookie) ( (This)->lpVtbl -> AddStream(This,lMediaType,lCookie) )
#define IRTCSession_RemoveStream(This,lMediaType,lCookie) ( (This)->lpVtbl -> RemoveStream(This,lMediaType,lCookie) )
#define IRTCSession_put_EncryptionKey(This,lMediaType,EncryptionKey) ( (This)->lpVtbl -> put_EncryptionKey(This,lMediaType,EncryptionKey) )
#endif
#endif
#ifndef __IRTCSession2_INTERFACE_DEFINED__
#define __IRTCSession2_INTERFACE_DEFINED__
extern const IID IID_IRTCSession2;
typedef struct IRTCSession2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCSession2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSession2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSession2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Client) (IRTCSession2 * This, IRTCClient ** ppClient);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCSession2 * This, RTC_SESSION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IRTCSession2 * This, RTC_SESSION_TYPE * penType);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCSession2 * This, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Participants) (IRTCSession2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * Answer) (IRTCSession2 * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IRTCSession2 * This, RTC_TERMINATE_REASON enReason);
	HRESULT(STDMETHODCALLTYPE * Redirect) (IRTCSession2 * This, RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile * pProfile, long lFlags);
	HRESULT(STDMETHODCALLTYPE * AddParticipant) (IRTCSession2 * This, BSTR bstrAddress, BSTR bstrName, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * RemoveParticipant) (IRTCSession2 * This, IRTCParticipant * pParticipant);
	HRESULT(STDMETHODCALLTYPE * EnumerateParticipants) (IRTCSession2 * This, IRTCEnumParticipants ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_CanAddParticipants) (IRTCSession2 * This, VARIANT_BOOL * pfCanAdd);
	HRESULT(STDMETHODCALLTYPE * get_RedirectedUserURI) (IRTCSession2 * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_RedirectedUserName) (IRTCSession2 * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * NextRedirectedUser) (IRTCSession2 * This);
	HRESULT(STDMETHODCALLTYPE * SendMessage) (IRTCSession2 * This, BSTR bstrMessageHeader, BSTR bstrMessage, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * SendMessageStatus) (IRTCSession2 * This, RTC_MESSAGING_USER_STATUS enUserStatus, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IRTCSession2 * This, long lMediaType, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IRTCSession2 * This, long lMediaType, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionKey) (IRTCSession2 * This, long lMediaType, BSTR EncryptionKey);
	HRESULT(STDMETHODCALLTYPE * SendInfo) (IRTCSession2 * This, BSTR bstrInfoHeader, BSTR bstrInfo, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * put_PreferredSecurityLevel) (IRTCSession2 * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL enSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * get_PreferredSecurityLevel) (IRTCSession2 * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL * penSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * IsSecurityEnabled) (IRTCSession2 * This, RTC_SECURITY_TYPE enSecurityType, VARIANT_BOOL * pfSecurityEnabled);
	HRESULT(STDMETHODCALLTYPE * AnswerWithSessionDescription) (IRTCSession2 * This, BSTR bstrContentType, BSTR bstrSessionDescription);
	HRESULT(STDMETHODCALLTYPE * ReInviteWithSessionDescription) (IRTCSession2 * This, BSTR bstrContentType, BSTR bstrSessionDescription, LONG_PTR lCookie);
	END_INTERFACE
}  IRTCSession2Vtbl;
interface IRTCSession2
{
	CONST_VTBL struct IRTCSession2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSession2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSession2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSession2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSession2_get_Client(This,ppClient) ( (This)->lpVtbl -> get_Client(This,ppClient) )
#define IRTCSession2_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCSession2_get_Type(This,penType) ( (This)->lpVtbl -> get_Type(This,penType) )
#define IRTCSession2_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCSession2_get_Participants(This,ppCollection) ( (This)->lpVtbl -> get_Participants(This,ppCollection) )
#define IRTCSession2_Answer(This) ( (This)->lpVtbl -> Answer(This) )
#define IRTCSession2_Terminate(This,enReason) ( (This)->lpVtbl -> Terminate(This,enReason) )
#define IRTCSession2_Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) ( (This)->lpVtbl -> Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) )
#define IRTCSession2_AddParticipant(This,bstrAddress,bstrName,ppParticipant) ( (This)->lpVtbl -> AddParticipant(This,bstrAddress,bstrName,ppParticipant) )
#define IRTCSession2_RemoveParticipant(This,pParticipant) ( (This)->lpVtbl -> RemoveParticipant(This,pParticipant) )
#define IRTCSession2_EnumerateParticipants(This,ppEnum) ( (This)->lpVtbl -> EnumerateParticipants(This,ppEnum) )
#define IRTCSession2_get_CanAddParticipants(This,pfCanAdd) ( (This)->lpVtbl -> get_CanAddParticipants(This,pfCanAdd) )
#define IRTCSession2_get_RedirectedUserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_RedirectedUserURI(This,pbstrUserURI) )
#define IRTCSession2_get_RedirectedUserName(This,pbstrUserName) ( (This)->lpVtbl -> get_RedirectedUserName(This,pbstrUserName) )
#define IRTCSession2_NextRedirectedUser(This) ( (This)->lpVtbl -> NextRedirectedUser(This) )
#define IRTCSession2_SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) ( (This)->lpVtbl -> SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) )
#define IRTCSession2_SendMessageStatus(This,enUserStatus,lCookie) ( (This)->lpVtbl -> SendMessageStatus(This,enUserStatus,lCookie) )
#define IRTCSession2_AddStream(This,lMediaType,lCookie) ( (This)->lpVtbl -> AddStream(This,lMediaType,lCookie) )
#define IRTCSession2_RemoveStream(This,lMediaType,lCookie) ( (This)->lpVtbl -> RemoveStream(This,lMediaType,lCookie) )
#define IRTCSession2_put_EncryptionKey(This,lMediaType,EncryptionKey) ( (This)->lpVtbl -> put_EncryptionKey(This,lMediaType,EncryptionKey) )
#define IRTCSession2_SendInfo(This,bstrInfoHeader,bstrInfo,lCookie) ( (This)->lpVtbl -> SendInfo(This,bstrInfoHeader,bstrInfo,lCookie) )
#define IRTCSession2_put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) ( (This)->lpVtbl -> put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) )
#define IRTCSession2_get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) ( (This)->lpVtbl -> get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
#define IRTCSession2_IsSecurityEnabled(This,enSecurityType,pfSecurityEnabled) ( (This)->lpVtbl -> IsSecurityEnabled(This,enSecurityType,pfSecurityEnabled) )
#define IRTCSession2_AnswerWithSessionDescription(This,bstrContentType,bstrSessionDescription) ( (This)->lpVtbl -> AnswerWithSessionDescription(This,bstrContentType,bstrSessionDescription) )
#define IRTCSession2_ReInviteWithSessionDescription(This,bstrContentType,bstrSessionDescription,lCookie) ( (This)->lpVtbl -> ReInviteWithSessionDescription(This,bstrContentType,bstrSessionDescription,lCookie) )
#endif
#endif
#ifndef __IRTCSessionCallControl_INTERFACE_DEFINED__
#define __IRTCSessionCallControl_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionCallControl;
typedef struct IRTCSessionCallControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCSessionCallControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionCallControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionCallControl * This);
	HRESULT(STDMETHODCALLTYPE * Hold) (IRTCSessionCallControl * This, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * UnHold) (IRTCSessionCallControl * This, LONG_PTR lCookie);
	HRESULT(STDMETHODCALLTYPE * Forward) (IRTCSessionCallControl * This, BSTR bstrForwardToURI);
	HRESULT(STDMETHODCALLTYPE * Refer) (IRTCSessionCallControl * This, BSTR bstrReferToURI, BSTR bstrReferCookie);
	HRESULT(STDMETHODCALLTYPE * put_ReferredByURI) (IRTCSessionCallControl * This, BSTR bstrReferredByURI);
	HRESULT(STDMETHODCALLTYPE * get_ReferredByURI) (IRTCSessionCallControl * This, BSTR * pbstrReferredByURI);
	HRESULT(STDMETHODCALLTYPE * put_ReferCookie) (IRTCSessionCallControl * This, BSTR bstrReferCookie);
	HRESULT(STDMETHODCALLTYPE * get_ReferCookie) (IRTCSessionCallControl * This, BSTR * pbstrReferCookie);
	HRESULT(STDMETHODCALLTYPE * get_IsReferred) (IRTCSessionCallControl * This, VARIANT_BOOL * pfIsReferred);
	END_INTERFACE
}  IRTCSessionCallControlVtbl;
interface IRTCSessionCallControl
{
	CONST_VTBL struct IRTCSessionCallControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionCallControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionCallControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionCallControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionCallControl_Hold(This,lCookie) ( (This)->lpVtbl -> Hold(This,lCookie) )
#define IRTCSessionCallControl_UnHold(This,lCookie) ( (This)->lpVtbl -> UnHold(This,lCookie) )
#define IRTCSessionCallControl_Forward(This,bstrForwardToURI) ( (This)->lpVtbl -> Forward(This,bstrForwardToURI) )
#define IRTCSessionCallControl_Refer(This,bstrReferToURI,bstrReferCookie) ( (This)->lpVtbl -> Refer(This,bstrReferToURI,bstrReferCookie) )
#define IRTCSessionCallControl_put_ReferredByURI(This,bstrReferredByURI) ( (This)->lpVtbl -> put_ReferredByURI(This,bstrReferredByURI) )
#define IRTCSessionCallControl_get_ReferredByURI(This,pbstrReferredByURI) ( (This)->lpVtbl -> get_ReferredByURI(This,pbstrReferredByURI) )
#define IRTCSessionCallControl_put_ReferCookie(This,bstrReferCookie) ( (This)->lpVtbl -> put_ReferCookie(This,bstrReferCookie) )
#define IRTCSessionCallControl_get_ReferCookie(This,pbstrReferCookie) ( (This)->lpVtbl -> get_ReferCookie(This,pbstrReferCookie) )
#define IRTCSessionCallControl_get_IsReferred(This,pfIsReferred) ( (This)->lpVtbl -> get_IsReferred(This,pfIsReferred) )
#endif
#endif
#ifndef __IRTCParticipant_INTERFACE_DEFINED__
#define __IRTCParticipant_INTERFACE_DEFINED__
extern const IID IID_IRTCParticipant;
typedef struct IRTCParticipantVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCParticipant *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCParticipant * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCParticipant * This);
	HRESULT(STDMETHODCALLTYPE * get_UserURI) (IRTCParticipant * This, BSTR * pbstrUserURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCParticipant * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Removable) (IRTCParticipant * This, VARIANT_BOOL * pfRemovable);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCParticipant * This, RTC_PARTICIPANT_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCParticipant * This, IRTCSession ** ppSession);
	END_INTERFACE
}  IRTCParticipantVtbl;
interface IRTCParticipant
{
	CONST_VTBL struct IRTCParticipantVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCParticipant_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCParticipant_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCParticipant_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCParticipant_get_UserURI(This,pbstrUserURI) ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
#define IRTCParticipant_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCParticipant_get_Removable(This,pfRemovable) ( (This)->lpVtbl -> get_Removable(This,pfRemovable) )
#define IRTCParticipant_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCParticipant_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#endif
#endif
#ifndef __IRTCRoamingEvent_INTERFACE_DEFINED__
#define __IRTCRoamingEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCRoamingEvent;
typedef struct IRTCRoamingEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCRoamingEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCRoamingEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCRoamingEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCRoamingEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCRoamingEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCRoamingEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCRoamingEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCRoamingEvent * This, RTC_ROAMING_EVENT_TYPE * pEventType);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCRoamingEvent * This, IRTCProfile2 ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCRoamingEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCRoamingEvent * This, BSTR * pbstrStatusText);
	END_INTERFACE
}  IRTCRoamingEventVtbl;
interface IRTCRoamingEvent
{
	CONST_VTBL struct IRTCRoamingEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCRoamingEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCRoamingEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCRoamingEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCRoamingEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCRoamingEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCRoamingEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCRoamingEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCRoamingEvent_get_EventType(This,pEventType) ( (This)->lpVtbl -> get_EventType(This,pEventType) )
#define IRTCRoamingEvent_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCRoamingEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCRoamingEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCProfileEvent_INTERFACE_DEFINED__
#define __IRTCProfileEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCProfileEvent;
typedef struct IRTCProfileEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCProfileEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCProfileEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCProfileEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCProfileEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCProfileEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCProfileEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCProfileEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCProfileEvent * This, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Cookie) (IRTCProfileEvent * This, LONG_PTR * plCookie);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCProfileEvent * This, long *plStatusCode);
	END_INTERFACE
}  IRTCProfileEventVtbl;
interface IRTCProfileEvent
{
	CONST_VTBL struct IRTCProfileEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCProfileEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCProfileEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCProfileEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCProfileEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCProfileEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCProfileEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCProfileEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCProfileEvent_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCProfileEvent_get_Cookie(This,plCookie) ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
#define IRTCProfileEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#endif
#endif
#ifndef __IRTCProfileEvent2_INTERFACE_DEFINED__
#define __IRTCProfileEvent2_INTERFACE_DEFINED__
extern const IID IID_IRTCProfileEvent2;
typedef struct IRTCProfileEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCProfileEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCProfileEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCProfileEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCProfileEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCProfileEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCProfileEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCProfileEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCProfileEvent2 * This, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Cookie) (IRTCProfileEvent2 * This, LONG_PTR * plCookie);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCProfileEvent2 * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCProfileEvent2 * This, RTC_PROFILE_EVENT_TYPE * pEventType);
	END_INTERFACE
}  IRTCProfileEvent2Vtbl;
interface IRTCProfileEvent2
{
	CONST_VTBL struct IRTCProfileEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCProfileEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCProfileEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCProfileEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCProfileEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCProfileEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCProfileEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCProfileEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCProfileEvent2_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCProfileEvent2_get_Cookie(This,plCookie) ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
#define IRTCProfileEvent2_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCProfileEvent2_get_EventType(This,pEventType) ( (This)->lpVtbl -> get_EventType(This,pEventType) )
#endif
#endif
#ifndef __IRTCClientEvent_INTERFACE_DEFINED__
#define __IRTCClientEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCClientEvent;
typedef struct IRTCClientEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCClientEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCClientEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCClientEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCClientEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCClientEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCClientEvent * This, RTC_CLIENT_EVENT_TYPE * penEventType);
	HRESULT(STDMETHODCALLTYPE * get_Client) (IRTCClientEvent * This, IRTCClient ** ppClient);
	END_INTERFACE
}  IRTCClientEventVtbl;
interface IRTCClientEvent
{
	CONST_VTBL struct IRTCClientEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCClientEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCClientEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCClientEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCClientEvent_get_EventType(This,penEventType) ( (This)->lpVtbl -> get_EventType(This,penEventType) )
#define IRTCClientEvent_get_Client(This,ppClient) ( (This)->lpVtbl -> get_Client(This,ppClient) )
#endif
#endif
#ifndef __IRTCRegistrationStateChangeEvent_INTERFACE_DEFINED__
#define __IRTCRegistrationStateChangeEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCRegistrationStateChangeEvent;
typedef struct IRTCRegistrationStateChangeEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCRegistrationStateChangeEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCRegistrationStateChangeEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCRegistrationStateChangeEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCRegistrationStateChangeEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCRegistrationStateChangeEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCRegistrationStateChangeEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCRegistrationStateChangeEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCRegistrationStateChangeEvent * This, IRTCProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCRegistrationStateChangeEvent * This, RTC_REGISTRATION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCRegistrationStateChangeEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCRegistrationStateChangeEvent * This, BSTR * pbstrStatusText);
	END_INTERFACE
}  IRTCRegistrationStateChangeEventVtbl;
interface IRTCRegistrationStateChangeEvent
{
	CONST_VTBL struct IRTCRegistrationStateChangeEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCRegistrationStateChangeEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCRegistrationStateChangeEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCRegistrationStateChangeEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCRegistrationStateChangeEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCRegistrationStateChangeEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCRegistrationStateChangeEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCRegistrationStateChangeEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCRegistrationStateChangeEvent_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCRegistrationStateChangeEvent_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCRegistrationStateChangeEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCRegistrationStateChangeEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCSessionStateChangeEvent_INTERFACE_DEFINED__
#define __IRTCSessionStateChangeEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionStateChangeEvent;
typedef struct IRTCSessionStateChangeEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCSessionStateChangeEvent *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionStateChangeEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionStateChangeEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionStateChangeEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionStateChangeEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionStateChangeEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionStateChangeEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionStateChangeEvent * This, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCSessionStateChangeEvent * This, RTC_SESSION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCSessionStateChangeEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCSessionStateChangeEvent * This, BSTR * pbstrStatusText);
	END_INTERFACE
}  IRTCSessionStateChangeEventVtbl;
interface IRTCSessionStateChangeEvent
{
	CONST_VTBL struct IRTCSessionStateChangeEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionStateChangeEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionStateChangeEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionStateChangeEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionStateChangeEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionStateChangeEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionStateChangeEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionStateChangeEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionStateChangeEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionStateChangeEvent_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCSessionStateChangeEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCSessionStateChangeEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCSessionStateChangeEvent2_INTERFACE_DEFINED__
#define __IRTCSessionStateChangeEvent2_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionStateChangeEvent2;
typedef struct IRTCSessionStateChangeEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionStateChangeEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionStateChangeEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionStateChangeEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionStateChangeEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionStateChangeEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionStateChangeEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionStateChangeEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionStateChangeEvent2 * This, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCSessionStateChangeEvent2 * This, RTC_SESSION_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCSessionStateChangeEvent2 * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCSessionStateChangeEvent2 * This, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypes) (IRTCSessionStateChangeEvent2 * This, long *pMediaTypes);
	HRESULT(STDMETHODCALLTYPE * get_RemotePreferredSecurityLevel) (IRTCSessionStateChangeEvent2 * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL * penSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * get_IsForked) (IRTCSessionStateChangeEvent2 * This, VARIANT_BOOL * pfIsForked);
	HRESULT(STDMETHODCALLTYPE * GetRemoteSessionDescription) (IRTCSessionStateChangeEvent2 * This, BSTR * pbstrContentType, BSTR * pbstrSessionDescription);
	END_INTERFACE
}  IRTCSessionStateChangeEvent2Vtbl;
interface IRTCSessionStateChangeEvent2
{
	CONST_VTBL struct IRTCSessionStateChangeEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionStateChangeEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionStateChangeEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionStateChangeEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionStateChangeEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionStateChangeEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionStateChangeEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionStateChangeEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionStateChangeEvent2_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionStateChangeEvent2_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCSessionStateChangeEvent2_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCSessionStateChangeEvent2_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#define IRTCSessionStateChangeEvent2_get_MediaTypes(This,pMediaTypes) ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
#define IRTCSessionStateChangeEvent2_get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) ( (This)->lpVtbl -> get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
#define IRTCSessionStateChangeEvent2_get_IsForked(This,pfIsForked) ( (This)->lpVtbl -> get_IsForked(This,pfIsForked) )
#define IRTCSessionStateChangeEvent2_GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
#endif
#endif
#ifndef __IRTCSessionOperationCompleteEvent_INTERFACE_DEFINED__
#define __IRTCSessionOperationCompleteEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionOperationCompleteEvent;
typedef struct IRTCSessionOperationCompleteEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionOperationCompleteEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionOperationCompleteEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionOperationCompleteEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionOperationCompleteEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionOperationCompleteEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionOperationCompleteEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionOperationCompleteEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionOperationCompleteEvent * This, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Cookie) (IRTCSessionOperationCompleteEvent * This, LONG_PTR * plCookie);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCSessionOperationCompleteEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCSessionOperationCompleteEvent * This, BSTR * pbstrStatusText);
	END_INTERFACE
}  IRTCSessionOperationCompleteEventVtbl;
interface IRTCSessionOperationCompleteEvent
{
	CONST_VTBL struct IRTCSessionOperationCompleteEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionOperationCompleteEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionOperationCompleteEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionOperationCompleteEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionOperationCompleteEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionOperationCompleteEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionOperationCompleteEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionOperationCompleteEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionOperationCompleteEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionOperationCompleteEvent_get_Cookie(This,plCookie) ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
#define IRTCSessionOperationCompleteEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCSessionOperationCompleteEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCSessionOperationCompleteEvent2_INTERFACE_DEFINED__
#define __IRTCSessionOperationCompleteEvent2_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionOperationCompleteEvent2;
typedef struct IRTCSessionOperationCompleteEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionOperationCompleteEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionOperationCompleteEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionOperationCompleteEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionOperationCompleteEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionOperationCompleteEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionOperationCompleteEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionOperationCompleteEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionOperationCompleteEvent2 * This, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Cookie) (IRTCSessionOperationCompleteEvent2 * This, LONG_PTR * plCookie);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCSessionOperationCompleteEvent2 * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCSessionOperationCompleteEvent2 * This, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * get_Participant) (IRTCSessionOperationCompleteEvent2 * This, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * GetRemoteSessionDescription) (IRTCSessionOperationCompleteEvent2 * This, BSTR * pbstrContentType, BSTR * pbstrSessionDescription);
	END_INTERFACE
}  IRTCSessionOperationCompleteEvent2Vtbl;
interface IRTCSessionOperationCompleteEvent2
{
	CONST_VTBL struct IRTCSessionOperationCompleteEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionOperationCompleteEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionOperationCompleteEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionOperationCompleteEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionOperationCompleteEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionOperationCompleteEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionOperationCompleteEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionOperationCompleteEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionOperationCompleteEvent2_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionOperationCompleteEvent2_get_Cookie(This,plCookie) ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
#define IRTCSessionOperationCompleteEvent2_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCSessionOperationCompleteEvent2_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#define IRTCSessionOperationCompleteEvent2_get_Participant(This,ppParticipant) ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
#define IRTCSessionOperationCompleteEvent2_GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
#endif
#endif
#ifndef __IRTCParticipantStateChangeEvent_INTERFACE_DEFINED__
#define __IRTCParticipantStateChangeEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCParticipantStateChangeEvent;
typedef struct IRTCParticipantStateChangeEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCParticipantStateChangeEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCParticipantStateChangeEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCParticipantStateChangeEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCParticipantStateChangeEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCParticipantStateChangeEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCParticipantStateChangeEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCParticipantStateChangeEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Participant) (IRTCParticipantStateChangeEvent * This, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCParticipantStateChangeEvent * This, RTC_PARTICIPANT_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCParticipantStateChangeEvent * This, long *plStatusCode);
	END_INTERFACE
}  IRTCParticipantStateChangeEventVtbl;
interface IRTCParticipantStateChangeEvent
{
	CONST_VTBL struct IRTCParticipantStateChangeEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCParticipantStateChangeEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCParticipantStateChangeEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCParticipantStateChangeEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCParticipantStateChangeEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCParticipantStateChangeEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCParticipantStateChangeEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCParticipantStateChangeEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCParticipantStateChangeEvent_get_Participant(This,ppParticipant) ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
#define IRTCParticipantStateChangeEvent_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCParticipantStateChangeEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#endif
#endif
#ifndef __IRTCMediaEvent_INTERFACE_DEFINED__
#define __IRTCMediaEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCMediaEvent;
typedef struct IRTCMediaEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCMediaEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCMediaEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCMediaEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCMediaEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCMediaEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCMediaEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCMediaEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IRTCMediaEvent * This, long *pMediaType);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCMediaEvent * This, RTC_MEDIA_EVENT_TYPE * penEventType);
	HRESULT(STDMETHODCALLTYPE * get_EventReason) (IRTCMediaEvent * This, RTC_MEDIA_EVENT_REASON * penEventReason);
	END_INTERFACE
}  IRTCMediaEventVtbl;
interface IRTCMediaEvent
{
	CONST_VTBL struct IRTCMediaEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCMediaEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCMediaEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCMediaEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCMediaEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCMediaEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCMediaEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCMediaEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCMediaEvent_get_MediaType(This,pMediaType) ( (This)->lpVtbl -> get_MediaType(This,pMediaType) )
#define IRTCMediaEvent_get_EventType(This,penEventType) ( (This)->lpVtbl -> get_EventType(This,penEventType) )
#define IRTCMediaEvent_get_EventReason(This,penEventReason) ( (This)->lpVtbl -> get_EventReason(This,penEventReason) )
#endif
#endif
#ifndef __IRTCIntensityEvent_INTERFACE_DEFINED__
#define __IRTCIntensityEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCIntensityEvent;
typedef struct IRTCIntensityEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCIntensityEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCIntensityEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCIntensityEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCIntensityEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCIntensityEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCIntensityEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCIntensityEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Level) (IRTCIntensityEvent * This, long *plLevel);
	HRESULT(STDMETHODCALLTYPE * get_Min) (IRTCIntensityEvent * This, long *plMin);
	HRESULT(STDMETHODCALLTYPE * get_Max) (IRTCIntensityEvent * This, long *plMax);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (IRTCIntensityEvent * This, RTC_AUDIO_DEVICE * penDirection);
	END_INTERFACE
}  IRTCIntensityEventVtbl;
interface IRTCIntensityEvent
{
	CONST_VTBL struct IRTCIntensityEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCIntensityEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCIntensityEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCIntensityEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCIntensityEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCIntensityEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCIntensityEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCIntensityEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCIntensityEvent_get_Level(This,plLevel) ( (This)->lpVtbl -> get_Level(This,plLevel) )
#define IRTCIntensityEvent_get_Min(This,plMin) ( (This)->lpVtbl -> get_Min(This,plMin) )
#define IRTCIntensityEvent_get_Max(This,plMax) ( (This)->lpVtbl -> get_Max(This,plMax) )
#define IRTCIntensityEvent_get_Direction(This,penDirection) ( (This)->lpVtbl -> get_Direction(This,penDirection) )
#endif
#endif
#ifndef __IRTCMessagingEvent_INTERFACE_DEFINED__
#define __IRTCMessagingEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCMessagingEvent;
typedef struct IRTCMessagingEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCMessagingEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCMessagingEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCMessagingEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCMessagingEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCMessagingEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCMessagingEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCMessagingEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCMessagingEvent * This, IRTCSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Participant) (IRTCMessagingEvent * This, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCMessagingEvent * This, RTC_MESSAGING_EVENT_TYPE * penEventType);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IRTCMessagingEvent * This, BSTR * pbstrMessage);
	HRESULT(STDMETHODCALLTYPE * get_MessageHeader) (IRTCMessagingEvent * This, BSTR * pbstrMessageHeader);
	HRESULT(STDMETHODCALLTYPE * get_UserStatus) (IRTCMessagingEvent * This, RTC_MESSAGING_USER_STATUS * penUserStatus);
	END_INTERFACE
}  IRTCMessagingEventVtbl;
interface IRTCMessagingEvent
{
	CONST_VTBL struct IRTCMessagingEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCMessagingEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCMessagingEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCMessagingEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCMessagingEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCMessagingEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCMessagingEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCMessagingEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCMessagingEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCMessagingEvent_get_Participant(This,ppParticipant) ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
#define IRTCMessagingEvent_get_EventType(This,penEventType) ( (This)->lpVtbl -> get_EventType(This,penEventType) )
#define IRTCMessagingEvent_get_Message(This,pbstrMessage) ( (This)->lpVtbl -> get_Message(This,pbstrMessage) )
#define IRTCMessagingEvent_get_MessageHeader(This,pbstrMessageHeader) ( (This)->lpVtbl -> get_MessageHeader(This,pbstrMessageHeader) )
#define IRTCMessagingEvent_get_UserStatus(This,penUserStatus) ( (This)->lpVtbl -> get_UserStatus(This,penUserStatus) )
#endif
#endif
#ifndef __IRTCBuddyEvent_INTERFACE_DEFINED__
#define __IRTCBuddyEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddyEvent;
typedef struct IRTCBuddyEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddyEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddyEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddyEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCBuddyEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCBuddyEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCBuddyEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCBuddyEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Buddy) (IRTCBuddyEvent * This, IRTCBuddy ** ppBuddy);
	END_INTERFACE
}  IRTCBuddyEventVtbl;
interface IRTCBuddyEvent
{
	CONST_VTBL struct IRTCBuddyEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddyEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddyEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddyEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddyEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCBuddyEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCBuddyEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCBuddyEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCBuddyEvent_get_Buddy(This,ppBuddy) ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
#endif
#endif
#ifndef __IRTCBuddyEvent2_INTERFACE_DEFINED__
#define __IRTCBuddyEvent2_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddyEvent2;
typedef struct IRTCBuddyEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddyEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddyEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddyEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCBuddyEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCBuddyEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCBuddyEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCBuddyEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Buddy) (IRTCBuddyEvent2 * This, IRTCBuddy ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCBuddyEvent2 * This, RTC_BUDDY_EVENT_TYPE * pEventType);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCBuddyEvent2 * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCBuddyEvent2 * This, BSTR * pbstrStatusText);
END_INTERFACE
}  IRTCBuddyEvent2Vtbl;
interface IRTCBuddyEvent2
{
	CONST_VTBL struct IRTCBuddyEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddyEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddyEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddyEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddyEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCBuddyEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCBuddyEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCBuddyEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCBuddyEvent2_get_Buddy(This,ppBuddy) ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
#define IRTCBuddyEvent2_get_EventType(This,pEventType) ( (This)->lpVtbl -> get_EventType(This,pEventType) )
#define IRTCBuddyEvent2_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCBuddyEvent2_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCWatcherEvent_INTERFACE_DEFINED__
#define __IRTCWatcherEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCWatcherEvent;
typedef struct IRTCWatcherEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCWatcherEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCWatcherEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCWatcherEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCWatcherEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCWatcherEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCWatcherEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCWatcherEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Watcher) (IRTCWatcherEvent * This, IRTCWatcher ** ppWatcher);
	END_INTERFACE
}  IRTCWatcherEventVtbl;
interface IRTCWatcherEvent
{
	CONST_VTBL struct IRTCWatcherEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCWatcherEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCWatcherEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCWatcherEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCWatcherEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCWatcherEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCWatcherEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCWatcherEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCWatcherEvent_get_Watcher(This,ppWatcher) ( (This)->lpVtbl -> get_Watcher(This,ppWatcher) )
#endif
#endif
#ifndef __IRTCWatcherEvent2_INTERFACE_DEFINED__
#define __IRTCWatcherEvent2_INTERFACE_DEFINED__
extern const IID IID_IRTCWatcherEvent2;
typedef struct IRTCWatcherEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCWatcherEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCWatcherEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCWatcherEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCWatcherEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCWatcherEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCWatcherEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCWatcherEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Watcher) (IRTCWatcherEvent2 * This, IRTCWatcher ** ppWatcher);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCWatcherEvent2 * This, RTC_WATCHER_EVENT_TYPE * pEventType);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCWatcherEvent2 * This, long *plStatusCode);
	END_INTERFACE
}  IRTCWatcherEvent2Vtbl;
interface IRTCWatcherEvent2
{
	CONST_VTBL struct IRTCWatcherEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCWatcherEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCWatcherEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCWatcherEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCWatcherEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCWatcherEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCWatcherEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCWatcherEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCWatcherEvent2_get_Watcher(This,ppWatcher) ( (This)->lpVtbl -> get_Watcher(This,ppWatcher) )
#define IRTCWatcherEvent2_get_EventType(This,pEventType) ( (This)->lpVtbl -> get_EventType(This,pEventType) )
#define IRTCWatcherEvent2_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#endif
#endif
#ifndef __IRTCBuddyGroupEvent_INTERFACE_DEFINED__
#define __IRTCBuddyGroupEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddyGroupEvent;
typedef struct IRTCBuddyGroupEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddyGroupEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddyGroupEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddyGroupEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCBuddyGroupEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCBuddyGroupEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCBuddyGroupEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCBuddyGroupEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IRTCBuddyGroupEvent * This, RTC_GROUP_EVENT_TYPE * pEventType);
	HRESULT(STDMETHODCALLTYPE * get_Group) (IRTCBuddyGroupEvent * This, IRTCBuddyGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * get_Buddy) (IRTCBuddyGroupEvent * This, IRTCBuddy2 ** ppBuddy);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCBuddyGroupEvent * This, long *plStatusCode);
	END_INTERFACE
}  IRTCBuddyGroupEventVtbl;
interface IRTCBuddyGroupEvent
{
	CONST_VTBL struct IRTCBuddyGroupEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddyGroupEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddyGroupEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddyGroupEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddyGroupEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCBuddyGroupEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCBuddyGroupEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCBuddyGroupEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCBuddyGroupEvent_get_EventType(This,pEventType) ( (This)->lpVtbl -> get_EventType(This,pEventType) )
#define IRTCBuddyGroupEvent_get_Group(This,ppGroup) ( (This)->lpVtbl -> get_Group(This,ppGroup) )
#define IRTCBuddyGroupEvent_get_Buddy(This,ppBuddy) ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
#define IRTCBuddyGroupEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#endif
#endif
#ifndef __IRTCInfoEvent_INTERFACE_DEFINED__
#define __IRTCInfoEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCInfoEvent;
typedef struct IRTCInfoEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCInfoEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCInfoEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCInfoEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCInfoEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCInfoEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCInfoEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCInfoEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCInfoEvent * This, IRTCSession2 ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Participant) (IRTCInfoEvent * This, IRTCParticipant ** ppParticipant);
	HRESULT(STDMETHODCALLTYPE * get_Info) (IRTCInfoEvent * This, BSTR * pbstrInfo);
	HRESULT(STDMETHODCALLTYPE * get_InfoHeader) (IRTCInfoEvent * This, BSTR * pbstrInfoHeader);
	END_INTERFACE
}  IRTCInfoEventVtbl;
interface IRTCInfoEvent
{
	CONST_VTBL struct IRTCInfoEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCInfoEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCInfoEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCInfoEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCInfoEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCInfoEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCInfoEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCInfoEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCInfoEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCInfoEvent_get_Participant(This,ppParticipant) ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
#define IRTCInfoEvent_get_Info(This,pbstrInfo) ( (This)->lpVtbl -> get_Info(This,pbstrInfo) )
#define IRTCInfoEvent_get_InfoHeader(This,pbstrInfoHeader) ( (This)->lpVtbl -> get_InfoHeader(This,pbstrInfoHeader) )
#endif
#endif
#ifndef __IRTCMediaRequestEvent_INTERFACE_DEFINED__
#define __IRTCMediaRequestEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCMediaRequestEvent;
typedef struct IRTCMediaRequestEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCMediaRequestEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCMediaRequestEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCMediaRequestEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCMediaRequestEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCMediaRequestEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCMediaRequestEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCMediaRequestEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCMediaRequestEvent * This, IRTCSession2 ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_ProposedMedia) (IRTCMediaRequestEvent * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * get_CurrentMedia) (IRTCMediaRequestEvent * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * Accept) (IRTCMediaRequestEvent * This, long lMediaTypes);
	HRESULT(STDMETHODCALLTYPE * get_RemotePreferredSecurityLevel) (IRTCMediaRequestEvent * This, RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL * penSecurityLevel);
	HRESULT(STDMETHODCALLTYPE * Reject) (IRTCMediaRequestEvent * This);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCMediaRequestEvent * This, RTC_REINVITE_STATE * pState);
	END_INTERFACE
}  IRTCMediaRequestEventVtbl;
interface IRTCMediaRequestEvent
{
	CONST_VTBL struct IRTCMediaRequestEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCMediaRequestEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCMediaRequestEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCMediaRequestEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCMediaRequestEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCMediaRequestEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCMediaRequestEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCMediaRequestEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCMediaRequestEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCMediaRequestEvent_get_ProposedMedia(This,plMediaTypes) ( (This)->lpVtbl -> get_ProposedMedia(This,plMediaTypes) )
#define IRTCMediaRequestEvent_get_CurrentMedia(This,plMediaTypes) ( (This)->lpVtbl -> get_CurrentMedia(This,plMediaTypes) )
#define IRTCMediaRequestEvent_Accept(This,lMediaTypes) ( (This)->lpVtbl -> Accept(This,lMediaTypes) )
#define IRTCMediaRequestEvent_get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) ( (This)->lpVtbl -> get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
#define IRTCMediaRequestEvent_Reject(This) ( (This)->lpVtbl -> Reject(This) )
#define IRTCMediaRequestEvent_get_State(This,pState) ( (This)->lpVtbl -> get_State(This,pState) )
#endif
#endif
#ifndef __IRTCReInviteEvent_INTERFACE_DEFINED__
#define __IRTCReInviteEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCReInviteEvent;
typedef struct IRTCReInviteEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRTCReInviteEvent *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCReInviteEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCReInviteEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCReInviteEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCReInviteEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCReInviteEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCReInviteEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCReInviteEvent * This, IRTCSession2 ** ppSession2);
	HRESULT(STDMETHODCALLTYPE * Accept) (IRTCReInviteEvent * This, BSTR bstrContentType, BSTR bstrSessionDescription);
	HRESULT(STDMETHODCALLTYPE * Reject) (IRTCReInviteEvent * This);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCReInviteEvent * This, RTC_REINVITE_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * GetRemoteSessionDescription) (IRTCReInviteEvent * This, BSTR * pbstrContentType, BSTR * pbstrSessionDescription);
	END_INTERFACE
}  IRTCReInviteEventVtbl;
interface IRTCReInviteEvent
{
	CONST_VTBL struct IRTCReInviteEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCReInviteEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCReInviteEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCReInviteEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCReInviteEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCReInviteEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCReInviteEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCReInviteEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCReInviteEvent_get_Session(This,ppSession2) ( (This)->lpVtbl -> get_Session(This,ppSession2) )
#define IRTCReInviteEvent_Accept(This,bstrContentType,bstrSessionDescription) ( (This)->lpVtbl -> Accept(This,bstrContentType,bstrSessionDescription) )
#define IRTCReInviteEvent_Reject(This) ( (This)->lpVtbl -> Reject(This) )
#define IRTCReInviteEvent_get_State(This,pState) ( (This)->lpVtbl -> get_State(This,pState) )
#define IRTCReInviteEvent_GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
#endif
#endif
#ifndef __IRTCPresencePropertyEvent_INTERFACE_DEFINED__
#define __IRTCPresencePropertyEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCPresencePropertyEvent;
typedef struct IRTCPresencePropertyEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPresencePropertyEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPresencePropertyEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPresencePropertyEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCPresencePropertyEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCPresencePropertyEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCPresencePropertyEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCPresencePropertyEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCPresencePropertyEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCPresencePropertyEvent * This, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * get_PresenceProperty) (IRTCPresencePropertyEvent * This, RTC_PRESENCE_PROPERTY * penPresProp);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IRTCPresencePropertyEvent * This, BSTR * pbstrValue);
	END_INTERFACE
}  IRTCPresencePropertyEventVtbl;
interface IRTCPresencePropertyEvent
{
	CONST_VTBL struct IRTCPresencePropertyEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPresencePropertyEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPresencePropertyEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPresencePropertyEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPresencePropertyEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCPresencePropertyEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCPresencePropertyEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCPresencePropertyEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCPresencePropertyEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCPresencePropertyEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#define IRTCPresencePropertyEvent_get_PresenceProperty(This,penPresProp) ( (This)->lpVtbl -> get_PresenceProperty(This,penPresProp) )
#define IRTCPresencePropertyEvent_get_Value(This,pbstrValue) ( (This)->lpVtbl -> get_Value(This,pbstrValue) )
#endif
#endif
#ifndef __IRTCPresenceDataEvent_INTERFACE_DEFINED__
#define __IRTCPresenceDataEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCPresenceDataEvent;
typedef struct IRTCPresenceDataEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPresenceDataEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPresenceDataEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPresenceDataEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCPresenceDataEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCPresenceDataEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCPresenceDataEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCPresenceDataEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCPresenceDataEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCPresenceDataEvent * This, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * GetPresenceData) (IRTCPresenceDataEvent * This, BSTR * pbstrNamespace, BSTR * pbstrData);
	END_INTERFACE
}  IRTCPresenceDataEventVtbl;
interface IRTCPresenceDataEvent
{
	CONST_VTBL struct IRTCPresenceDataEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPresenceDataEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPresenceDataEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPresenceDataEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPresenceDataEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCPresenceDataEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCPresenceDataEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCPresenceDataEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCPresenceDataEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCPresenceDataEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#define IRTCPresenceDataEvent_GetPresenceData(This,pbstrNamespace,pbstrData) ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
#endif
#endif
#ifndef __IRTCPresenceStatusEvent_INTERFACE_DEFINED__
#define __IRTCPresenceStatusEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCPresenceStatusEvent;
typedef struct IRTCPresenceStatusEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPresenceStatusEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPresenceStatusEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPresenceStatusEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCPresenceStatusEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCPresenceStatusEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCPresenceStatusEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCPresenceStatusEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCPresenceStatusEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCPresenceStatusEvent * This, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * GetLocalPresenceInfo) (IRTCPresenceStatusEvent * This, RTC_PRESENCE_STATUS * penStatus, BSTR * pbstrNotes);
	END_INTERFACE
}  IRTCPresenceStatusEventVtbl;
interface IRTCPresenceStatusEvent
{
	CONST_VTBL struct IRTCPresenceStatusEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPresenceStatusEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPresenceStatusEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPresenceStatusEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPresenceStatusEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCPresenceStatusEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCPresenceStatusEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCPresenceStatusEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCPresenceStatusEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCPresenceStatusEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#define IRTCPresenceStatusEvent_GetLocalPresenceInfo(This,penStatus,pbstrNotes) ( (This)->lpVtbl -> GetLocalPresenceInfo(This,penStatus,pbstrNotes) )
#endif
#endif
#ifndef __IRTCCollection_INTERFACE_DEFINED__
#define __IRTCCollection_INTERFACE_DEFINED__
extern const IID IID_IRTCCollection;
typedef struct IRTCCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IRTCCollection * This, long *lCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRTCCollection * This, long Index, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRTCCollection * This, IUnknown ** ppNewEnum);
	END_INTERFACE
}  IRTCCollectionVtbl;
interface IRTCCollection
{
	CONST_VTBL struct IRTCCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCCollection_get_Count(This,lCount) ( (This)->lpVtbl -> get_Count(This,lCount) )
#define IRTCCollection_get_Item(This,Index,pVariant) ( (This)->lpVtbl -> get_Item(This,Index,pVariant) )
#define IRTCCollection_get__NewEnum(This,ppNewEnum) ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#endif
#endif
#ifndef __IRTCEnumParticipants_INTERFACE_DEFINED__
#define __IRTCEnumParticipants_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumParticipants;
typedef struct IRTCEnumParticipantsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumParticipants * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumParticipants * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumParticipants * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumParticipants * This, ULONG celt, IRTCParticipant ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumParticipants * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumParticipants * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumParticipants * This, IRTCEnumParticipants ** ppEnum);
	END_INTERFACE
}  IRTCEnumParticipantsVtbl;
interface IRTCEnumParticipants
{
	CONST_VTBL struct IRTCEnumParticipantsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumParticipants_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumParticipants_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumParticipants_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumParticipants_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumParticipants_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumParticipants_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumParticipants_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCEnumProfiles_INTERFACE_DEFINED__
#define __IRTCEnumProfiles_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumProfiles;
typedef struct IRTCEnumProfilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumProfiles * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumProfiles * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumProfiles * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumProfiles * This, ULONG celt, IRTCProfile ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumProfiles * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumProfiles * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumProfiles * This, IRTCEnumProfiles ** ppEnum);
	END_INTERFACE
}  IRTCEnumProfilesVtbl;
interface IRTCEnumProfiles
{
	CONST_VTBL struct IRTCEnumProfilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumProfiles_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumProfiles_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumProfiles_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumProfiles_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumProfiles_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumProfiles_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumProfiles_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCEnumBuddies_INTERFACE_DEFINED__
#define __IRTCEnumBuddies_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumBuddies;
typedef struct IRTCEnumBuddiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumBuddies * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumBuddies * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumBuddies * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumBuddies * This, ULONG celt, IRTCBuddy ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumBuddies * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumBuddies * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumBuddies * This, IRTCEnumBuddies ** ppEnum);
	END_INTERFACE
}  IRTCEnumBuddiesVtbl;
interface IRTCEnumBuddies
{
	CONST_VTBL struct IRTCEnumBuddiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumBuddies_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumBuddies_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumBuddies_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumBuddies_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumBuddies_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumBuddies_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumBuddies_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCEnumWatchers_INTERFACE_DEFINED__
#define __IRTCEnumWatchers_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumWatchers;
typedef struct IRTCEnumWatchersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumWatchers * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumWatchers * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumWatchers * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumWatchers * This, ULONG celt, IRTCWatcher ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumWatchers * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumWatchers * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumWatchers * This, IRTCEnumWatchers ** ppEnum);
	END_INTERFACE
}  IRTCEnumWatchersVtbl;
interface IRTCEnumWatchers
{
	CONST_VTBL struct IRTCEnumWatchersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumWatchers_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumWatchers_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumWatchers_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumWatchers_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumWatchers_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumWatchers_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumWatchers_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCEnumGroups_INTERFACE_DEFINED__
#define __IRTCEnumGroups_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumGroups;
typedef struct IRTCEnumGroupsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumGroups * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumGroups * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumGroups * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumGroups * This, ULONG celt, IRTCBuddyGroup ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumGroups * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumGroups * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumGroups * This, IRTCEnumGroups ** ppEnum);
	END_INTERFACE
}  IRTCEnumGroupsVtbl;
interface IRTCEnumGroups
{
	CONST_VTBL struct IRTCEnumGroupsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumGroups_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumGroups_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumGroups_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumGroups_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumGroups_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumGroups_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumGroups_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCPresenceContact_INTERFACE_DEFINED__
#define __IRTCPresenceContact_INTERFACE_DEFINED__
extern const IID IID_IRTCPresenceContact;
typedef struct IRTCPresenceContactVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPresenceContact * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPresenceContact * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPresenceContact * This);
	HRESULT(STDMETHODCALLTYPE * get_PresentityURI) (IRTCPresenceContact * This, BSTR * pbstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * put_PresentityURI) (IRTCPresenceContact * This, BSTR bstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCPresenceContact * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCPresenceContact * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCPresenceContact * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCPresenceContact * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Persistent) (IRTCPresenceContact * This, VARIANT_BOOL * pfPersistent);
	HRESULT(STDMETHODCALLTYPE * put_Persistent) (IRTCPresenceContact * This, VARIANT_BOOL fPersistent);
	END_INTERFACE
}  IRTCPresenceContactVtbl;
interface IRTCPresenceContact
{
	CONST_VTBL struct IRTCPresenceContactVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPresenceContact_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPresenceContact_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPresenceContact_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPresenceContact_get_PresentityURI(This,pbstrPresentityURI) ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
#define IRTCPresenceContact_put_PresentityURI(This,bstrPresentityURI) ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
#define IRTCPresenceContact_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCPresenceContact_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IRTCPresenceContact_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCPresenceContact_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCPresenceContact_get_Persistent(This,pfPersistent) ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
#define IRTCPresenceContact_put_Persistent(This,fPersistent) ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
#endif
#endif
#ifndef __IRTCBuddy_INTERFACE_DEFINED__
#define __IRTCBuddy_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddy;
typedef struct IRTCBuddyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddy * This);
	HRESULT(STDMETHODCALLTYPE * get_PresentityURI) (IRTCBuddy * This, BSTR * pbstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * put_PresentityURI) (IRTCBuddy * This, BSTR bstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCBuddy * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCBuddy * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCBuddy * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCBuddy * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Persistent) (IRTCBuddy * This, VARIANT_BOOL * pfPersistent);
	HRESULT(STDMETHODCALLTYPE * put_Persistent) (IRTCBuddy * This, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IRTCBuddy * This, RTC_PRESENCE_STATUS * penStatus);
	HRESULT(STDMETHODCALLTYPE * get_Notes) (IRTCBuddy * This, BSTR * pbstrNotes);
	END_INTERFACE
}  IRTCBuddyVtbl;
interface IRTCBuddy
{
	CONST_VTBL struct IRTCBuddyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddy_get_PresentityURI(This,pbstrPresentityURI) ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
#define IRTCBuddy_put_PresentityURI(This,bstrPresentityURI) ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
#define IRTCBuddy_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCBuddy_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IRTCBuddy_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCBuddy_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCBuddy_get_Persistent(This,pfPersistent) ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
#define IRTCBuddy_put_Persistent(This,fPersistent) ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
#define IRTCBuddy_get_Status(This,penStatus) ( (This)->lpVtbl -> get_Status(This,penStatus) )
#define IRTCBuddy_get_Notes(This,pbstrNotes) ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
#endif
#endif
#ifndef __IRTCBuddy2_INTERFACE_DEFINED__
#define __IRTCBuddy2_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddy2;
typedef struct IRTCBuddy2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddy2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddy2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddy2 * This);
	HRESULT(STDMETHODCALLTYPE * get_PresentityURI) (IRTCBuddy2 * This, BSTR * pbstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * put_PresentityURI) (IRTCBuddy2 * This, BSTR bstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCBuddy2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCBuddy2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCBuddy2 * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCBuddy2 * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Persistent) (IRTCBuddy2 * This, VARIANT_BOOL * pfPersistent);
	HRESULT(STDMETHODCALLTYPE * put_Persistent) (IRTCBuddy2 * This, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IRTCBuddy2 * This, RTC_PRESENCE_STATUS * penStatus);
	HRESULT(STDMETHODCALLTYPE * get_Notes) (IRTCBuddy2 * This, BSTR * pbstrNotes);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCBuddy2 * This, IRTCProfile2 ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IRTCBuddy2 * This);
	HRESULT(STDMETHODCALLTYPE * EnumerateGroups) (IRTCBuddy2 * This, IRTCEnumGroups ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Groups) (IRTCBuddy2 * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_PresenceProperty) (IRTCBuddy2 * This, RTC_PRESENCE_PROPERTY enProperty, BSTR * pbstrProperty);
	HRESULT(STDMETHODCALLTYPE * EnumeratePresenceDevices) (IRTCBuddy2 * This, IRTCEnumPresenceDevices ** ppEnumDevices);
	HRESULT(STDMETHODCALLTYPE * get_PresenceDevices) (IRTCBuddy2 * This, IRTCCollection ** ppDevicesCollection);
	HRESULT(STDMETHODCALLTYPE * get_SubscriptionType) (IRTCBuddy2 * This, RTC_BUDDY_SUBSCRIPTION_TYPE * penSubscriptionType);
	END_INTERFACE
}  IRTCBuddy2Vtbl;
interface IRTCBuddy2
{
	CONST_VTBL struct IRTCBuddy2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddy2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddy2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddy2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddy2_get_PresentityURI(This,pbstrPresentityURI) ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
#define IRTCBuddy2_put_PresentityURI(This,bstrPresentityURI) ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
#define IRTCBuddy2_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCBuddy2_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IRTCBuddy2_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCBuddy2_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCBuddy2_get_Persistent(This,pfPersistent) ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
#define IRTCBuddy2_put_Persistent(This,fPersistent) ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
#define IRTCBuddy2_get_Status(This,penStatus) ( (This)->lpVtbl -> get_Status(This,penStatus) )
#define IRTCBuddy2_get_Notes(This,pbstrNotes) ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
#define IRTCBuddy2_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCBuddy2_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IRTCBuddy2_EnumerateGroups(This,ppEnum) ( (This)->lpVtbl -> EnumerateGroups(This,ppEnum) )
#define IRTCBuddy2_get_Groups(This,ppCollection) ( (This)->lpVtbl -> get_Groups(This,ppCollection) )
#define IRTCBuddy2_get_PresenceProperty(This,enProperty,pbstrProperty) ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
#define IRTCBuddy2_EnumeratePresenceDevices(This,ppEnumDevices) ( (This)->lpVtbl -> EnumeratePresenceDevices(This,ppEnumDevices) )
#define IRTCBuddy2_get_PresenceDevices(This,ppDevicesCollection) ( (This)->lpVtbl -> get_PresenceDevices(This,ppDevicesCollection) )
#define IRTCBuddy2_get_SubscriptionType(This,penSubscriptionType) ( (This)->lpVtbl -> get_SubscriptionType(This,penSubscriptionType) )
#endif
#endif
#ifndef __IRTCWatcher_INTERFACE_DEFINED__
#define __IRTCWatcher_INTERFACE_DEFINED__
extern const IID IID_IRTCWatcher;
typedef struct IRTCWatcherVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCWatcher * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCWatcher * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCWatcher * This);
	HRESULT(STDMETHODCALLTYPE * get_PresentityURI) (IRTCWatcher * This, BSTR * pbstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * put_PresentityURI) (IRTCWatcher * This, BSTR bstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCWatcher * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCWatcher * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCWatcher * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCWatcher * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Persistent) (IRTCWatcher * This, VARIANT_BOOL * pfPersistent);
	HRESULT(STDMETHODCALLTYPE * put_Persistent) (IRTCWatcher * This, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCWatcher * This, RTC_WATCHER_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * put_State) (IRTCWatcher * This, RTC_WATCHER_STATE enState);
	END_INTERFACE
}  IRTCWatcherVtbl;
interface IRTCWatcher
{
	CONST_VTBL struct IRTCWatcherVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCWatcher_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCWatcher_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCWatcher_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCWatcher_get_PresentityURI(This,pbstrPresentityURI) ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
#define IRTCWatcher_put_PresentityURI(This,bstrPresentityURI) ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
#define IRTCWatcher_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCWatcher_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IRTCWatcher_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCWatcher_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCWatcher_get_Persistent(This,pfPersistent) ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
#define IRTCWatcher_put_Persistent(This,fPersistent) ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
#define IRTCWatcher_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCWatcher_put_State(This,enState) ( (This)->lpVtbl -> put_State(This,enState) )
#endif
#endif
#ifndef __IRTCWatcher2_INTERFACE_DEFINED__
#define __IRTCWatcher2_INTERFACE_DEFINED__
extern const IID IID_IRTCWatcher2;
typedef struct IRTCWatcher2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCWatcher2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCWatcher2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCWatcher2 * This);
	HRESULT(STDMETHODCALLTYPE * get_PresentityURI) (IRTCWatcher2 * This, BSTR * pbstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * put_PresentityURI) (IRTCWatcher2 * This, BSTR bstrPresentityURI);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCWatcher2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCWatcher2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCWatcher2 * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCWatcher2 * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Persistent) (IRTCWatcher2 * This, VARIANT_BOOL * pfPersistent);
	HRESULT(STDMETHODCALLTYPE * put_Persistent) (IRTCWatcher2 * This, VARIANT_BOOL fPersistent);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRTCWatcher2 * This, RTC_WATCHER_STATE * penState);
	HRESULT(STDMETHODCALLTYPE * put_State) (IRTCWatcher2 * This, RTC_WATCHER_STATE enState);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCWatcher2 * This, IRTCProfile2 ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (IRTCWatcher2 * This, RTC_ACE_SCOPE * penScope);
	END_INTERFACE
}  IRTCWatcher2Vtbl;
interface IRTCWatcher2
{
	CONST_VTBL struct IRTCWatcher2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCWatcher2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCWatcher2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCWatcher2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCWatcher2_get_PresentityURI(This,pbstrPresentityURI) ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
#define IRTCWatcher2_put_PresentityURI(This,bstrPresentityURI) ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
#define IRTCWatcher2_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRTCWatcher2_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IRTCWatcher2_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCWatcher2_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCWatcher2_get_Persistent(This,pfPersistent) ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
#define IRTCWatcher2_put_Persistent(This,fPersistent) ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
#define IRTCWatcher2_get_State(This,penState) ( (This)->lpVtbl -> get_State(This,penState) )
#define IRTCWatcher2_put_State(This,enState) ( (This)->lpVtbl -> put_State(This,enState) )
#define IRTCWatcher2_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCWatcher2_get_Scope(This,penScope) ( (This)->lpVtbl -> get_Scope(This,penScope) )
#endif
#endif
#ifndef __IRTCBuddyGroup_INTERFACE_DEFINED__
#define __IRTCBuddyGroup_INTERFACE_DEFINED__
extern const IID IID_IRTCBuddyGroup;
typedef struct IRTCBuddyGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCBuddyGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCBuddyGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCBuddyGroup * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRTCBuddyGroup * This, BSTR * pbstrGroupName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IRTCBuddyGroup * This, BSTR bstrGroupName);
	HRESULT(STDMETHODCALLTYPE * AddBuddy) (IRTCBuddyGroup * This, IRTCBuddy * pBuddy);
	HRESULT(STDMETHODCALLTYPE * RemoveBuddy) (IRTCBuddyGroup * This, IRTCBuddy * pBuddy);
	HRESULT(STDMETHODCALLTYPE * EnumerateBuddies) (IRTCBuddyGroup * This, IRTCEnumBuddies ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Buddies) (IRTCBuddyGroup * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IRTCBuddyGroup * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IRTCBuddyGroup * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCBuddyGroup * This, IRTCProfile2 ** ppProfile);
	END_INTERFACE
}  IRTCBuddyGroupVtbl;
interface IRTCBuddyGroup
{
	CONST_VTBL struct IRTCBuddyGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCBuddyGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCBuddyGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCBuddyGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCBuddyGroup_get_Name(This,pbstrGroupName) ( (This)->lpVtbl -> get_Name(This,pbstrGroupName) )
#define IRTCBuddyGroup_put_Name(This,bstrGroupName) ( (This)->lpVtbl -> put_Name(This,bstrGroupName) )
#define IRTCBuddyGroup_AddBuddy(This,pBuddy) ( (This)->lpVtbl -> AddBuddy(This,pBuddy) )
#define IRTCBuddyGroup_RemoveBuddy(This,pBuddy) ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
#define IRTCBuddyGroup_EnumerateBuddies(This,ppEnum) ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
#define IRTCBuddyGroup_get_Buddies(This,ppCollection) ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
#define IRTCBuddyGroup_get_Data(This,pbstrData) ( (This)->lpVtbl -> get_Data(This,pbstrData) )
#define IRTCBuddyGroup_put_Data(This,bstrData) ( (This)->lpVtbl -> put_Data(This,bstrData) )
#define IRTCBuddyGroup_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#endif
#endif
#ifndef __IRTCEventNotification_INTERFACE_DEFINED__
#define __IRTCEventNotification_INTERFACE_DEFINED__
extern const IID IID_IRTCEventNotification;
typedef struct IRTCEventNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEventNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEventNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEventNotification * This);
	HRESULT(STDMETHODCALLTYPE * Event) (IRTCEventNotification * This, RTC_EVENT RTCEvent, IDispatch * pEvent);
	END_INTERFACE
}  IRTCEventNotificationVtbl;
interface IRTCEventNotification
{
	CONST_VTBL struct IRTCEventNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEventNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEventNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEventNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEventNotification_Event(This,RTCEvent,pEvent) ( (This)->lpVtbl -> Event(This,RTCEvent,pEvent) )
#endif
#endif
#ifndef __IRTCPortManager_INTERFACE_DEFINED__
#define __IRTCPortManager_INTERFACE_DEFINED__
extern const IID IID_IRTCPortManager;
typedef struct IRTCPortManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPortManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPortManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPortManager * This);
	HRESULT(STDMETHODCALLTYPE * GetMapping) (IRTCPortManager * This, BSTR bstrRemoteAddress, RTC_PORT_TYPE enPortType, BSTR * pbstrInternalLocalAddress, long *plInternalLocalPort, BSTR * pbstrExternalLocalAddress, long *plExternalLocalPort);
	HRESULT(STDMETHODCALLTYPE * UpdateRemoteAddress) (IRTCPortManager * This, BSTR bstrRemoteAddress, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
	HRESULT(STDMETHODCALLTYPE * ReleaseMapping) (IRTCPortManager * This, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalAddress);
	END_INTERFACE
}  IRTCPortManagerVtbl;
interface IRTCPortManager
{
	CONST_VTBL struct IRTCPortManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPortManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPortManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPortManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPortManager_GetMapping(This,bstrRemoteAddress,enPortType,pbstrInternalLocalAddress,plInternalLocalPort,pbstrExternalLocalAddress,plExternalLocalPort) ( (This)->lpVtbl -> GetMapping(This,bstrRemoteAddress,enPortType,pbstrInternalLocalAddress,plInternalLocalPort,pbstrExternalLocalAddress,plExternalLocalPort) )
#define IRTCPortManager_UpdateRemoteAddress(This,bstrRemoteAddress,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalPort) ( (This)->lpVtbl -> UpdateRemoteAddress(This,bstrRemoteAddress,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalPort) )
#define IRTCPortManager_ReleaseMapping(This,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalAddress) ( (This)->lpVtbl -> ReleaseMapping(This,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalAddress) )
#endif
#endif
#ifndef __IRTCSessionPortManagement_INTERFACE_DEFINED__
#define __IRTCSessionPortManagement_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionPortManagement;
typedef struct IRTCSessionPortManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionPortManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionPortManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionPortManagement * This);
	HRESULT(STDMETHODCALLTYPE * SetPortManager) (IRTCSessionPortManagement * This, IRTCPortManager * pPortManager);
	END_INTERFACE
}  IRTCSessionPortManagementVtbl;
interface IRTCSessionPortManagement
{
	CONST_VTBL struct IRTCSessionPortManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionPortManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionPortManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionPortManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionPortManagement_SetPortManager(This,pPortManager) ( (This)->lpVtbl -> SetPortManager(This,pPortManager) )
#endif
#endif
#ifndef __IRTCClientPortManagement_INTERFACE_DEFINED__
#define __IRTCClientPortManagement_INTERFACE_DEFINED__
extern const IID IID_IRTCClientPortManagement;
typedef struct IRTCClientPortManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCClientPortManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCClientPortManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCClientPortManagement * This);
	HRESULT(STDMETHODCALLTYPE * StartListenAddressAndPort) (IRTCClientPortManagement * This, BSTR bstrInternalLocalAddress, long lInternalLocalPort);
	HRESULT(STDMETHODCALLTYPE * StopListenAddressAndPort) (IRTCClientPortManagement * This, BSTR bstrInternalLocalAddress, long lInternalLocalPort);
	HRESULT(STDMETHODCALLTYPE * GetPortRange) (IRTCClientPortManagement * This, RTC_PORT_TYPE enPortType, long *plMinValue, long *plMaxValue);
	END_INTERFACE
}  IRTCClientPortManagementVtbl;
interface IRTCClientPortManagement
{
	CONST_VTBL struct IRTCClientPortManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCClientPortManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCClientPortManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCClientPortManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCClientPortManagement_StartListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) ( (This)->lpVtbl -> StartListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) )
#define IRTCClientPortManagement_StopListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) ( (This)->lpVtbl -> StopListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) )
#define IRTCClientPortManagement_GetPortRange(This,enPortType,plMinValue,plMaxValue) ( (This)->lpVtbl -> GetPortRange(This,enPortType,plMinValue,plMaxValue) )
#endif
#endif
#ifndef __IRTCUserSearch_INTERFACE_DEFINED__
#define __IRTCUserSearch_INTERFACE_DEFINED__
extern const IID IID_IRTCUserSearch;
typedef struct IRTCUserSearchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCUserSearch * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCUserSearch * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCUserSearch * This);
	HRESULT(STDMETHODCALLTYPE * CreateQuery) (IRTCUserSearch * This, IRTCUserSearchQuery ** ppQuery);
	HRESULT(STDMETHODCALLTYPE * ExecuteSearch) (IRTCUserSearch * This, IRTCUserSearchQuery * pQuery, IRTCProfile * pProfile, LONG_PTR lCookie);
	END_INTERFACE
}  IRTCUserSearchVtbl;
interface IRTCUserSearch
{
	CONST_VTBL struct IRTCUserSearchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCUserSearch_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCUserSearch_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCUserSearch_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCUserSearch_CreateQuery(This,ppQuery) ( (This)->lpVtbl -> CreateQuery(This,ppQuery) )
#define IRTCUserSearch_ExecuteSearch(This,pQuery,pProfile,lCookie) ( (This)->lpVtbl -> ExecuteSearch(This,pQuery,pProfile,lCookie) )
#endif
#endif
#ifndef __IRTCUserSearchQuery_INTERFACE_DEFINED__
#define __IRTCUserSearchQuery_INTERFACE_DEFINED__
extern const IID IID_IRTCUserSearchQuery;
typedef struct IRTCUserSearchQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCUserSearchQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCUserSearchQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCUserSearchQuery * This);
	HRESULT(STDMETHODCALLTYPE * put_SearchTerm) (IRTCUserSearchQuery * This, BSTR bstrName, BSTR bstrValue);
	HRESULT(STDMETHODCALLTYPE * get_SearchTerm) (IRTCUserSearchQuery * This, BSTR bstrName, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * get_SearchTerms) (IRTCUserSearchQuery * This, BSTR * pbstrNames);
	HRESULT(STDMETHODCALLTYPE * put_SearchPreference) (IRTCUserSearchQuery * This, RTC_USER_SEARCH_PREFERENCE enPreference, long lValue);
	HRESULT(STDMETHODCALLTYPE * get_SearchPreference) (IRTCUserSearchQuery * This, RTC_USER_SEARCH_PREFERENCE enPreference, long *plValue);
	HRESULT(STDMETHODCALLTYPE * put_SearchDomain) (IRTCUserSearchQuery * This, BSTR bstrDomain);
	HRESULT(STDMETHODCALLTYPE * get_SearchDomain) (IRTCUserSearchQuery * This, BSTR * pbstrDomain);
	END_INTERFACE
}  IRTCUserSearchQueryVtbl;
interface IRTCUserSearchQuery
{
	CONST_VTBL struct IRTCUserSearchQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCUserSearchQuery_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCUserSearchQuery_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCUserSearchQuery_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCUserSearchQuery_put_SearchTerm(This,bstrName,bstrValue) ( (This)->lpVtbl -> put_SearchTerm(This,bstrName,bstrValue) )
#define IRTCUserSearchQuery_get_SearchTerm(This,bstrName,pbstrValue) ( (This)->lpVtbl -> get_SearchTerm(This,bstrName,pbstrValue) )
#define IRTCUserSearchQuery_get_SearchTerms(This,pbstrNames) ( (This)->lpVtbl -> get_SearchTerms(This,pbstrNames) )
#define IRTCUserSearchQuery_put_SearchPreference(This,enPreference,lValue) ( (This)->lpVtbl -> put_SearchPreference(This,enPreference,lValue) )
#define IRTCUserSearchQuery_get_SearchPreference(This,enPreference,plValue) ( (This)->lpVtbl -> get_SearchPreference(This,enPreference,plValue) )
#define IRTCUserSearchQuery_put_SearchDomain(This,bstrDomain) ( (This)->lpVtbl -> put_SearchDomain(This,bstrDomain) )
#define IRTCUserSearchQuery_get_SearchDomain(This,pbstrDomain) ( (This)->lpVtbl -> get_SearchDomain(This,pbstrDomain) )
#endif
#endif
#ifndef __IRTCUserSearchResult_INTERFACE_DEFINED__
#define __IRTCUserSearchResult_INTERFACE_DEFINED__
extern const IID IID_IRTCUserSearchResult;
typedef struct IRTCUserSearchResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCUserSearchResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCUserSearchResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCUserSearchResult * This);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IRTCUserSearchResult * This, RTC_USER_SEARCH_COLUMN enColumn, BSTR * pbstrValue);
	END_INTERFACE
}  IRTCUserSearchResultVtbl;
interface IRTCUserSearchResult
{
	CONST_VTBL struct IRTCUserSearchResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCUserSearchResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCUserSearchResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCUserSearchResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCUserSearchResult_get_Value(This,enColumn,pbstrValue) ( (This)->lpVtbl -> get_Value(This,enColumn,pbstrValue) )
#endif
#endif
#ifndef __IRTCEnumUserSearchResults_INTERFACE_DEFINED__
#define __IRTCEnumUserSearchResults_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumUserSearchResults;
typedef struct IRTCEnumUserSearchResultsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumUserSearchResults * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumUserSearchResults * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumUserSearchResults * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumUserSearchResults * This, ULONG celt, IRTCUserSearchResult ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumUserSearchResults * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumUserSearchResults * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumUserSearchResults * This, IRTCEnumUserSearchResults ** ppEnum);
	END_INTERFACE
}  IRTCEnumUserSearchResultsVtbl;
interface IRTCEnumUserSearchResults
{
	CONST_VTBL struct IRTCEnumUserSearchResultsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumUserSearchResults_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumUserSearchResults_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumUserSearchResults_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumUserSearchResults_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumUserSearchResults_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumUserSearchResults_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumUserSearchResults_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCUserSearchResultsEvent_INTERFACE_DEFINED__
#define __IRTCUserSearchResultsEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCUserSearchResultsEvent;
typedef struct IRTCUserSearchResultsEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCUserSearchResultsEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCUserSearchResultsEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCUserSearchResultsEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCUserSearchResultsEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCUserSearchResultsEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCUserSearchResultsEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCUserSearchResultsEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EnumerateResults) (IRTCUserSearchResultsEvent * This, IRTCEnumUserSearchResults ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Results) (IRTCUserSearchResultsEvent * This, IRTCCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Profile) (IRTCUserSearchResultsEvent * This, IRTCProfile2 ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * get_Query) (IRTCUserSearchResultsEvent * This, IRTCUserSearchQuery ** ppQuery);
	HRESULT(STDMETHODCALLTYPE * get_Cookie) (IRTCUserSearchResultsEvent * This, LONG_PTR * plCookie);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCUserSearchResultsEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_MoreAvailable) (IRTCUserSearchResultsEvent * This, VARIANT_BOOL * pfMoreAvailable);
	END_INTERFACE
}  IRTCUserSearchResultsEventVtbl;
interface IRTCUserSearchResultsEvent
{
	CONST_VTBL struct IRTCUserSearchResultsEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCUserSearchResultsEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCUserSearchResultsEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCUserSearchResultsEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCUserSearchResultsEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCUserSearchResultsEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCUserSearchResultsEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCUserSearchResultsEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCUserSearchResultsEvent_EnumerateResults(This,ppEnum) ( (This)->lpVtbl -> EnumerateResults(This,ppEnum) )
#define IRTCUserSearchResultsEvent_get_Results(This,ppCollection) ( (This)->lpVtbl -> get_Results(This,ppCollection) )
#define IRTCUserSearchResultsEvent_get_Profile(This,ppProfile) ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
#define IRTCUserSearchResultsEvent_get_Query(This,ppQuery) ( (This)->lpVtbl -> get_Query(This,ppQuery) )
#define IRTCUserSearchResultsEvent_get_Cookie(This,plCookie) ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
#define IRTCUserSearchResultsEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCUserSearchResultsEvent_get_MoreAvailable(This,pfMoreAvailable) ( (This)->lpVtbl -> get_MoreAvailable(This,pfMoreAvailable) )
#endif
#endif
#ifndef __IRTCSessionReferStatusEvent_INTERFACE_DEFINED__
#define __IRTCSessionReferStatusEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionReferStatusEvent;
typedef struct IRTCSessionReferStatusEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionReferStatusEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionReferStatusEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionReferStatusEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionReferStatusEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionReferStatusEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionReferStatusEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionReferStatusEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionReferStatusEvent * This, IRTCSession2 ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_ReferStatus) (IRTCSessionReferStatusEvent * This, RTC_SESSION_REFER_STATUS * penReferStatus);
	HRESULT(STDMETHODCALLTYPE * get_StatusCode) (IRTCSessionReferStatusEvent * This, long *plStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_StatusText) (IRTCSessionReferStatusEvent * This, BSTR * pbstrStatusText);
	END_INTERFACE
}  IRTCSessionReferStatusEventVtbl;
interface IRTCSessionReferStatusEvent
{
	CONST_VTBL struct IRTCSessionReferStatusEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionReferStatusEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionReferStatusEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionReferStatusEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionReferStatusEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionReferStatusEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionReferStatusEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionReferStatusEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionReferStatusEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionReferStatusEvent_get_ReferStatus(This,penReferStatus) ( (This)->lpVtbl -> get_ReferStatus(This,penReferStatus) )
#define IRTCSessionReferStatusEvent_get_StatusCode(This,plStatusCode) ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
#define IRTCSessionReferStatusEvent_get_StatusText(This,pbstrStatusText) ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
#endif
#endif
#ifndef __IRTCSessionReferredEvent_INTERFACE_DEFINED__
#define __IRTCSessionReferredEvent_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionReferredEvent;
typedef struct IRTCSessionReferredEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionReferredEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionReferredEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionReferredEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCSessionReferredEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCSessionReferredEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCSessionReferredEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCSessionReferredEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IRTCSessionReferredEvent * This, IRTCSession2 ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_ReferredByURI) (IRTCSessionReferredEvent * This, BSTR * pbstrReferredByURI);
	HRESULT(STDMETHODCALLTYPE * get_ReferToURI) (IRTCSessionReferredEvent * This, BSTR * pbstrReferoURI);
	HRESULT(STDMETHODCALLTYPE * get_ReferCookie) (IRTCSessionReferredEvent * This, BSTR * pbstrReferCookie);
	HRESULT(STDMETHODCALLTYPE * Accept) (IRTCSessionReferredEvent * This);
	HRESULT(STDMETHODCALLTYPE * Reject) (IRTCSessionReferredEvent * This);
	HRESULT(STDMETHODCALLTYPE * SetReferredSessionState) (IRTCSessionReferredEvent * This, RTC_SESSION_STATE enState);
	END_INTERFACE
}  IRTCSessionReferredEventVtbl;
interface IRTCSessionReferredEvent
{
	CONST_VTBL struct IRTCSessionReferredEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionReferredEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionReferredEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionReferredEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionReferredEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCSessionReferredEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCSessionReferredEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCSessionReferredEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRTCSessionReferredEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IRTCSessionReferredEvent_get_ReferredByURI(This,pbstrReferredByURI) ( (This)->lpVtbl -> get_ReferredByURI(This,pbstrReferredByURI) )
#define IRTCSessionReferredEvent_get_ReferToURI(This,pbstrReferoURI) ( (This)->lpVtbl -> get_ReferToURI(This,pbstrReferoURI) )
#define IRTCSessionReferredEvent_get_ReferCookie(This,pbstrReferCookie) ( (This)->lpVtbl -> get_ReferCookie(This,pbstrReferCookie) )
#define IRTCSessionReferredEvent_Accept(This) ( (This)->lpVtbl -> Accept(This) )
#define IRTCSessionReferredEvent_Reject(This) ( (This)->lpVtbl -> Reject(This) )
#define IRTCSessionReferredEvent_SetReferredSessionState(This,enState) ( (This)->lpVtbl -> SetReferredSessionState(This,enState) )
#endif
#endif
#ifndef __IRTCSessionDescriptionManager_INTERFACE_DEFINED__
#define __IRTCSessionDescriptionManager_INTERFACE_DEFINED__
extern const IID IID_IRTCSessionDescriptionManager;
typedef struct IRTCSessionDescriptionManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCSessionDescriptionManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCSessionDescriptionManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCSessionDescriptionManager * This);
	HRESULT(STDMETHODCALLTYPE * EvaluateSessionDescription) (IRTCSessionDescriptionManager * This, BSTR bstrContentType, BSTR bstrSessionDescription, VARIANT_BOOL * pfApplicationSession);
	END_INTERFACE
}  IRTCSessionDescriptionManagerVtbl;
interface IRTCSessionDescriptionManager
{
	CONST_VTBL struct IRTCSessionDescriptionManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCSessionDescriptionManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCSessionDescriptionManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCSessionDescriptionManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCSessionDescriptionManager_EvaluateSessionDescription(This,bstrContentType,bstrSessionDescription,pfApplicationSession) ( (This)->lpVtbl -> EvaluateSessionDescription(This,bstrContentType,bstrSessionDescription,pfApplicationSession) )
#endif
#endif
#ifndef __IRTCEnumPresenceDevices_INTERFACE_DEFINED__
#define __IRTCEnumPresenceDevices_INTERFACE_DEFINED__
extern const IID IID_IRTCEnumPresenceDevices;
typedef struct IRTCEnumPresenceDevicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCEnumPresenceDevices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCEnumPresenceDevices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCEnumPresenceDevices * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IRTCEnumPresenceDevices * This, ULONG celt, IRTCPresenceDevice ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRTCEnumPresenceDevices * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IRTCEnumPresenceDevices * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IRTCEnumPresenceDevices * This, IRTCEnumPresenceDevices ** ppEnum);
	END_INTERFACE
}  IRTCEnumPresenceDevicesVtbl;
interface IRTCEnumPresenceDevices
{
	CONST_VTBL struct IRTCEnumPresenceDevicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCEnumPresenceDevices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCEnumPresenceDevices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCEnumPresenceDevices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCEnumPresenceDevices_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IRTCEnumPresenceDevices_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IRTCEnumPresenceDevices_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IRTCEnumPresenceDevices_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRTCPresenceDevice_INTERFACE_DEFINED__
#define __IRTCPresenceDevice_INTERFACE_DEFINED__
extern const IID IID_IRTCPresenceDevice;
typedef struct IRTCPresenceDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCPresenceDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCPresenceDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCPresenceDevice * This);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IRTCPresenceDevice * This, RTC_PRESENCE_STATUS * penStatus);
	HRESULT(STDMETHODCALLTYPE * get_Notes) (IRTCPresenceDevice * This, BSTR * pbstrNotes);
	HRESULT(STDMETHODCALLTYPE * get_PresenceProperty) (IRTCPresenceDevice * This, RTC_PRESENCE_PROPERTY enProperty, BSTR * pbstrProperty);
	HRESULT(STDMETHODCALLTYPE * GetPresenceData) (IRTCPresenceDevice * This, BSTR * pbstrNamespace, BSTR * pbstrData);
	END_INTERFACE
}  IRTCPresenceDeviceVtbl;
interface IRTCPresenceDevice
{
	CONST_VTBL struct IRTCPresenceDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCPresenceDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCPresenceDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCPresenceDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCPresenceDevice_get_Status(This,penStatus) ( (This)->lpVtbl -> get_Status(This,penStatus) )
#define IRTCPresenceDevice_get_Notes(This,pbstrNotes) ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
#define IRTCPresenceDevice_get_PresenceProperty(This,enProperty,pbstrProperty) ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
#define IRTCPresenceDevice_GetPresenceData(This,pbstrNamespace,pbstrData) ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
#endif
#endif
#ifndef __RTCCORELib_LIBRARY_DEFINED__
#define __RTCCORELib_LIBRARY_DEFINED__
extern const IID LIBID_RTCCORELib;
#ifndef __IRTCDispatchEventNotification_DISPINTERFACE_DEFINED__
#define __IRTCDispatchEventNotification_DISPINTERFACE_DEFINED__
extern const IID DIID_IRTCDispatchEventNotification;
typedef struct IRTCDispatchEventNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRTCDispatchEventNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRTCDispatchEventNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRTCDispatchEventNotification * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRTCDispatchEventNotification * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRTCDispatchEventNotification * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRTCDispatchEventNotification * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRTCDispatchEventNotification * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IRTCDispatchEventNotificationVtbl;
interface IRTCDispatchEventNotification
{
	CONST_VTBL struct IRTCDispatchEventNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRTCDispatchEventNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRTCDispatchEventNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRTCDispatchEventNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRTCDispatchEventNotification_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRTCDispatchEventNotification_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRTCDispatchEventNotification_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRTCDispatchEventNotification_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_RTCClient;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

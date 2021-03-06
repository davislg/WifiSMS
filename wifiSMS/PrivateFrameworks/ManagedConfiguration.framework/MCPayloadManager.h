/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, MCRootPayloadHandler, NSDictionary, NSString, MCTruth, NSData;



@interface MCPayloadManager : NSObject <MCRootManager>
{
    NSMutableDictionary *_crossDependencyRoot;
    NSDictionary *_profileDictionary;
    MCRootPayloadHandler *_rootHandler;
    NSMutableDictionary *_inFlightPayloads;
    MCTruth *_pendingTruth;
    NSData *_pendingPayload;
    BOOL _profileIsTrusted;
    BOOL _profileIsSigned;
    BOOL _profileRemovalIsPartOfUpdate;
    NSString *_signer;
    struct __SecCertificate { } *_signer_certificate;
}

+ (id)profileStoragePath;
+ (void)initialize;
+ (id)deviceName;
+ (void)updateEncryptedBackupKeyInLockdown;
+ (id)errorDomain;
+ (id)stagingPayloadPath;
+ (BOOL)writeProfileData:(id)arg1 toFile:(id)arg2;
+ (void)createNeuteredProfiles;
+ (id)neuteredProfileDataForProfileID:(id)arg1;
+ (id)delayedStagingPayloadPath;
+ (id)EASPolicyDictionaryPath;
+ (id)passwordHistoryPath;
+ (id)tagsMappingPath;
+ (id)EASPoliciesQuestionsPath;
+ (id)managedSettingFolder;
+ (id)stubFilePathForProfileID:(id)arg1;
+ (id)profilePathForProfileID:(id)arg1;
+ (id)lazyPathForProfileID:(id)arg1;
+ (id)sharedInstance;
+ (void)performWipe;
+ (NSInteger)requiredUnlockScreenType;
+ (BOOL)requiresAlphanumericKeyboardForPassword;
+ (BOOL)useFullKeyboardForNewPasswordEntry;
+ (NSInteger)maximumAutoLockTime;
+ (NSInteger)maximumLockGracePeriod;
+ (NSInteger)maximumFailedAttempts;
+ (NSInteger)maximumPINAge;
+ (BOOL)passwordHasExpired;
+ (void)transitionToViewProfileWithIdentifier:(id)arg1;
+ (void)transitionToAcceptPayloadUI:(BOOL)arg1;
+ (void)transitionToAcceptAutostartPayloadUI;
+ (void)transitionToAcceptPayloadUI;
+ (void)transitionToOverviewURL;
+ (void)verifyNewPolicy;
+ (id)genericErrorInMethod:(SEL)arg1 description:(id)arg2 suggestion:(id)arg3 phase:(NSInteger)arg4;
+ (id)genericErrorInMethod:(SEL)arg1 description:(id)arg2 suggestion:(id)arg3 phase:(NSInteger)arg4 file:(const char *)arg5 line:(NSInteger)arg6;
+ (BOOL)writeProfileManifest:(id)arg1;
+ (id)profileManifest;
+ (void)_deleteAllFilesAtPath:(id)arg1;
+ (void)deleteAllPayloads;
+ (void)resetAllManagedSettings;
+ (id)profileIdentifiers;
+ (id)activeProfileIdentifiers;
+ (id)visibleProfileIdentifiers;
+ (id)visibleActiveProfileIdentifiers;
+ (BOOL)isEncryptedProfileWithID:(id)arg1;
+ (id)encryptedProfileIdentifiers;
+ (BOOL)hasAnyEncryptedProfiles;
+ (id)profileMetadataCollection;
+ (id)profileDisplayNames;
+ (id)_payloadHandlerForPayloadWithUUID:(id)arg1;
+ (id)displayNameForPayloadWithUUID:(id)arg1;
+ (id)profileDisplayNameForPayloadWithUUID:(id)arg1;
+ (id)unifiedPasscodePoliciesExcludingIdentifier:(id)arg1 error:(id*)arg2;
+ (id)reprocessPolicies;
+ (id)reprocessApplicationAccess;
+ (id)reprocessAPNInformation;
+ (id)rootDictionaryForPayloadData:(id)arg1 fullDecode:(BOOL)arg2;
+ (id)payloadTypesFromProfileDictionary:(id)arg1;
+ (id)payloadTypesFromProfileFile:(id)arg1;
+ (id)payloadTypesInAllActiveProfiles;
+ (BOOL)allActiveProfilesContainPayloadType:(id)arg1;
+ (Class)handlerClassIfAnyActiveProfileRequiresType:(id)arg1;
+ (id)profileDictionaryForProfileData:(id)arg1 isSigned:(BOOL*)arg2 isTrusted:(BOOL*)arg3 signerCertificate:(struct __SecCertificate {}**)arg4 signerSummary:(id*)arg5;
+ (id)profileDictionaryForProfileData:(id)arg1;
+ (void)setProfileWithIdentifier:(id)arg1 isHidden:(BOOL)arg2;
+ (id)filenameForIdentifier:(id)arg1;
+ (id)errorStringForInvalidPasscodeErrorType:(NSInteger)arg1;
+ (BOOL)pin:(id)arg1 meetsConstraints:(id)arg2 currentPIN:(BOOL)arg3;
+ (id)mostRecentPINs;
+ (void)didSetPIN:(id)arg1;
+ (BOOL)pin:(id)arg1 meetsConstraints:(id)arg2 currentPIN:(BOOL)arg3 error:(id*)arg4;
+ (BOOL)pinMeetsCurrentConstraints:(id)arg1;
+ (id)policyStringForCurrentConstraints;
+ (id)currentPasswordPolicy;
+ (id)currentPasswordInformation;
+ (id)currentApplicationAccessPolicy;
+ (id)currentDevicePassword;
+ (void)setDevicePassword:(id)arg1;
+ (id)managedSystemConfigurationServiceIDs;
+ (id)managedWiFiNetworkNames;
+ (id)managedWiFiNetworks;
+ (void)processProfilesAfterRestore;
+ (void)processProfilesAfterMigrate;
+ (id)tagForPayloadUUID:(id)arg1;
+ (void)setTag:(id)arg1 forPayloadUUID:(id)arg2;
+ (void)removeTagForPayloadUUID:(id)arg1;
+ (id)payloadUUIDForTag:(id)arg1;
+ (BOOL)stagingFilePreviouslyInstalled;
+ (BOOL)stagingFileMatchesPreviouslyInstalledSignature;
+ (id)removeProfileAtPath:(id)arg1;
+ (id)handlerBundlePath;
+ (id)staticHanlders;
+ (Class)loadHandlerForPayloadType:(id)arg1;
+ (void)loadHandlersForProfileIdentifier:(id)arg1;
+ (void)loadHandlersForProfileDictionary:(id)arg1;
+ (id)handlerClassNameForPayloadType:(id)arg1;

- (void)validateProfileManifest;
- (id)init;
- (void)dealloc;
- (void)addDependencyOf:(id)arg1 on:(id)arg2 inDomain:(id)arg3;
- (void)removeDependencyOf:(id)arg1 on:(id)arg2 inDomain:(id)arg3;
- (id)dependenciesOf:(id)arg1 inDomain:(id)arg2;
- (BOOL)saveDependencies;
- (id)visibleProfileDisplayNames;
- (id)profileIdentifier;
- (id)profileUUID;
- (id)profileInstallDateForIdentifier:(id)arg1;
- (id)payloadHandlersForProfileIdentifier:(id)arg1;
- (id)truePayloadHandlers;
- (id)payloadHandlers;
- (id)payloadIdentifiers;
- (id)orderedPayloadHandlers;
- (id)groupedPayloadHandlers;
- (BOOL)profileIsTrusted;
- (BOOL)profileIsSigned;
- (BOOL)profileIsEncrypted;
- (id)profileSigner;
- (struct __SecCertificate { }*)profileSignerCertificate;
- (id)handlerDisplayNameForUUID:(id)arg1;
- (BOOL)willAcceptPayloadData:(id)arg1;
- (BOOL)willAcceptPayloadFile:(id)arg1;
- (BOOL)userWillAcceptPayload;
- (id)prepareForInstallWithPayloadData:(id)arg1;
- (id)payloadTypesFromProfileDictionary:(id)arg1;
- (id)decryptEncryptedProfileDictionary:(id)arg1;
- (id)setupWithPayloadDictionary:(id)arg1 forInspection:(BOOL)arg2;
- (BOOL)isMalformedDictionary:(id)arg1;
- (id)configurationDictionaryFromPKCS1Container:(struct __SecCertificate { }*)arg1 data:(id)arg2;
- (id)configurationDictionaryFromUnknownData:(id)arg1;
- (id)setupWithPayloadData:(id)arg1;
- (id)profileDictionaryForProfileData:(id)arg1;
- (id)setupWithPayloadData:(id)arg1 forInspection:(BOOL)arg2;
- (id)setupWithPayloadFile:(id)arg1;
- (id)setupWithPayloadFile:(id)arg1 forInspection:(BOOL)arg2;
- (id)setupWithStoredProfileWithID:(id)arg1;
- (id)setupWithStoredProfileWithID:(id)arg1 forInspection:(BOOL)arg2;
- (id)setupWithStagingFile;
- (id)deleteStagingFile;
- (id)currentPayloadDescription;
- (id)profileRemovalPassword;
- (BOOL)profileIsRemovable;
- (BOOL)profileSuggestsReboot;
- (BOOL)profileIsOfSpecialType;
- (id)userPromptRequests;
- (void)setUserPromptInput:(id)arg1;
- (id)performInstallation;
- (id)performRemoval;
- (id)validateProfile;
- (id)validateSystemForProfile;
- (id)prepareProfile;
- (id)preflightProfile;
- (BOOL)payloadsNeedPreflight;
- (BOOL)payloadsNeedPreparation;
- (id)installProfile;
- (id)finishProfile;
- (BOOL)createStubFileForCurrentProfile;
- (id)removeOrDisableProfile:(BOOL)arg1;
- (BOOL)profileRemovalIsPartOfUpdate;
- (id)removeProfile;
- (id)disableProfile;
- (id)profileDictionary;
- (void)registerHandler:(id)arg1 withUUID:(id)arg2;
- (void)registerPayloadType:(id)arg1;
- (id)profileRootIdentifier;
- (id)profileRootUUID;
- (id)profileRootDescription;
- (id)profileRootDisplayName;
- (id)reEnrollErrorString;
- (id)reEnrollInfoString;
- (id)customTitleForCurrentInstallPhase;
- (BOOL)produceProfileUpdate;
- (BOOL)mayProduceProfileUpdate;
- (id)updateURL;
- (void)nullifyPasscodeHandler;
- (void)logMISError:(NSInteger)arg1;
- (BOOL)signatureValidationError:(NSInteger)arg1;
- (BOOL)nonsignatureValidationError:(NSInteger)arg1;
- (BOOL)missingSignatureError:(NSInteger)arg1;
- (id)removeProfileThatMatchesStagingFile;

@end

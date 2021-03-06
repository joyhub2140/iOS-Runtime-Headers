/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBRemoteDataProviderClientProxy>, <BBRemoteDataProviderDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {
    <BBRemoteDataProviderClientProxy> *_clientProxy;
    BOOL _connected;
    <BBRemoteDataProviderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    BOOL _serverIsReady;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendClientRequest:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned int)arg2;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)calloutToServer:(id)arg1;
- (BOOL)canPerformMigration;
- (BOOL)checkResponds:(BOOL)arg1 forSelector:(SEL)arg2;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned int)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (void)getClearedInfoWithCompletion:(id)arg1;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)invalidateBulletins;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)modifyBulletin:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)primaryAttachmentDataForRecordID:(id)arg1 completion:(id)arg2;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (id)sectionIdentifier;
- (void)setClearedInfo:(id)arg1;
- (void)setClientProxy:(id)arg1 completion:(id)arg2;
- (void)setSectionInfo:(id)arg1;
- (void)setSectionInfo:(id)arg1 inCategory:(int)arg2;
- (void)setServerIsReady:(BOOL)arg1;
- (void)startWatchdog;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;

@end

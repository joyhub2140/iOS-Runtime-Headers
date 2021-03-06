/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCDocumentItem, BRCLocalContainer, BRCRelativePath, BRCServerZone, NSData;

@interface BRCBookmark : NSObject {
    NSData *_bookmarkData;
    BRCLocalContainer *_container;
    BOOL _containsItemID;
    BOOL _dataResolved;
    BRCAccountSession *_session;
    BRCDocumentItem *_target;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
    BRCServerZone *_targetServerZone;
}

@property(readonly) BOOL containsItemID;
@property(readonly) BRCDocumentItem * target;
@property(readonly) BRCServerZone * targetServerZone;

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_computeSignature:(unsigned char[32])arg1;
- (BOOL)_resolveDataWithError:(id*)arg1;
- (BOOL)_resolveTargetWithError:(id*)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (BOOL)containsItemID;
- (id)initWithRelpath:(id)arg1;
- (id)initWithTarget:(id)arg1 owningContainer:(id)arg2 path:(id)arg3 session:(id)arg4;
- (BOOL)resolveWithError:(id*)arg1;
- (id)target;
- (id)targetServerZone;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3;

@end

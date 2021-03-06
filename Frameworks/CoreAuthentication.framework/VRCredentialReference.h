/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAuthentication.framework/CoreAuthentication
 */

@class <LAUIDelegate>, LAClient, NSData, NSDictionary, NSString;

@interface VRCredentialReference : NSObject {
    LAClient *_client;
    NSData *_credentialHandle;
    <LAUIDelegate> *_delegateProxy;
    NSDictionary *_lastEvaluatePolicyResult;
}

@property(readonly) NSString * creatorDisplayName;
@property(readonly) NSData * credentialHandle;

- (void).cxx_destruct;
- (id)creatorDisplayName;
- (id)credentialHandle;
- (BOOL)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 error:(id*)arg4;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 reply:(id)arg4;
- (BOOL)evaluatePolicy:(id)arg1 hints:(id)arg2 error:(id*)arg3;
- (void)evaluatePolicy:(id)arg1 hints:(id)arg2 reply:(id)arg3;
- (void)invalidate;
- (id)resultForTag:(id)arg1;
- (void)resultForTag:(id)arg1 reply:(id)arg2;
- (void)sendClientRequest:(id)arg1 params:(id)arg2 reply:(id)arg3;
- (BOOL)setupNewReferenceWithError:(id*)arg1;
- (void)setupNewReferenceWithReply:(id)arg1;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 reply:(id)arg3;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 uiDelegate:(id)arg3 reply:(id)arg4;
- (BOOL)setupWithCredentialHandle:(id)arg1 error:(id*)arg2;
- (void)setupWithCredentialHandle:(id)arg1 reply:(id)arg2;
- (void)setupWithCredentialHandle:(id)arg1 uiDelegate:(id)arg2 reply:(id)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class <NPKPaymentSessionDelegate>, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface NPKPaymentSession : NSObject <NPKPaymentSessionClientProtocol> {
    BOOL _acknowledged;
    NSXPCConnection *_connection;
    NSString *_currentPassUniqueID;
    <NPKPaymentSessionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property BOOL acknowledged;
@property(retain) NSXPCConnection * connection;
@property(retain) NSString * currentPassUniqueID;
@property(copy,readonly) NSString * debugDescription;
@property <NPKPaymentSessionDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionWithEndpoint:(id)arg1 rootQueue:(id)arg2;
- (id)_delegate;
- (id)_errorHandlerWithCompletion:(id)arg1;
- (void)_paymentSessionIsFinishedForReason:(unsigned int)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id)arg1;
- (void)acknowledgeSession;
- (BOOL)acknowledged;
- (id)connection;
- (id)currentPassUniqueID;
- (void)deactivateSession;
- (id)delegate;
- (id)initWithEndpoint:(id)arg1 rootQueue:(id)arg2 currentCard:(id)arg3;
- (id)internalQueue;
- (void)paymentCardDidBecomeCurrent:(id)arg1;
- (void)paymentDidActivateForPaymentCard:(id)arg1;
- (void)paymentSessionCompletedForReason:(unsigned int)arg1;
- (void)paymentWillActivateForPaymentCard:(id)arg1;
- (void)resume;
- (void)setAcknowledged:(BOOL)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentPassUniqueID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;

@end

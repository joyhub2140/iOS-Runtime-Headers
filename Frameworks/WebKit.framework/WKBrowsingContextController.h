/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class <WKBrowsingContextHistoryDelegate>, <WKBrowsingContextLoadDelegate>, <WKBrowsingContextPolicyDelegate>, NSArray, NSString, NSURL, WKBackForwardList, WKBrowsingContextHandle, _WKRemoteObjectRegistry;

@interface WKBrowsingContextController : NSObject {
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > { 
        id m_weakReference; 
    } _historyDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > { 
        id m_weakReference; 
    } _loadDelegate;
    unsigned int _observedRenderingProgressEvents;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    } _page;
    struct unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> > { 
        struct __compressed_pair<PageLoadStateObserver *, std::__1::default_delete<PageLoadStateObserver> > { 
            struct PageLoadStateObserver {} *__first_; 
        } __ptr_; 
    } _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > { 
        id m_weakReference; 
    } _policyDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    } _remoteObjectRegistry;
}

@property(readonly) struct OpaqueWKPage { }* _pageRef;
@property(readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry;
@property(readonly) NSURL * activeURL;
@property(copy) NSString * applicationNameForUserAgent;
@property(readonly) WKBackForwardList * backForwardList;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
@property(readonly) NSArray * certificateChain;
@property(readonly) NSURL * committedURL;
@property(copy) NSString * customUserAgent;
@property(readonly) double estimatedProgress;
@property float gapBetweenPages;
@property(readonly) WKBrowsingContextHandle * handle;
@property(readonly) BOOL hasOnlySecureContent;
@property <WKBrowsingContextHistoryDelegate> * historyDelegate;
@property <WKBrowsingContextLoadDelegate> * loadDelegate;
@property(getter=isLoading,readonly) BOOL loading;
@property unsigned int observedRenderingProgressEvents;
@property(readonly) unsigned int pageCount;
@property float pageLength;
@property float pageZoom;
@property BOOL paginationBehavesLikeColumns;
@property unsigned int paginationMode;
@property <WKBrowsingContextPolicyDelegate> * policyDelegate;
@property(readonly) int processIdentifier;
@property(readonly) NSURL * provisionalURL;
@property float textZoom;
@property(readonly) NSString * title;
@property(readonly) NSURL * unreachableURL;

+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage { }*)arg1;
+ (id)customSchemes;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithPageRef:(struct OpaqueWKPage { }*)arg1;
- (struct OpaqueWKPage { }*)_pageRef;
- (id)_remoteObjectRegistry;
- (id)activeURL;
- (id)applicationNameForUserAgent;
- (id)backForwardList;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)certificateChain;
- (id)committedURL;
- (id)customUserAgent;
- (void)dealloc;
- (double)estimatedProgress;
- (float)gapBetweenPages;
- (void)goBack;
- (void)goForward;
- (void)goToBackForwardListItem:(id)arg1;
- (id)handle;
- (BOOL)hasOnlySecureContent;
- (id)historyDelegate;
- (BOOL)isLoading;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (id)loadDelegate;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (unsigned int)observedRenderingProgressEvents;
- (unsigned int)pageCount;
- (float)pageLength;
- (float)pageZoom;
- (BOOL)paginationBehavesLikeColumns;
- (unsigned int)paginationMode;
- (id)policyDelegate;
- (int)processIdentifier;
- (id)provisionalURL;
- (void)reload;
- (void)reloadFromOrigin;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setGapBetweenPages:(float)arg1;
- (void)setHistoryDelegate:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setObservedRenderingProgressEvents:(unsigned int)arg1;
- (void)setPageLength:(float)arg1;
- (void)setPageZoom:(float)arg1;
- (void)setPaginationBehavesLikeColumns:(BOOL)arg1;
- (void)setPaginationMode:(unsigned int)arg1;
- (void)setPolicyDelegate:(id)arg1;
- (void)setTextZoom:(float)arg1;
- (void)stopLoading;
- (float)textZoom;
- (id)title;
- (id)unreachableURL;

@end

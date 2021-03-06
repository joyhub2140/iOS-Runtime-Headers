/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebViewContentProviderRegistry, _WKVisitedLinkProvider, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCopying> {
    BOOL _allowsInlineMediaPlayback;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    } _alternateWebViewForNavigationGestures;
    struct LazyInitialized<WKWebViewContentProviderRegistry> { 
        bool m_isInitialized; 
        struct RetainPtr<WKWebViewContentProviderRegistry> { 
            void *m_ptr; 
        } m_value; 
    } _contentProviderRegistry;
    BOOL _featureCounterEnabled;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _groupIdentifier;
    BOOL _mediaPlaybackAllowsAirPlay;
    BOOL _mediaPlaybackRequiresUserAction;
    struct LazyInitialized<WKPreferences> { 
        bool m_isInitialized; 
        struct RetainPtr<WKPreferences> { 
            void *m_ptr; 
        } m_value; 
    } _preferences;
    struct LazyInitialized<WKProcessPool> { 
        bool m_isInitialized; 
        struct RetainPtr<WKProcessPool> { 
            void *m_ptr; 
        } m_value; 
    } _processPool;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    } _relatedWebView;
    int _selectionGranularity;
    BOOL _suppressesIncrementalRendering;
    struct LazyInitialized<WKUserContentController> { 
        bool m_isInitialized; 
        struct RetainPtr<WKUserContentController> { 
            void *m_ptr; 
        } m_value; 
    } _userContentController;
    struct LazyInitialized<_WKVisitedLinkProvider> { 
        bool m_isInitialized; 
        struct RetainPtr<_WKVisitedLinkProvider> { 
            void *m_ptr; 
        } m_value; 
    } _visitedLinkProvider;
    struct LazyInitialized<_WKWebsiteDataStore> { 
        bool m_isInitialized; 
        struct RetainPtr<_WKWebsiteDataStore> { 
            void *m_ptr; 
        } m_value; 
    } _websiteDataStore;
}

@property(setter=_setAlternateWebViewForNavigationGestures:) WKWebView * _alternateWebViewForNavigationGestures;
@property(setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry * _contentProviderRegistry;
@property(setter=_setFeatureCounterEnabled:) BOOL _featureCounterEnabled;
@property(setter=_setGroupIdentifier:,copy) NSString * _groupIdentifier;
@property(setter=_setRelatedWebView:) WKWebView * _relatedWebView;
@property(setter=_setVisitedLinkProvider:,retain) _WKVisitedLinkProvider * _visitedLinkProvider;
@property(setter=_setWebsiteDataStore:,retain) _WKWebsiteDataStore * _websiteDataStore;
@property BOOL allowsInlineMediaPlayback;
@property BOOL mediaPlaybackAllowsAirPlay;
@property BOOL mediaPlaybackRequiresUserAction;
@property(retain) WKPreferences * preferences;
@property(retain) WKProcessPool * processPool;
@property int selectionGranularity;
@property BOOL suppressesIncrementalRendering;
@property(retain) WKUserContentController * userContentController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_alternateWebViewForNavigationGestures;
- (id)_contentProviderRegistry;
- (BOOL)_featureCounterEnabled;
- (id)_groupIdentifier;
- (id)_relatedWebView;
- (void)_setAlternateWebViewForNavigationGestures:(id)arg1;
- (void)_setContentProviderRegistry:(id)arg1;
- (void)_setFeatureCounterEnabled:(BOOL)arg1;
- (void)_setGroupIdentifier:(id)arg1;
- (void)_setRelatedWebView:(id)arg1;
- (void)_setVisitedLinkProvider:(id)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (void)_validate;
- (id)_visitedLinkProvider;
- (id)_websiteDataStore;
- (BOOL)allowsInlineMediaPlayback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackRequiresUserAction;
- (id)preferences;
- (id)processPool;
- (int)selectionGranularity;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (void)setPreferences:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (void)setUserContentController:(id)arg1;
- (BOOL)suppressesIncrementalRendering;
- (id)userContentController;

@end

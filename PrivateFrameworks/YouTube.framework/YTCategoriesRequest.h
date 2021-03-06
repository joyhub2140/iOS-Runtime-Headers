/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {
    NSMutableArray *_categories;
    id _delegate;
    BOOL _responseIndicatesAuthenticationFailure;
}

- (id)_categoriesURL;
- (void)clearDelegate;
- (void)dealloc;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (void)loadRequest:(id)arg1;
- (int)parseData:(id)arg1;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)requestCategoriesWithDelegate:(id)arg1;

@end

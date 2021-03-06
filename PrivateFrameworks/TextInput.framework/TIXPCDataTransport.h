/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSXPCListener, NSMutableDictionary, <TIUserDictionaryServer>;

@interface TIXPCDataTransport : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_dataSources;
    NSMutableDictionary *_readyDescriptors;
    NSXPCListener *_server;
    <TIUserDictionaryServer> *_userDictionaryServer;
}

@property(retain) <TIUserDictionaryServer> * userDictionaryServer;

+ (id)_cachePath;
+ (id)sharedInstance;
+ (id)transportInterface;

- (void)_createCachePathIfNeeded;
- (oneway void)_handleForPurpose:(id)arg1 withReplyBlock:(id)arg2;
- (oneway void)_userDictionaryLoad;
- (oneway void)_userDictionarySaveChanges;
- (id)cachedDataForPurpose:(id)arg1;
- (id)connectToServer;
- (id)dataSourceForPurpose:(id)arg1;
- (void)dealloc;
- (id)fileHandleWithData:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCachedData:(id)arg1 forPurpose:(id)arg2;
- (void)setDataSource:(id)arg1 forPurpose:(id)arg2;
- (void)setUserDictionaryServer:(id)arg1;
- (void)setupListener;
- (id)userDictionaryServer;

@end

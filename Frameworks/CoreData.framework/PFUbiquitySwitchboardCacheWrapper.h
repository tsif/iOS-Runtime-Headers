/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityGlobalObjectIDCache, PFUbiquityBaseline, PFUbiquityPeerRangeCache, PFUbiquityPeerReceipt, NSLock, NSObject<OS_dispatch_semaphore>, PFUbiquityLocation, PFUbiquityTransactionLogCache, NSString, PFUbiquityTransactionHistoryCache, PFUbiquityKnowledgeVector;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    BOOL _allowReplacementOfBaseline;
    BOOL _allowSchedulingOfReceiptFileWrites;
    PFUbiquityBaseline *_baseline;
    NSLock *_baselineLock;
    NSObject<OS_dispatch_semaphore> *_baselineSemaphore;
    BOOL _baselineUploaded;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityKnowledgeVector *_kv;
    NSString *_localPeerID;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityPeerReceipt *_peerReceipt;
    BOOL _pendingBaselineMove;
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) PFUbiquityGlobalObjectIDCache * globalIDCache;
@property(retain) PFUbiquityKnowledgeVector * kv;
@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityPeerRangeCache * peerRangeCache;
@property(readonly) PFUbiquityPeerReceipt * peerReceipt;
@property(readonly) BOOL pendingBaselineMove;
@property(readonly) PFUbiquityTransactionHistoryCache * transactionHistoryCache;
@property(readonly) PFUbiquityTransactionLogCache * transactionLogCache;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

- (void)cachePeerReceipt:(id)arg1;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (void)checkPeerFileUploaded;
- (void)dealloc;
- (id)globalIDCache;
- (id)init;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)kv;
- (id)localPeerID;
- (BOOL)monitorUploadOfBaseline:(id)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (id)peerRangeCache;
- (id)peerReceipt;
- (BOOL)pendingBaselineMove;
- (void)scheduleReceiptFileWrite:(id)arg1;
- (void)setKv:(id)arg1;
- (void)timerFinishedUploadingPeerFile;
- (id)transactionHistoryCache;
- (id)transactionLogCache;
- (id)ubiquityRootLocation;
- (BOOL)writeReceiptFile:(id*)arg1;

@end

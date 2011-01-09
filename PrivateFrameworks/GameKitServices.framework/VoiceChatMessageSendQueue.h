/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableArray, GKSessionInternal;



@interface VoiceChatMessageSendQueue : NSObject 
{
    NSMutableArray *_queue;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } _queueCond;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _queueMutex;
    BOOL _queueIsSending;
    BOOL _sendThreadIsRunning;
    GKSessionInternal *_gkSession;
}


- (void)dealloc;
- (id)initWithGKSessionInternal:(id)arg1;
- (void)startQueue;
- (void)stopQueue;
- (void)sendMessage:(id)arg1 forPeerID:(id)arg2;
- (void)sendMessageThread:(id)arg1;

@end
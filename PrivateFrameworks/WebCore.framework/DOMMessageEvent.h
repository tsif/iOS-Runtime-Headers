/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMAbstractView, NSString, DOMMessagePort;

@interface DOMMessageEvent : DOMEvent {
}

@property(readonly) NSString * data;
@property(readonly) NSString * lastEventId;
@property(readonly) DOMMessagePort * messagePort;
@property(readonly) NSString * origin;
@property(readonly) DOMAbstractView * source;

- (id)data;
- (void)initMessageEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;
- (id)lastEventId;
- (id)messagePort;
- (id)origin;
- (id)source;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : FTiMessageMessage <NSCopying> {
    NSString *_owner;
    NSString *_responseAuthToken;
    NSString *_responseRequestorID;
    NSData *_signature;
}

@property(copy) NSString * owner;
@property(copy) NSString * responseAuthToken;
@property(copy) NSString * responseRequestorID;
@property(copy) NSData * signature;

- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)owner;
- (id)requiredKeys;
- (id)responseAuthToken;
- (int)responseCommand;
- (id)responseRequestorID;
- (void)setOwner:(id)arg1;
- (void)setResponseAuthToken:(id)arg1;
- (void)setResponseRequestorID:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end

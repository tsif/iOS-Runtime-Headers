/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)personSearchCompletedWithResults:(id)arg1;
+ (id)personSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearchCompleted;

- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;

@end
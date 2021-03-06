/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKPersistentSource, NSSet, NSURL;

@interface EKPersistentCalendar : EKPersistentObject {
}

@property(readonly) NSString * UUID;
@property unsigned int allowedEntityTypes;
@property BOOL allowsContentModifications;
@property BOOL canBePublished;
@property BOOL canBeShared;
@property(getter=isColorDisplayOnly) BOOL colorDisplayOnly;
@property(copy) NSString * colorString;
@property int displayOrder;
@property(copy) NSString * externalID;
@property(getter=isHidden) BOOL hidden;
@property(getter=isImmutable) BOOL immutable;
@property unsigned int invitationStatus;
@property(readonly) BOOL isDefaultCalendarForSource;
@property BOOL isFacebookBirthdayCalendar;
@property(copy) NSURL * ownerIdentityAddress;
@property(copy) NSString * ownerIdentityDisplayName;
@property(copy) NSString * ownerIdentityEmail;
@property(copy) NSString * ownerIdentityFirstName;
@property(copy) NSString * ownerIdentityLastName;
@property BOOL prohibitsScheduling;
@property(getter=isPublished) BOOL published;
@property(copy) NSString * publishedURL;
@property BOOL schedulingProhibited;
@property(copy) NSURL * selfIdentityAddress;
@property(copy) NSString * selfIdentityDisplayName;
@property(copy) NSString * selfIdentityEmail;
@property(copy) NSString * selfIdentityFirstName;
@property(copy) NSString * selfIdentityLastName;
@property(copy) NSURL * sharedOwnerAddress;
@property(copy) NSString * sharedOwnerName;
@property(copy) NSSet * sharees;
@property(getter=isSharingInvitation) BOOL sharingInvitation;
@property int sharingInvitationResponse;
@property int sharingStatus;
@property(retain) EKPersistentSource * source;
@property(getter=isSubscribed) BOOL subscribed;
@property(copy) NSString * title;

+ (id)calendar;
+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (void)addSharee:(id)arg1;
- (unsigned int)allowedEntityTypes;
- (BOOL)allowsContentModifications;
- (BOOL)canBePublished;
- (BOOL)canBeShared;
- (id)colorString;
- (id)description;
- (int)displayOrder;
- (int)entityType;
- (id)externalID;
- (id)init;
- (unsigned int)invitationStatus;
- (BOOL)isColorDisplayOnly;
- (BOOL)isDefaultCalendarForSource;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)isHidden;
- (BOOL)isImmutable;
- (BOOL)isPublished;
- (BOOL)isSharingInvitation;
- (BOOL)isSubscribed;
- (id)ownerIdentityAddress;
- (id)ownerIdentityDisplayName;
- (id)ownerIdentityEmail;
- (id)ownerIdentityFirstName;
- (id)ownerIdentityLastName;
- (BOOL)prohibitsScheduling;
- (id)publishedURL;
- (void)removeSharee:(id)arg1;
- (BOOL)schedulingProhibited;
- (id)selfIdentityAddress;
- (id)selfIdentityDisplayName;
- (id)selfIdentityEmail;
- (id)selfIdentityFirstName;
- (id)selfIdentityLastName;
- (void)setAllowedEntityTypes:(unsigned int)arg1;
- (void)setAllowsContentModifications:(BOOL)arg1;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (void)setColorDisplayOnly:(BOOL)arg1;
- (void)setColorString:(id)arg1;
- (void)setDisplayOrder:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setImmutable:(BOOL)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (void)setIsFacebookBirthdayCalendar:(BOOL)arg1;
- (void)setIsPublished:(BOOL)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (void)setOwnerIdentityEmail:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setProhibitsScheduling:(BOOL)arg1;
- (void)setPublished:(BOOL)arg1;
- (void)setPublishedURL:(id)arg1;
- (void)setSchedulingProhibited:(BOOL)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (void)setSelfIdentityEmail:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingInvitation:(BOOL)arg1;
- (void)setSharingInvitationResponse:(int)arg1;
- (void)setSharingStatus:(int)arg1;
- (void)setSource:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerName;
- (id)sharees;
- (int)sharingInvitationResponse;
- (int)sharingStatus;
- (id)source;
- (id)title;
- (BOOL)validate:(id*)arg1;

@end

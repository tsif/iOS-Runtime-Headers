/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSURL, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet *_calendarHomes;
    NSURL *_delegatePrincipalURL;
    NSURL *_dropboxURL;
    NSURL *_inboxURL;
    NSURL *_notificationURL;
    NSSet *_originalUserAddresses;
    NSURL *_outboxURL;
    CalDAVServerVersion *_serverVersion;
    NSURL *_updatedPrincipalURL;
    NSSet *_userAddresses;
}

@property(readonly) NSSet * calendarHomes;
@property(retain) NSURL * delegatePrincipalURL;
@property(readonly) NSURL * dropboxURL;
@property(readonly) NSURL * inboxURL;
@property(readonly) NSURL * notificationURL;
@property(readonly) NSSet * originalUserAddresses;
@property(readonly) NSURL * outboxURL;
@property(readonly) CalDAVServerVersion * serverVersion;
@property(readonly) NSURL * updatedPrincipalURL;
@property(readonly) NSSet * userAddresses;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)calendarHomes;
- (void)dealloc;
- (id)delegatePrincipalURL;
- (id)description;
- (id)dropboxURL;
- (BOOL)forceOptionsRequest;
- (id)homeSet;
- (id)inboxURL;
- (id)notificationURL;
- (id)originalUserAddresses;
- (id)outboxURL;
- (void)processPrincipalHeaders:(id)arg1;
- (id)serverVersion;
- (void)setDelegatePrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (id)updatedPrincipalURL;
- (id)userAddresses;

@end

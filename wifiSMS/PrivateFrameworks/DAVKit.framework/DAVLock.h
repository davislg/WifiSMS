/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */



@interface DAVLock : DAVRequest 
{
}

+ (id)lockRequestWithURL:(id)arg1;
+ (id)lockRequestWithSession:(id)arg1 path:(id)arg2;
+ (id)relockRequestWithURL:(id)arg1 lockToken:(id)arg2;
+ (id)relockRequestWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;

- (void)_initLockRequest;
- (id)initLockWithURL:(id)arg1;
- (id)initLockWithSession:(id)arg1 path:(id)arg2;
- (void)_initRelockRequestWithToken:(id)arg1;
- (id)initRelockWithURL:(id)arg1 lockToken:(id)arg2;
- (id)initRelockWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;
- (id)lockToken;
- (NSInteger)lockTimeout;
- (id)dependenciesList;
- (void)finalizeOperation;

@end

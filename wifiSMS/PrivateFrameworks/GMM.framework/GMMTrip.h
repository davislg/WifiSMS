/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMTrip : PBCodable 
{
    NSMutableArray *_routes;
}

@property(readonly) NSInteger routesCount;
@property(retain) NSMutableArray *routes; /* unknown property attribute: V_routes */


- (id)init;
- (void)dealloc;
- (NSInteger)routesCount;
- (void)setRoute:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)routeAtIndex:(NSUInteger)arg1;
- (void)addRoute:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)routes;
- (void)setRoutes:(id)arg1;
- (id)description;

@end

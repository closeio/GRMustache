//
//  GRMustacheContext.h
//

#import <Foundation/Foundation.h>


@protocol GRMustacheContext
@end

@interface GRMustacheContext: NSObject {
	NSMutableArray *objects;
}
- (id)valueForKey:(NSString *)key;
@end
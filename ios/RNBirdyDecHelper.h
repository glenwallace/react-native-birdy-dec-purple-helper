#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface RNBirdyDecHelper : UIResponder

+ (instancetype)pandaDress_shared;
- (BOOL)pandaDress_tryThisWay;
- (UIInterfaceOrientationMask)pandaDress_getOrientation;
- (UIViewController *)pandaDress_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END

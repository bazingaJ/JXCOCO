
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//IB_DESIGNABLE

@interface JXView : UIView

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

@property (nonatomic, assign) IBInspectable CGFloat  borderWidth;

@property (nonatomic, strong) IBInspectable UIColor *borderColor;

@end

NS_ASSUME_NONNULL_END

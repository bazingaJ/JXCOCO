
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//IB_DESIGNABLE

@interface JXButton : UIButton

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

@property (nonatomic, assign) IBInspectable CGFloat  borderWidth;

@property (nonatomic, strong) IBInspectable UIColor *borderColor;

// 文字标题
typedef JXButton *_Nonnull(^JXButtonTitle)(NSString *textTitle);
// 按钮文字颜色
typedef JXButton *_Nonnull(^JXButtonTitleColor)(UIColor *textColor);
// 按钮字体大小
typedef JXButton *_Nonnull(^JXButtonFont)(CGFloat textFont);
// 按钮图片
typedef JXButton *_Nonnull(^JXButtonImage)(UIImage *image);
// 按钮背景颜色
typedef JXButton *_Nonnull(^JXButtonBackColor)(UIColor *backColor);
// 按钮背景图片
typedef JXButton *_Nonnull(^JXButtonBackImage)(UIImage *backImage);

- (JXButton *)sel;

- (JXButton *)nor;

- (JXButtonTitle)Title;

- (JXButtonTitleColor)TitleColor;

- (JXButtonBackColor)BackGroundColor;

- (JXButtonFont)TextFont;

- (JXButtonImage)Image;

- (JXButtonBackImage)BackImage;

@end

NS_ASSUME_NONNULL_END

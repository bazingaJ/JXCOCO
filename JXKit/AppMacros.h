//
//  AppMacros.h
//  JXBaseDemo
//
//  Created by yunduopu-ios-2 on 2018/9/26.
//  Copyright © 2018年 Enzo. All rights reserved.
//

#ifndef AppMacros_h
#define AppMacros_h

/* ********************************<--- 沙盒路径 --->*************************** */
#pragma mark - 沙盒路径

#define PATH_OF_APP_HOME    NSHomeDirectory()
#define PATH_OF_TEMP        NSTemporaryDirectory()
#define PATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

/* ********************************<--- DEBUG LOG --->*************************** */
#pragma mark - DEBUG LOG

#ifdef DEBUG

#define JXLog( s, ... ) NSLog( @"< %@:(%d) > %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )

#else

#define JXLog( s, ... )

#endif

/* ********************************<--- Frame --->*************************** */
#pragma mark - Frame (宏 x, y, width, height)

// MainScreen Height&Width
#define SCREEN_HEIGHT      [[UIScreen mainScreen] bounds].size.height
#define SCREEN_WIDTH       [[UIScreen mainScreen] bounds].size.width

//iPhone X系列判断
#define  IS_iPhoneX (CGSizeEqualToSize(CGSizeMake(375.f, 812.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(812.f, 375.f), [UIScreen mainScreen].bounds.size)  || CGSizeEqualToSize(CGSizeMake(414.f, 896.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(896.f, 414.f), [UIScreen mainScreen].bounds.size))
// 状态栏高度
#define StatusBarHeight (IS_iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NavBarHeight (44.f+StatusBarHeight)
// 状态栏+导航栏高度
#define NavigationBarHeight (NavBarHeight+StatusBarHeight)
// tabbar 高度
#define TabBarHeight (IS_iPhoneX ? (49.f+34.f) : 49.f)
// home 按钮触控范围高度
#define HOME_INDICATOR_HEIGHT (IS_iPhoneX ? 34.f : 0.f)
//安全区域高度
#define TabbarSafeBottomMargin     (IS_iPhoneX ? 34.f : 0.f)

// View 坐标(x,y)和宽高(width,height)
#define X(v)                    (v).frame.origin.x
#define Y(v)                    (v).frame.origin.y
#define WIDTH(v)                (v).frame.size.width
#define HEIGHT(v)               (v).frame.size.height

#define MinX(v)                 CGRectGetMinX((v).frame)
#define MinY(v)                 CGRectGetMinY((v).frame)

#define MidX(v)                 CGRectGetMidX((v).frame)
#define MidY(v)                 CGRectGetMidY((v).frame)

#define MaxX(v)                 CGRectGetMaxX((v).frame)
#define MaxY(v)                 CGRectGetMaxY((v).frame)


#define RECT_CHANGE_x(v,x)          CGRectMake(x, Y(v), WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_y(v,y)          CGRectMake(X(v), y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_point(v,x,y)    CGRectMake(x, y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_width(v,w)      CGRectMake(X(v), Y(v), w, HEIGHT(v))
#define RECT_CHANGE_height(v,h)     CGRectMake(X(v), Y(v), WIDTH(v), h)
#define RECT_CHANGE_size(v,w,h)     CGRectMake(X(v), Y(v), w, h)

/// 系统控件默认高度
#define kStatusBarHeight        (20.f)

#define kTopBarHeight           (44.f)
#define kNavBarHeight           (64.f)
#define kBottomBarHeight        (49.f)

#define kCellDefaultHeight      (44.f)
#define kEnglishKeyboardHeight  (216.f)
#define kChineseKeyboardHeight  (252.f)

//SVProgressHUD 展示的不同的状态

#define SVSHOW    [SVProgressHUD show];

#define SVMISS    [SVProgressHUD dismiss];

#define SVSTATUS(Info);\
\
[SVProgressHUD showWithStatus:(Info)];\
[SVProgressHUD setDefaultStyle:SVProgressHUDStyleDark];

#define SVSUCCESS(Info,interval);\
\
[SVProgressHUD showSuccessWithStatus:(Info)];\
[SVProgressHUD setDefaultStyle:SVProgressHUDStyleDark];\
[SVProgressHUD dismissWithDelay:(interval)];

#define SVINFO(Info,interval);\
\
[SVProgressHUD showInfoWithStatus:(Info)];\
[SVProgressHUD setDefaultStyle:SVProgressHUDStyleDark];\
[SVProgressHUD dismissWithDelay:(interval)];

#define SVERROR(Info,interval);\
\
[SVProgressHUD showErrorWithStatus:(Info)];\
[SVProgressHUD setDefaultStyle:SVProgressHUDStyleDark];\
[SVProgressHUD dismissWithDelay:(interval)];
// svprogress 消失时间
#define  SVDISMISS(time)  \
\
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(time * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ \
[SVProgressHUD dismiss]; \
});\

/* ********************************<--- 代码缩略 --->*************************** */
#pragma mark - 代码缩略

#define WEAKSELF typeof(self) __weak weakSelf = self;

#define kFileManager                [NSFileManager defaultManager]
#define kUserDefaults               [NSUserDefaults standardUserDefaults]
#define kNotificationCenter         [NSNotificationCenter defaultCenter]
#define kDefaultStatusBar           [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault];
#define kLightStatusBar           [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
/**
 *  获取Window
 */
#define kWindow [UIApplication sharedApplication].keyWindow

/* ********************************<--- Funtion Method (宏 方法) --->*************************** */
#pragma mark - Funtion Method (宏 方法)

//cell
#define LoadBundleCell(bundleName,index)   [[[NSBundle mainBundle]loadNibNamed:(bundleName) owner:nil options:nil]objectAtIndex:(index)];

// PNG JPG 图片路径
#define PNGPATH(NAME)           [[NSBundle mainBundle] pathForResource:[NSString stringWithUTF8String:NAME] ofType:@"png"]
#define JPGPATH(NAME)           [[NSBundle mainBundle] pathForResource:[NSString stringWithUTF8String:NAME] ofType:@"jpg"]
#define PATH(NAME, EXT)         [[NSBundle mainBundle] pathForResource:(NAME) ofType:(EXT)]

// 加载图片
#define PNGkImg(NAME)          [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"png"]]
#define JPGkImg(NAME)          [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"jpg"]]
#define kImg(NAME, EXT)        [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:(EXT)]]

#define JX_IMAGE(imgName) [UIImage imageNamed:imgName]

#define URL(url) [NSURL URLWithString:url]
#define string(str1,str2) [NSString stringWithFormat:@"%@%@",str1,str2]
#define s_str(str1) [NSString stringWithFormat:@"%@",str1]
#define s_Num(num1) [NSString stringWithFormat:@"%d",num1]
#define s_Integer(num1) [NSString stringWithFormat:@"%ld",num1]


//number转String
#define IntTranslateStr(int_str) [NSString stringWithFormat:@"%d",int_str];
#define FloatTranslateStr(float_str) [NSString stringWithFormat:@"%.2d",float_str];

// View 圆角和加边框
#define ViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]];

// View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];


// UIView - viewWithTag
#define VIEWWITHTAG(_OBJECT, _TAG)\
\
[_OBJECT viewWithTag : _TAG]

/* *************************** <--- 字体 ---> ***************************** */
#pragma mark - 字体

// 字体大小(常规)
#define FONT(NAME, FONTSIZE)    [UIFont fontWithName:(NAME) size:(FONTSIZE)]

// 微软雅黑
#define YC_YAHEI_FONT(FONTSIZE) [UIFont fontWithName:@"MicrosoftYaHei" size:(FONTSIZE)]
// 英文 和 数字
#define YC_ENGLISH_FONT(FONTSIZE) [UIFont fontWithName:@"Helvetica Light" size:(FONTSIZE)]

///正常字体
#define F30 [UIFont systemFontOfSize:30]
#define F29 [UIFont systemFontOfSize:29]
#define F28 [UIFont systemFontOfSize:28]
#define F27 [UIFont systemFontOfSize:27]
#define F26 [UIFont systemFontOfSize:26]
#define F25 [UIFont systemFontOfSize:25]
#define F24 [UIFont systemFontOfSize:24]
#define F23 [UIFont systemFontOfSize:23]
#define F22 [UIFont systemFontOfSize:22]
#define F20 [UIFont systemFontOfSize:20]
#define F19 [UIFont systemFontOfSize:19]
#define F18 [UIFont systemFontOfSize:18]
#define F17 [UIFont systemFontOfSize:17]
#define F16 [UIFont systemFontOfSize:16]
#define F15 [UIFont systemFontOfSize:15]
#define F14 [UIFont systemFontOfSize:14]
#define F13 [UIFont systemFontOfSize:13]
#define F12 [UIFont systemFontOfSize:12]
#define F11 [UIFont systemFontOfSize:11]
#define F10 [UIFont systemFontOfSize:10]
#define F9  [UIFont systemFontOfSize:9]
#define F8  [UIFont systemFontOfSize:8]

///PingFangSC-Medium 字体
#define F30Medium [UIFont fontWithName:@"PingFangSC-Medium" size:30]
#define F29Medium [UIFont fontWithName:@"PingFangSC-Medium" size:29]
#define F28Medium [UIFont fontWithName:@"PingFangSC-Medium" size:28]
#define F27Medium [UIFont fontWithName:@"PingFangSC-Medium" size:27]
#define F26Medium [UIFont fontWithName:@"PingFangSC-Medium" size:26]
#define F25Medium [UIFont fontWithName:@"PingFangSC-Medium" size:25]
#define F24Medium [UIFont fontWithName:@"PingFangSC-Medium" size:24]
#define F23Medium [UIFont fontWithName:@"PingFangSC-Medium" size:23]
#define F22Medium [UIFont fontWithName:@"PingFangSC-Medium" size:22]
#define F20Medium [UIFont fontWithName:@"PingFangSC-Medium" size:20]
#define F19Medium [UIFont fontWithName:@"PingFangSC-Medium" size:19]
#define F18Medium [UIFont fontWithName:@"PingFangSC-Medium" size:18]
#define F17Medium [UIFont fontWithName:@"PingFangSC-Medium" size:17]
#define F16Medium [UIFont fontWithName:@"PingFangSC-Medium" size:16]
#define F15Medium [UIFont fontWithName:@"PingFangSC-Medium" size:15]
#define F14Medium [UIFont fontWithName:@"PingFangSC-Medium" size:14]
#define F13Medium [UIFont fontWithName:@"PingFangSC-Medium" size:13]
#define F12Medium [UIFont fontWithName:@"PingFangSC-Medium" size:12]
#define F11Medium [UIFont fontWithName:@"PingFangSC-Medium" size:11]
#define F10Medium [UIFont fontWithName:@"PingFangSC-Medium" size:10]
#define F9Medium  [UIFont fontWithName:@"PingFangSC-Medium" size:9]
#define F8Medium  [UIFont fontWithName:@"PingFangSC-Medium" size:8]


///粗体
#define HB20 [UIFont boldSystemFontOfSize:20]
#define HB18 [UIFont boldSystemFontOfSize:18]
#define HB16 [UIFont boldSystemFontOfSize:16]
#define HB14 [UIFont boldSystemFontOfSize:14]
#define HB13 [UIFont boldSystemFontOfSize:13]
#define HB12 [UIFont boldSystemFontOfSize:12]
#define HB11 [UIFont boldSystemFontOfSize:11]
#define HB10 [UIFont boldSystemFontOfSize:10]
#define HB8 [UIFont boldSystemFontOfSize:8]

/* ***************************** <--- 颜色(RGB) ---> ********************************* */
#pragma mark - 颜色(RGB)

///常用颜色
#define black_color         [UIColor blackColor]
#define blue_color          [UIColor blueColor]
#define brown_color         [UIColor brownColor]
#define clear_color         [UIColor clearColor]
#define darkGray_color      [UIColor darkGrayColor]
#define darkText_color      [UIColor darkTextColor]
#define white_color         [UIColor whiteColor]
#define yellow_color        [UIColor yellowColor]
#define red_color           [UIColor redColor]
#define cyan_color          [UIColor cyanColor]
#define orange_color        [UIColor orangeColor]
#define purple_color        [UIColor purpleColor]
#define lightText_color     [UIColor lightTextColor]
#define lightGray_color     [UIColor lightGrayColor]
#define green_color         [UIColor greenColor]
#define gray_color          [UIColor grayColor]
#define magenta_color       [UIColor magentaColor]
#define group_color         [UIColor groupTableViewBackgroundColor]
#define Main_DarkBlue           [UIColor colorWithRed:(50)/255.0 green:(124)/255.0 blue:(206)/255.0 alpha:1.0]
#define Main_lightBlue          [UIColor colorWithRed:(33)/255.0 green:(78)/255.0 blue:(97)/255.0 alpha:1.0]

#define Main_Color          [UIColor colorWithRed:(36)/255.0 green:(145)/255.0 blue:(248)/255.0 alpha:1.0]

/**
 *  主要字体颜色
 */
#define COLOR3 UIColorFromRGB(0X333333)
/**
 *  次要字体颜色
 */
#define COLOR6 UIColorFromRGB(0X666666)
/**
 *  辅助字体颜色
 */
#define COLOR9 UIColorFromRGB(0X999999)
/**
 *  主题背景色
 */
#define BACK_COLOR UIColorFromRGB(0xF2F6F8)
/**
 *  分割线灰色
 */
#define LINE_COLOR UIColorFromRGB(0xe4e4e4)


#define BackGround_Color    [UIColor colorWithRed:(240)/255.0 green:(240)/255.0 blue:(240)/255.0 alpha:1.0]


#define RGBCOLOR(r, g, b)       [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r, g, b, a)   [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

// RGB颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define kBackColor UIColorFromRGB(0xd81460)

/* ***************************** <--- 系统数据 ---> ********************************* */
#pragma mark - 系统数据

#define FSystemVersion          ([[[UIDevice currentDevice] systemVersion] floatValue])
#define DSystemVersion          ([[[UIDevice currentDevice] systemVersion] doubleValue])
#define SSystemVersion          ([[UIDevice currentDevice] systemVersion])

#define APPICONIMAGE [UIImage imageNamed:[[[[NSBundle mainBundle] infoDictionary] valueForKeyPath:@"CFBundleIcons.CFBundlePrimaryIcon.CFBundleIconFiles"] lastObject]]
#define APPNAME [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]
/**
 *  版本号1.0.0
 */
#define APP_Version [NSString stringWithFormat:@"%@",[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]]

#define GLOBAL_QUEUE dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
#define MAIN_QUEUE dispatch_get_main_queue()

#endif /* AppMacros_h */

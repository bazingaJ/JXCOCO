//
//  JXButton.m
//  NiWaWa
//
//  Created by yunduopu-ios-2 on 2018/12/3.
//  Copyright © 2018 Clound Dopp. All rights reserved.
//

#import "JXButton.h"

@interface JXButton ()

@property (nonatomic, assign) UIControlState status;

@end

@implementation JXButton


- (void)setCornerRadius:(CGFloat)cornerRadius{
    
    _cornerRadius = cornerRadius;
    self.layer.cornerRadius = cornerRadius;
    self.layer.masksToBounds = YES;
    
}

- (void)setBorderColor:(UIColor *)borderColor{
    
    _borderColor = borderColor;
    self.layer.borderColor = borderColor.CGColor;
}

- (void)setBorderWidth:(CGFloat)borderWidth{
    
    _borderWidth = borderWidth;
    self.layer.borderWidth = borderWidth;
}


- (instancetype)sel{
    
    self.status = UIControlStateSelected;
    return self;
}

- (instancetype)nor{
    
    self.status = UIControlStateNormal;
    return self;
}

- (JXButtonTitle)Title{
    
    JXButton *(^block)(NSString *textTitle) = ^(NSString *someTitle){
        [self setTitle:someTitle forState:self.status];
        return self;
    };
    return block;
}

- (JXButtonTitleColor)TitleColor{
    
    JXButton *(^block)(UIColor *textColor) = ^(UIColor *someColor){
        [self setTitleColor:someColor forState:self.status];
        return self;
    };
    return block;
}

- (JXButtonBackColor)BackGroundColor{
    
    JXButton *(^block)(UIColor *backColor) = ^(UIColor *someColor){
        [self setBackgroundColor:someColor];
        return self;
    };
    return block;
}

- (JXButtonFont)TextFont{
    
    JXButton *(^block)(CGFloat textFont) = ^(CGFloat someFont){
        self.titleLabel.font = [UIFont systemFontOfSize:someFont];
        return self;
    };
    return block;
}

- (JXButtonImage)Image{
    
    JXButton *(^block)(UIImage *image) = ^(UIImage *someImage){
        [self setImage:someImage forState:self.status];
        return self;
    };
    return block;
}

- (JXButtonBackImage)BackImage{
    
    JXButton *(^block)(UIImage *backImage) = ^(UIImage *someImage){
        [self setBackgroundImage:someImage forState:self.status];
        return self;
    };
    return block;
}

@end

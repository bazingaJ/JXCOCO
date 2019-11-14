//
//  JXView.m
//  SixDimensionalSensor
//
//  Created by yunduopu-ios-2 on 2019/3/12.
//  Copyright © 2019 Clound Dopp. All rights reserved.
//

#import "JXView.h"

@implementation JXView

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

@end

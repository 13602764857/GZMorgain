//
//  UIView+SYFrame.h
//  Created by 碎月 on 16/2/19.
//  Copyright © 2016年 碎月. All rights reserved.
//

#import <UIKit/UIKit.h>

#define FITNUM ([UIScreen mainScreen].bounds.size.width/375)   //适配比例系数
#define FITNUMLANDSCACE ([UIScreen mainScreen].bounds.size.height/375)

@interface UIView (SYFrame)

/**
 *  用点语法快速获取 宽 高 X Y;
 */
@property CGFloat width;

@property CGFloat height;

@property CGFloat x;

@property CGFloat y;

@property CGFloat centerX;

@property CGFloat centerY;

- (BOOL)getIslandscace;
/******* 适配屏幕尺寸系数  *******/
-(void)sizeToFitFrame;
@end

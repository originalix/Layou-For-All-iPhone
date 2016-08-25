//
//  CalculateLayout.h
//  Neuron
//
//  Created by Lix on 16/8/19.
//  Copyright © 2016年 Lix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, IPhoneType) {
    iPhone4Type = 0,
    iPhone5Type,
    iPhone6Type,
    iPhone6PlusType
};

@interface CalculateLayout : NSObject

/**
 *  基于UI设计的iPhone6设计图的全机型高度适配
 *
 *  @param height View高度
 *
 *  @return 适配后的高度
 */

+ (CGFloat)neu_iPhone4Height:(CGFloat)height;
+ (CGFloat)neu_iPhone5Height:(CGFloat)height;
+ (CGFloat)neu_iPhone6Height:(CGFloat)height;
+ (CGFloat)neu_iPhone6PlusHeight:(CGFloat)height;
+ (CGFloat)neu_layoutForAlliPhoneHeight:(CGFloat)height;
/**
 *  基于UI设计的iPhone6设计图的全机型宽度适配
 *
 *  @param width 宽度
 *
 *  @return 适配后的宽度
 */
+ (CGFloat)neu_iPhone4Width:(CGFloat)width;
+ (CGFloat)neu_iPhone5Width:(CGFloat)width;
+ (CGFloat)neu_iPhone6Width:(CGFloat)width;
+ (CGFloat)neu_iPhone6PlusWidth:(CGFloat)width;
+ (CGFloat)neu_layoutForAlliPhoneWidth:(CGFloat)width;
/**
 *  获取一个像素的宽度
 *
 */
+ (CGFloat)neu_onePixel;
@end

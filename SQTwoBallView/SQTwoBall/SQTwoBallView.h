//
//  SQTwoBallView.h
//  资运客户端
//
//  Created by rvakva on 2019/3/28.
//  Copyright © 2019年 甘世清. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SQTwoBallView : UIView

/**
 *  设置小球的半径
 *
 *  @param radius 半径
 */
- (void)SQ_setBallRadius:(CGFloat)radius;

/**
 *  设置俩小球颜色
 *
 *  @param oneColor 第一个小球颜色
 *  @param twoColor 第二个小球颜色
 */
- (void)SQ_setOneBallColor:(UIColor *)oneColor twoBallColor:(UIColor *)twoColor;
/**
 *  动画时间
 */
- (void)SQ_setAnimatorDuration:(CGFloat)duration;
/**
 *  设置小球移动的轨迹半径距离
 */
- (void)SQ_setAnimatorDistance:(CGFloat)distance;

/**
 开始动画
 */
- (void)SQ_startAnimator;

/**
 结束动画
 */
- (void)SQ_stopAnimator;
@end

NS_ASSUME_NONNULL_END

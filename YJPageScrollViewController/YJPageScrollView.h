//
//  YJPageScrollView.h
//  YJPageScrollViewControllerDemo
//
//  Created by YJHou on 2017/11/16.
//  Copyright © 2017年 https://github.com/stackhou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJPageScrollView : UIScrollView

@property (nonatomic, assign) CGFloat headerViewHeight; /**< 高度 */
@property (nonatomic, assign) BOOL gestureRecognizerShouldBegin;

@end

//
//  UIScrollView+PlaceholderView.h
//  UIScrollViewPlaceholderView
//
//  Created by 蔡强 on 2017/9/17.
//  Copyright © 2017年 kuaijiankang. All rights reserved.
//

#import <UIKit/UIKit.h>

/** UIView的占位图类型 */
typedef NS_ENUM(NSInteger, CQPlaceholderViewType) {
    /** 没网 */
    CQPlaceholderViewTypeNoNetwork,
    /** 没商品 */
    CQPlaceholderViewTypeNoGoods,
    /** 没评论 */
    CQPlaceholderViewTypeNoComment
};

@interface UIView (PlaceholderView)

/**
 展示UIView及其子类的占位图

 @param type 占位图类型
 @param reloadBlock 重新加载回调的block
 */
- (void)cq_showPlaceholderViewWithType:(CQPlaceholderViewType)type reloadBlock:(void(^)())reloadBlock;

/** 移除占位图 */
- (void)cq_removePlaceholderView;

@end

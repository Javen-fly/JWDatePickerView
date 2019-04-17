//
//  JWDateAlertView.h
//  JWPickerViewDemo
//
//  Created by 吴建文 on 2018/2/25.
//  Copyright © 2018年 Javen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWDatePickerView.h"
typedef NS_ENUM(NSInteger, JWDateAlertViewStyle) {
    JWDateAlertViewSheet = 0,
    JWDateAlertViewAlert
};

@protocol JWDateAlertViewDelegate <NSObject>

@optional

- (void)dateAlertViewDidSelectedSolar:(JWSolarDate *)solarDate
                            lunarDate:(JWLunarDate *)lunarDate
                                 date:(NSDate *)date;
- (void)dateAlertViewDidCancel;

@end

@interface JWDateAlertView : UIView

@property (nonatomic, assign) JWDateViewType type;
@property (nonatomic, assign) JWDateAlertViewStyle style;
@property (nonatomic, strong) JWSolarDate *solarDate;
@property (nonatomic, strong) JWLunarDate *lunarDate;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, assign) id<JWDateAlertViewDelegate> delegate;

+ (instancetype)alertView;
+ (instancetype)alertViewWithSelectedAction:(void (^)(JWSolarDate *solarDate, JWLunarDate *lunarDate, NSDate *date))selectedDate;

- (void)show;
- (void)dismiss;

@end

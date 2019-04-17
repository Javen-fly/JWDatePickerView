//
//  JWDatePickerView.h
//  JWPickerViewDemo
//
//  Created by 吴建文 on 2018/2/24.
//  Copyright © 2018年 Javen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWDateViewHeader.h"

@interface JWDatePickerView : UIView

/** 显示内容样式 */
@property (nonatomic, assign) JWDateViewType type;
//@property (nonatomic, strong) JWDate *date;
@property (nonatomic, strong) JWLunarDate *lunarDate;
@property (nonatomic, strong) JWSolarDate *solarDate;
@property (nonatomic, strong) NSDate *date;

@end

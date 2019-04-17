//
//  JWDateViewHeader.h
//  JWPickerViewDemo
//
//  Created by 吴建文 on 2018/2/25.
//  Copyright © 2018年 Javen. All rights reserved.
//

#ifndef JWDateViewHeader_h
#define JWDateViewHeader_h

#import "JWSolarDate.h"
#import "JWLunarDate.h"

typedef NS_ENUM(NSInteger, JWDateViewType) {
    JWDateViewTypeDefault = 0,    //默认格式 公历年月日 2018-02-24
    JWDateViewTypeTime,           //选时分秒 13:39:20
    JWDateViewTypeLunar,          //农历日期 戊戌年正月初九
    //    JWDatePickerViewTypeCustom          //自定义格式
};

#endif /* JWDateViewHeader_h */

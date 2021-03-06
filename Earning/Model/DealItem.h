//
//  DealItem.h
//  Earning
//
//  Created by 淞 柴 on 15/4/19.
//  Copyright (c) 2015年 mumiao. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : int
{
    DealItemStateDefault = 0,
    DealItemStateDelete,
} DealItemState;

@interface DealItem : NSObject
@property (nonatomic, assign) int localId;
@property (nonatomic, strong) NSString* dealTime;
@property (nonatomic, assign) double number;
@property (nonatomic, assign) double price; //卖出价格或者买入价格
@property (nonatomic, assign) double fee;
@property (nonatomic, assign) DealItemState curState; //已删除?也许还有别的用
@property (nonatomic, assign) bool sell; //true为买出，false为买入，默认买入
@property (nonatomic, assign) int categoryLocalId; //外键
@end

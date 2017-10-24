//
//  DWTransaction.h
//  hgfd
//
//  Created by Wicky on 2017/2/25.
//  Copyright © 2017年 Wicky. All rights reserved.
//

/**
 DWTransaction
 事物类，将任务与runloop空闲时提交
 
 源码修改自YYTextTransaction/ASDK
 
 version 1.0.0
 添加事物空闲提交方法
 */

#import <Foundation/Foundation.h>

@interface DWTransaction : NSObject

+(instancetype)dw_TransactionWithTarget:(id)target selector:(SEL)selector;

+(instancetype)dw_TransactionWithTarget:(id)target selector:(SEL)selector withObject:(id)object;

-(void)commit;

@end

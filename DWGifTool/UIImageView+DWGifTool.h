//
//  UIImageView+DWGifTool.h
//  GifDemo
//
//  Created by Wicky on 16/9/26.
//  Copyright © 2016年 Wicky. All rights reserved.
//

/**
 UIImageView+DWGifTool
 
 UIImageView播放动图的分类
 
 version 1.0.0
 添加以动图生成imageView实例api
 添加对现有imageView展示动图api
 添加动图控制相关api
 */

#import <UIKit/UIKit.h>
static NSString * const kImageViewGifFinish = @"kImageViewGifFinish";
static NSString * const kImageViewGifStart = @"kImageViewGifStart";
static NSString * const kImageViewGifCancel = @"kImageViewGifCancel";
@interface UIImageView (DWGifTool)<CAAnimationDelegate>
///保存动图每帧的数组
@property (nonatomic) NSMutableArray * gifArray;
///单次循环动图的持续时间
@property (nonatomic ,assign) CGFloat gifDuration;

///以frame、图片地址、循环次数生成imageView。
/*
 repeatCount:   无限循环请填写MAXFLOAT
 */
-(instancetype)initWithFrame:(CGRect)frame gifPathString:(NSString *)path repeatCount:(CGFloat)repeatCount;

///以图片地址、循环次数按图片大小生成imageView
-(instancetype)initWithGifPathString:(NSString *)path repeatCount:(CGFloat)repeatCount;

///以图片地址及是否循环按图片大小穿件imageView
-(instancetype)initWithGifPathString:(NSString *)path repeat:(BOOL)repeat;

///播放Gif
-(void)startGifWithPath:(NSString *)path repeatCount:(CGFloat)repeatCount;

///恢复动图
-(void)resumeGif;

///暂停动图
-(void)suspendGif;

///销毁动图
-(void)invalidGif;
@end

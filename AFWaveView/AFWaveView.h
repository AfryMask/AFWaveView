//
//  AFWaveView.h
//  AFWaveViewDemo
//
//  Created by Afry on 15/11/30.
//  Copyright © 2015年 Afry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFWaveView : UIView
//可选属性,有默认值
@property(nonatomic,assign)NSInteger duration;//持续时间,默认1秒
@property(nonatomic,assign)NSInteger maxR;//最大半径,默认50
@property(nonatomic,assign)NSInteger waveCount;//波浪层数,默认5
@property(nonatomic,assign)NSInteger waveDelta;//波浪间距,默认10
@property(nonatomic,assign)CGFloat maxAlpha;//波源透明度,默认1
@property(nonatomic,assign)CGFloat minAlpha;//波末端透明度,默认0
@property(nonatomic,assign)CGFloat degree;//清晰度,默认0.05
@property(nonatomic,strong)UIColor *mainColor;//主要颜色,默认红色
@property(nonatomic,assign)NSInteger maxHearts;//心形的最大数量

-(instancetype)initWithTouches:(NSSet *)touches;
-(void)fire;
@end
//
//  ViewController.m
//  AFWaveViewDemo
//
//  Created by Afry on 15/11/30.
//  Copyright © 2015年 Afry. All rights reserved.
//

#import "ViewController.h"
#import "AFWaveView.h"

@interface ViewController ()
@property(nonatomic,weak)AFWaveView *waveView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor=[UIColor whiteColor];
  
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    AFWaveView *waveView = [[AFWaveView alloc]initWithTouches:touches];
    
//    waveView.maxR=50;
//    waveView.duration=2;
//    waveView.waveDelta=10;
//    waveView.waveCount=3;
//    waveView.maxAlpha=1;
//    waveView.minAlpha=0;
    
    

    [self.view addSubview:waveView];

}

@end

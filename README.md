# AFWaveView
心形波浪图像，笛卡尔曲线

![Alt text](./AFWave.gif)

使用方法：

1.将 AFWaveView.h 和 AFWaveView.m 导入项目中

2.将以下代码复制到应用程序的touchesBegan方法中

```
UITouch *t = touches.anyObject;
CGPoint p  = [t locationInView:self.view];
AFWaveView *waveView = [[AFWaveView alloc]initWithPoint:p];
[self.view addSubview:waveView];
```
3.可选项
```
waveView.maxR=50;      //最大心形半径
waveView.duration=2;   //心形图像显示时间
waveView.waveDelta=10; //波浪间距
waveView.waveCount=3;  //波浪数量
                       //更多请查看源码
```

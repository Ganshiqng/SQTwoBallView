//
//  ViewController.m
//  SQTwoBallView
//
//  Created by rvakva on 2019/3/28.
//  Copyright © 2019年 rvakva. All rights reserved.
//

#import "ViewController.h"
#import "SQTwoBallView.h"
@interface ViewController ()

@property (nonatomic , strong) SQTwoBallView * sqBallView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.sqBallView];
    [self.sqBallView SQ_startAnimator];
    
}
-(SQTwoBallView*)sqBallView
{
    if (!_sqBallView) {
        _sqBallView = [[SQTwoBallView alloc]initWithFrame:CGRectMake(150, 300, 50, 50)];
        [_sqBallView SQ_setOneBallColor:[UIColor redColor] twoBallColor:[UIColor blackColor]];
        [_sqBallView SQ_setBallRadius:12];
        [_sqBallView SQ_setAnimatorDuration:1.1];
        [_sqBallView SQ_setAnimatorDistance:14];
    }
    return _sqBallView;
}

@end

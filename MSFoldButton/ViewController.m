//
//  ViewController.m
//  MSFoldButton
//
//  Created by mrscorpion on 16/7/5.
//  Copyright © 2016年 mrscorpion. All rights reserved.
//

#import "ViewController.h"
#import "FoldStyleButton.h"

@interface ViewController ()
@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    FoldStyleButton *button = [[FoldStyleButton alloc] initWithFrame:CGRectMake(100, 200, 50, 50) mainButtonBGImage:@"ordernormal" selectBGImage:@"orderselect" otherButtonsBGimages:@[@"zhuanyi",@"dianhua"]];
    button.ButtonClickBlock = ^void(UIButton *button){
        NSLog(@"----%d/-",button.tag);
    };
    [self.view addSubview:button];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

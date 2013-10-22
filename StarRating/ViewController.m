//
//  ViewController.m
//  StarRating
//
//  Created by 村山 庸一 on 2013/10/22.
//  Copyright (c) 2013年 村山 庸一. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
	self.starRatingView = [[StarRatingView alloc] initWithFrame:CGRectMake(10, 100, 275, 50)];
	[self.view addSubview:self.starRatingView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end

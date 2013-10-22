//
//  StarRatingView.h
//  StarRating
//
//  Created by 村山 庸一 on 2013/10/22.
//  Copyright (c) 2013年 村山 庸一. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StarRatingView : UIView

@property(nonatomic) int starValue;
@property(strong, nonatomic) UIView * zeroView;
@property(strong, nonatomic) UIImageView * firstStarView;
@property(strong, nonatomic) UIImageView * secondStarView;
@property(strong, nonatomic) UIImageView * thirdStarView;
@property(strong, nonatomic) UIImageView * fourthStarView;
@property(strong, nonatomic) UIImageView * fifthStarView;

@property(strong, nonatomic) UIImage * starImage;
@property(strong, nonatomic) UIImage * darkStarImage;

@end

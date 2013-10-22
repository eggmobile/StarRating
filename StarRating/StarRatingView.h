//
//  StarRatingView.h
//  StarRating
//
//  Created by 村山 庸一 on 2013/10/22.
//  Copyright (c) 2013年 村山 庸一. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StarRatingView : UIView{
	UIView * zeroView;
	UIImageView * firstStarView;
	UIImageView * secondStarView;
	UIImageView * thirdStarView;
	UIImageView * fourthStarView;
	UIImageView * fifthStarView;
}

@property(nonatomic) int starValue;

@property(strong, nonatomic) UIImage * starImage;
@property(strong, nonatomic) UIImage * darkStarImage;

@end

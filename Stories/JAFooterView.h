//
//  JAFooterCollectionReusableView.h
//  Stories
//
//  Created by Jean-baptiste PENRATH on 20/12/2014.
//  Copyright (c) 2014 Jb & Anto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JAFooterView : UIImageView

@property (strong, nonatomic) UIImage *backgroundImage;
@property (nonatomic) CGPoint initialCenter;
@property (nonatomic) CGFloat maxParallaxOffset;

-(void)animateEnterWithValue:(CGFloat)superViewHeight;

@end

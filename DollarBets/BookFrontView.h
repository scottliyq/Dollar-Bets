//
//  BookFrontView.h
//  DollarBets
//
//  Created by Richard Kirk on 8/26/11.
//  Copyright (c) 2011 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BookViewController;
@class Opponent;

@interface BookFrontView : UIView
{
    UIImageView *bookImgView;
    UITextField *nameTextField;
    UILabel *dateLabel;
    UIButton *plusSignButton;
    UIButton *configButton;
    UITextField *opponentTextField;
    BOOL frontViewIsVisible;
    UILabel *nameLabel;
    
    BookViewController *viewController;
    
}
@property (strong, retain) UIImageView *bookImgView;
@property (strong, retain) UITextField *nameTextField;
@property (strong, retain) UILabel *dateLabel;
@property (strong, nonatomic) UIButton *plusSignButton;
@property (strong, nonatomic) UIButton *configButton;
@property (strong, nonatomic) UILabel *nameLabel;


@property (strong, nonatomic)BookViewController *viewController;



-(void)showPlusButton;
-(void)hidePlusButton;
-(void)showConfigAndDate;
-(void)refresh;

@end

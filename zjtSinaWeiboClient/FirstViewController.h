//
//  FirstViewController.h
//  zjtSinaWeiboClient
//
//  Created by jtone z on 11-11-25.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StatusViewContrillerBase.h"
#import "TwitterVC.h"
#import "OAuthWebView.h"

@interface FirstViewController : StatusViewContrillerBase
{
    NSString *userID;
}

@property (nonatomic, copy)     NSString *userID;
@property (nonatomic, retain) NSTimer *timer;

@end

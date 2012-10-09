//
//  ViewController.h
//  Phresco
//
//  Created by Rojaramani on 03/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ServiceHandler.h"
@class Tabbar;
@class HomeViewController;
@class NavigationBar;
@class WebContainer;

@interface ViewController : UIViewController
{
    IBOutlet UIView *loading;
	
    int indexSelectedInMorePage;
    Tabbar          *tabbar;
    NavigationBar   *navigationBar;
     WebContainer    *webContainer;
    ServiceHandler *serviceHandler;
    HomeViewController	 *homeViewController;
}
@property (nonatomic, strong) HomeViewController	 *homeViewController;
@property(nonatomic, strong) WebContainer    *webContainer;
@property(nonatomic, strong) NavigationBar   *navigationBar;
@property(nonatomic, strong) Tabbar *tabbar;

-(void)addLoadingScreen;
-(void)removeLoadingScreen;
-(void)callConfigService;
-(void)configServiceCallDone:(NSMutableDictionary*)dictionary;
-(void)willStartLoadingFeaturedAssets;
-(void)willStartLoadingExtraAssets;

-(void)showTabbar;
-(UIView*)loadNavigationBar;

-(NSArray*)categoriseFeaturesWithRange:(NSRange)range;
-(void)addNativeControllerForIndex:(int)index toArray:(NSMutableArray*)controllers;
-(void)moreButtonsAction:(id)sender;
-(void)tabBarButtonAction:(id)sender;
-(void)showViewOfFeature:(NSString*)title userInfo:(NSDictionary*)userInfo;
-(void)willStartLoadingFeaturedAssets;

@end

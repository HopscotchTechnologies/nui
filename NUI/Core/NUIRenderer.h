//
//  NUIRenderer.h
//  NUIDemo
//
//  Created by Tom Benner on 11/24/12.
//  Copyright (c) 2012 Tom Benner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NUIBarButtonItemRenderer.h"
#import "NUIButtonRenderer.h"
#import "NUILabelRenderer.h"
#import "NUINavigationBarRenderer.h"
#import "NUINavigationItemRenderer.h"
#import "NUISegmentedControlRenderer.h"
#import "NUITabBarRenderer.h"
#import "NUITabBarItemRenderer.h"
#import "NUITableViewCellRenderer.h"
#import "NUITextFieldRenderer.h"
#import "NUIViewRenderer.h"
#import "NUISwitchRenderer.h"

@interface NUIRenderer : NSObject

+ (void)renderBarButtonItem:(UIBarButtonItem*)item;
+ (void)renderBarButtonItem:(UIBarButtonItem*)item withClass:(NSString*)className;

+ (void)renderButton:(UIButton*)button;
+ (void)renderButton:(UIButton*)button withClass:(NSString*)className;

+ (void)renderLabel:(UILabel*)label;
+ (void)renderLabel:(UILabel*)label withClass:(NSString*)className;
+ (void)renderLabel:(UILabel*)label withClass:(NSString*)className withSuffix:(NSString*)suffix;

+ (void)renderNavigationBar:(UINavigationBar*)bar;
+ (void)renderNavigationBar:(UINavigationBar*)bar withClass:(NSString*)className;

+ (void)renderNavigationItem:(UINavigationItem*)item;
+ (void)renderNavigationItem:(UINavigationItem*)item withClass:(NSString*)className;

+ (void)renderSegmentedControl:(UISegmentedControl*)control;
+ (void)renderSegmentedControl:(UISegmentedControl*)control withClass:(NSString*)className;

+ (void)renderSwitch:(UISwitch*)uiSwitch;
+ (void)renderSwitch:(UISwitch*)uiSwitch withClass:(NSString*)className;

+ (void)renderTabBar:(UITabBar*)bar;
+ (void)renderTabBar:(UITabBar*)bar withClass:(NSString*)className;

+ (void)renderTabBarItem:(UITabBarItem*)bar;
+ (void)renderTabBarItem:(UITabBarItem*)bar withClass:(NSString*)className;

+ (void)renderTableViewCell:(UITableViewCell*)cell;
+ (void)renderTableViewCell:(UITableViewCell*)cell withClass:(NSString*)className;

+ (void)renderTextField:(UITextField*)textField;
+ (void)renderTextField:(UITextField*)textField withClass:(NSString*)className;

+ (void)renderView:(UIView*)view;
+ (void)renderView:(UIView*)view withClass:(NSString*)className;

@end

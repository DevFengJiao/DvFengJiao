//
//  AppDelegate.h
//  DvFengJiao
//
//  Created by hzyx01 on 16/12/12.
//  Copyright © 2016年 hzyx01. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


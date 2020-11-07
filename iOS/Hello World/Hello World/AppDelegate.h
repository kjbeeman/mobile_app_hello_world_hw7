//
//  AppDelegate.h
//  Hello World
//
//  Created by kebeeman on 11/7/20.
//  Copyright © 2020 kebeeman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


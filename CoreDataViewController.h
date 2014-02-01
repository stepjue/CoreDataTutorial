//
//  CoreDataViewController.h
//  CoreDataTutorial
//
//  Created by Stephen Jue on 1/31/14.
//  Copyright (c) 2014 Stephen Jue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "calpolyAppDelegate.h"

@interface CoreDataViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UILabel *status;
- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;
@end

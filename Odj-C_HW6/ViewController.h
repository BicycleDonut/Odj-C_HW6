//
//  ViewController.h
//  Odj-C_HW6
//
//  Created by Alexander on 16.03.2024.
//  Copyright © 2024 Alexander. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property(nonatomic, weak) IBOutlet UITextView *textView;
@property(nonatomic, weak) IBOutlet UITextView *textViewForFile;

@property(nonatomic) NSUserDefaults *userDefaults;

- (instancetype)initWithCoder:(NSCoder *)coder;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil
                         bundle:(NSBundle *)nibBundleOrNil;
- (void)clearUserDefaults;

@end

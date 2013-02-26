//
//  DEAPeripheralsViewController.h
//  Deanna
//
//  Created by Charles Choi on 1/19/13.
//  Copyright (c) 2013 Yummy Melon Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YMSBluetoothService.h"

@interface DEAPeripheralsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, YMSBluetoothServiceDelegate>

@property (strong, nonatomic) IBOutlet UITableView *peripheralsTableView;

@property (strong, nonatomic) UIBarButtonItem *scanButton;
@property (strong, nonatomic) UIBarButtonItem *connectButton;


@end
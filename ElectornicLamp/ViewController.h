//
//  ViewController.h
//  ElectornicLamp
//
//  Created by Com on 9/18/19.
//  Copyright © 2019 Com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *tv_ssid;
@property (weak, nonatomic) IBOutlet UITextField *tv_bssid;
@property (weak, nonatomic) IBOutlet UITextField *tv_password;
@property (weak, nonatomic) IBOutlet UIButton *bt_confirmcancel;

@end


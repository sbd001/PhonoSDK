//
//  VisIVRViewController.h
//  VisIVR
//
//  Created by Tim Panton on 15/12/2011.
//  Copyright (c) 2011 Westhhawk Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PhonoNative;
@class PhonoCall;
@class PhonoPhone;

@interface VisIVRViewController : UIViewController <UIAlertViewDelegate>
{
    UITextField *appNum;
    UILabel *tjid;
    UILabel *status;
    UIWebView *prompt;
    PhonoNative *phono;
    PhonoPhone *phone;
    PhonoCall *call;
    UITextField *outMess;

}
@property (nonatomic,retain) IBOutlet UITextField *outMess;
@property (nonatomic,retain) IBOutlet UITextField *appNum;
@property (nonatomic,retain) IBOutlet UILabel *tjid;
@property (nonatomic,retain) IBOutlet UILabel *status;
@property (nonatomic,retain) IBOutlet UIWebView *prompt;
@property (nonatomic,retain) IBOutlet UISegmentedControl *domain;


- (IBAction)connect;
- (IBAction)disconnect;
- (IBAction)call;
- (IBAction)hangup;
- (IBAction)digit:(id) sender ;
- (IBAction)sendMess;
- (IBAction)speaker:(id)sender;

@end

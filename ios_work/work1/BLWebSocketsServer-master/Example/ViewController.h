//
//  ViewController.h
//  BLWebSocketsServer
//
//  Created by Benjamin Loulier on 1/22/13.
//  Copyright (c) 2013 Benjamin Loulier. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIWebView *webView;
- (IBAction)toggleServer:(UIBarButtonItem *)sender;

@end

//
//  ViewController.h
//  WeixinDeom
//
//  Created by iHope on 13-11-8.
//  Copyright (c) 2013年 任海丽. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SocketRocket/SRWebSocket.h"

@interface ViewController : UIViewController<SRWebSocketDelegate>
{
    SRWebSocket *webSocket;
}

@property (nonatomic, strong) NSMutableArray *resultArray;


@end

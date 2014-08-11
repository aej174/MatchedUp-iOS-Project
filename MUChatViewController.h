//
//  MUChatViewController.h
//  MatchedUp
//
//  Created by Allan Jones on 8/1/14.
//  Copyright (c) 2014 Allan Jones. All rights reserved.
//

#import "JSMessagesViewController.h"

@interface MUChatViewController : JSMessagesViewController <JSMessagesViewDelegate,JSMessagesViewDataSource>

@property (strong, nonatomic) PFObject *chatRoom;

@end

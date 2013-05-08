//
//  UVDelegate.h
//  UserVoice
//
//  Created by Austin Taylor on 1/13/12.
//  Copyright (c) 2012 UserVoice Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UVBaseTicketViewController;
@class UVBaseSuggestionViewController;
@class UVTicket;
@class UVSuggestion;

@protocol UVDelegate <NSObject>
@optional
- (void)userVoiceWasDismissed;
- (void)userVoiceTicketViewController:(UVBaseTicketViewController*) ticketVC didSubmitTicket:(UVTicket*) ticket;
- (void)userVoiceSuggestionViewController:(UVBaseSuggestionViewController*) ticketVC didSubmitSuggestion:(UVSuggestion*) suggestion;

@end

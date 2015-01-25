//
//  BranchInviteContactProvider.h
//  BranchInvite
//
//  Created by Graham Mueller on 1/25/15.
//
//

#import "BranchInviteContact.h"
#import "BranchInviteSendingCompletionDelegate.h"

@protocol BranchInviteContactProvider <NSObject>

- (NSString *)segmentTitle;
- (NSArray *)contacts;
- (UIViewController *)inviteSendingController:(NSArray *)selectedContacts inviteUrl:(NSString *)inviteUrl completionDelegate:(id <BranchInviteSendingCompletionDelegate>)completionDelegate;

// TODO
// - (UIView *)emptyListView;

@end

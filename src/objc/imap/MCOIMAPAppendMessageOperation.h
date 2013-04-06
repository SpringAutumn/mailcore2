//
//  MCOIMAPAppendMessageOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 3/25/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_MCOIMAPAPPENDMESSAGEOPERATION_H_

#define __MAILCORE_MCOIMAPAPPENDMESSAGEOPERATION_H_

// This class implements an operation that adds a message to a folder.

#import <MailCore/MCOIMAPBaseOperation.h>
#import <MailCore/MCOConstants.h>

@interface MCOIMAPAppendMessageOperation : MCOIMAPBaseOperation

// This block will be called during the progression while sending the message
// when some bytes have been sent to the network.
@property (nonatomic, copy) MCOIMAPBaseOperationProgressBlock progress;

// Starts the asynchronous operation.
// On success, the completion block will be called with nil as error. createdUID will be the value of the UID of
// the created message is the server supports UIDPLUS or zero if not.
// On failure, error will be set with MCOErrorDomain as domain and an error code available in MCOConstants.h.
// createdUID will be zero.
- (void) start:(void (^)(NSError * error, uint32_t createdUID))completionBlock;

@end

#endif

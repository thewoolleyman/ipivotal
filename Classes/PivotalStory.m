//
//  PivotalStory.m
//  iPivotal
//
//  Created by Mark Lussier on 5/28/09.
//  Copyright 2009 Juniper Networks. All rights reserved.
//

#import "PivotalStory.h"


@implementation PivotalStory

@synthesize storyId, storyType, estimate, url, currentState, description, name, requestedBy, owner, createdAt, acceptedAt;

#pragma mark -
#pragma mark Cleanup Methods

- (void)dealloc {
    [storyType release];
    [url release];
    [currentState release];
    [description release];
    [name release];
    [requestedBy release];
    [owner release];
    [createdAt release];
    [acceptedAt release];    
    [super dealloc];
}


@end

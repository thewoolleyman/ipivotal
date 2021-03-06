#import <Foundation/Foundation.h>
#import "PivotalResource.h"
#import "PivotalProject.h"


@interface PivotalIterations : PivotalResource {
    PivotalProject *project;
@private
    NSURL *url;
    NSArray *iterations;
    NSString *cacheFilename;
    NSDate *lastUpdated;    
}

@property (nonatomic,retain) PivotalProject *project;
@property (nonatomic,retain) NSURL *url;
@property (nonatomic,retain) NSArray *iterations;
@property (nonatomic, retain) NSString *cacheFilename;
@property (nonatomic, retain) NSDate *lastUpdated;


- (id)initWithProject:(PivotalProject *)theProject;
- (void)loadIterations;
- (void)loadedIterations:(id)theResult;
- (void)reloadIterations;
- (BOOL)hasCachedDocument;


@end

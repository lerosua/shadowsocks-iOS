//
//  SWBWebView.h
//  AquaWeb
//
//  Created by clowwindy on 11-6-16.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SWBWebView : UIWebView {
    
}

- (NSString *)pageTitle;
- (NSString *)aqLocationHref;
- (CGSize)windowSize;
- (CGPoint)scrollOffset;
- (NSString *)lastClickedLink;
- (NSString *)lastClickedLinkText;
- (NSString *)lastImageSrc;
- (void)openLastClickedLink;
- (NSString *)selection;

@end
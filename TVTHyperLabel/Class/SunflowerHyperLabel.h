//
//  SunflowerHyperLabel.h
//  SunflowerHyperLabelDemo
//
//  Created by Tran Van Thanh on 23/9/15.
//  Copyright © 2015 JW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SunflowerHyperLabel : UILabel

@property (nonatomic) NSDictionary *linkAttributeDefault;
@property (nonatomic) NSDictionary *linkAttributeHighlight;

- (void)setLinkForRange:(NSRange)range withAttributes:(NSDictionary *)attributes andLinkHandler:(void (^)(SunflowerHyperLabel *label, NSRange selectedRange))handler;
- (void)setLinkForRange:(NSRange)range withLinkHandler:(void(^)(SunflowerHyperLabel *label, NSRange selectedRange))handler;

- (void)setLinkForSubstring:(NSString *)substring withAttribute:(NSDictionary *)attribute andLinkHandler:(void(^)(SunflowerHyperLabel *label, NSString *substring))handler;
- (void)setLinkForSubstring:(NSString *)substring withLinkHandler:(void(^)(SunflowerHyperLabel *label, NSString *substring))handler;

- (void)setLinksForSubstrings:(NSArray *)substrings withLinkHandler:(void(^)(SunflowerHyperLabel *label, NSString *substring))handler;

- (void)clearActionDictionary;

@end

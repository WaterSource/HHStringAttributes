//
//  HHStringParser.h
//  Espressos
//
//  Created by 源 何 on 2017/5/11.
//  Copyright © 2017年 Gowalla. All rights reserved.
//

#import "HHStringAttributes.h"
#import <Foundation/Foundation.h>

@interface HHStringParser : NSObject

+ (HHStringParser *)sharedParser;


#pragma mark - Set Styles

- (void)setDefaultAttributes:(HHStringAttributes *)attributes;

- (void)setAttributes:(HHStringAttributes *)attributes forTag:(NSString *)tag;


#pragma mark - Convenience

- (void)addStyleWithTagName:(NSString *)tagName font:(id)font;

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color;

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color
            backgroundColor:(id)backgroundColor
              strikethrough:(BOOL)strikethrough
                  underline:(BOOL)underline;

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color
            backgroundColor:(id)backgroundColor
             baselineOffset:(CGFloat)baselineOffset
          strikethroughLine:(CGFloat)strikethroughLine
                  underline:(BOOL)underline;

#pragma mark - Parse Markup To Attributed String

- (NSAttributedString *)attributedStringFromMarkup:(NSString *)markup;


@end

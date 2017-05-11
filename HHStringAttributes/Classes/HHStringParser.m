//
//  HHStringParser.m
//  Espressos
//
//  Created by 源 何 on 2017/5/11.
//  Copyright © 2017年 Gowalla. All rights reserved.
//

#import "HHStringParser.h"
#import "SLSMarkupParser.h"

@interface HHStringParser ()
@property (strong, nonatomic) NSMutableDictionary *styles;
@end


@implementation HHStringParser

- (id)init
{
    self = [super init];
    if (self) {
        _styles = [NSMutableDictionary dictionary];
    }
    return self;
}

+ (HHStringParser *)sharedParser
{
    static HHStringParser *__parser = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        __parser = [[HHStringParser alloc] init];
    });
    return __parser;
}

#pragma mark - Set Styles

- (void)setDefaultAttributes:(HHStringAttributes *)attributes
{
    _styles[@"$default"] = [attributes dictionary];
}

- (void)setAttributes:(HHStringAttributes *)attributes forTag:(NSString *)tag
{
    _styles[tag] = [attributes dictionary];
}

#pragma mark - Convenience

- (void)addStyleWithTagName:(NSString *)tagName font:(id)font
{
    HHStringAttributes *attributes = [[HHStringAttributes alloc] init];
    attributes.font = font;
    [self setAttributes:attributes forTag:tagName];
}

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color
{
    HHStringAttributes *attributes = [[HHStringAttributes alloc] init];
    attributes.font         = font;
    attributes.textColor    = color;
    [self setAttributes:attributes forTag:tagName];
}

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color
            backgroundColor:(id)backgroundColor
              strikethrough:(BOOL)strikethrough
                  underline:(BOOL)underline
{
    HHStringAttributes *attributes      = [[HHStringAttributes alloc] init];
    attributes.font                     = font;
    attributes.textColor                = color;
    attributes.backgroundColor          = backgroundColor;
    attributes.strikethrough            = strikethrough;
    attributes.underline                = underline;
    [self setAttributes:attributes forTag:tagName];
}

- (void)addStyleWithTagName:(NSString *)tagName
                       font:(id)font
                      color:(id)color
            backgroundColor:(id)backgroundColor
             baselineOffset:(CGFloat)baselineOffset
          strikethroughLine:(CGFloat)strikethroughLine
                  underline:(BOOL)underline
{
    HHStringAttributes *attributes      = [[HHStringAttributes alloc] init];
    attributes.font                     = font;
    attributes.textColor                = color;
    attributes.backgroundColor          = backgroundColor;
    attributes.baselineOffset           = baselineOffset;
    attributes.strikethroughLine        = strikethroughLine;
    attributes.underline                = underline;
    [self setAttributes:attributes forTag:tagName];
}

#pragma mark - Parse Markup To Attributed String

- (NSAttributedString *)attributedStringFromMarkup:(NSString *)markup
{
    NSError *error = nil;
    NSAttributedString *string = [SLSMarkupParser attributedStringWithMarkup:markup style:_styles error:&error];
    if (error) NSLog(@"%@", [error localizedDescription]);
    return string;
}

@end

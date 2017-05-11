//
//  HHStringAttributes.h
//  Espressos
//
//  Created by 源 何 on 2017/5/11.
//  Copyright © 2017年 Gowalla. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HHStringAttributes : NSObject

// Basics
@property (nonatomic, strong) id                 font;                              // UIFont || NSFont
@property (nonatomic, strong) id                 textColor;                         // UIColor || NSColor
@property (nonatomic, strong) id                 backgroundColor;                   // UIColor || NSColor

// More
@property (nonatomic, assign) BOOL               ligatures;                         // Allow some characters to be combined
@property (nonatomic, assign) CGFloat            kern;                             // distance between characters
@property (nonatomic, assign) BOOL               strikethrough;
@property (nonatomic, strong) id                 strikethroughColor;
@property (nonatomic, assign) BOOL               underline;
@property (nonatomic, strong) id                 underlineColor;
@property (nonatomic, strong) id                 strokeColor;
@property (nonatomic, assign) CGFloat            strokeWidth;
@property (nonatomic, assign) CGFloat            strikethroughLine;
@property (nonatomic, strong) NSTextAttachment   *textAttachment;
@property (nonatomic, strong) NSURL              *link;
@property (nonatomic, assign) CGFloat            baselineOffset;
@property (nonatomic, assign) CGFloat            obliqueness;
@property (nonatomic, assign) CGFloat            expansion;
@property (nonatomic, assign) BOOL               verticalGlyphForm;

// Paragraph Style
@property (nonatomic, strong) NSParagraphStyle   *paragraphStyle;
@property (nonatomic, assign) CGFloat            lineSpacing;
@property (nonatomic, assign) CGFloat            paragraphSpacing;
@property (nonatomic, assign) NSTextAlignment    alignment;
@property (nonatomic, assign) CGFloat            firstLineHeadIndent;
@property (nonatomic, assign) CGFloat            headIndent;
@property (nonatomic, assign) CGFloat            tailIndent;
@property (nonatomic, assign) NSLineBreakMode    lineBreakMode;
@property (nonatomic, assign) CGFloat            minimumLineHeight;
@property (nonatomic, assign) CGFloat            maximumLineHeight;
@property (nonatomic, strong) NSTextTab          *tabStop;
@property (nonatomic, strong) NSTextTab          *removeTabStop;
@property (nonatomic, strong) NSArray            *tabStops;
@property (nonatomic, assign) NSWritingDirection writingDirection;
@property (nonatomic, assign) CGFloat            lineHeightMultiple;
@property (nonatomic, assign) CGFloat            paragraphSpacingBefore;
@property (nonatomic, assign) CGFloat            defaultTabInterval;
@property (nonatomic, strong) NSArray            *textBlocks;
@property (nonatomic, strong) NSArray            *textLists;
@property (nonatomic, assign) CGFloat            hyphenationFactor;
@property (nonatomic, assign) CGFloat            tighteningFactorForTruncation;
@property (nonatomic, assign) NSInteger          headerLevel;

// Shadow
@property (nonatomic, assign) CGFloat            *shadowBlurRadius;
@property (nonatomic, strong) id                 shadowColor;                       // UIColor || NSColor
@property (nonatomic, assign) CGSize             shadowOffset;

// Outline
@property (nonatomic, strong) id                 outlineColor;
@property (nonatomic, assign) CGFloat            outlineWidth;

- (NSDictionary *)dictionary;

@end

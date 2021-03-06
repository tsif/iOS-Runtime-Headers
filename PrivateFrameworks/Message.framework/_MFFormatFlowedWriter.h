/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class PlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject {
    unsigned int _addedTrailingSpaces : 1;
    unsigned long _encoding;
    PlainTextDocument *_inputDocument;
    NSMutableString *_lineString;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned long)arg2;

- (unsigned int)_findLineBreakInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 maxCharWidthCount:(unsigned int)arg2 endIsURL:(BOOL)arg3;
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withQuoteLevel:(unsigned int)arg3;
- (BOOL)addedTrailingSpaces;
- (void)dealloc;
- (id)outputString;
- (id)quotedString;

@end

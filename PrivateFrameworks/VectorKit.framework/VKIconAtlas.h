/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, VKPIconPack, VGLIcon, NSMapTable;

@interface VKIconAtlas : NSObject {
    NSMapTable *_atlasToImages;
    VGLIcon *_defaultIcon;
    NSMutableDictionary *_iconDict;
    VKPIconPack *_iconPack;
    NSMapTable *_keysToAsyncHandlers;
}

- (struct CGImage { }*)createImageForName:(id)arg1;
- (void)dealloc;
- (void)getIconForName:(id)arg1 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct _VGLColor { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; }*)arg2 asynchronous:(BOOL)arg3 handler:(id)arg4;
- (id)initWithIconPack:(id)arg1;
- (void)purge;

@end

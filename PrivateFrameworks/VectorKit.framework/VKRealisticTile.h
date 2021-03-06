/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnimation, NSArray, VGLMesh, NSMapTable, NSMutableArray, VKRealisticPolygonMaker, NSMutableDictionary, VGLTexture;

@interface VKRealisticTile : VKVectorTile {
    struct vector<_VKRealisticPolygonMetaData, vk_allocator<_VKRealisticPolygonMetaData> > { 
        struct _VKRealisticPolygonMetaData {} *__begin_; 
        struct _VKRealisticPolygonMetaData {} *__end_; 
        struct __compressed_pair<_VKRealisticPolygonMetaData *, vk_allocator<_VKRealisticPolygonMetaData> > { 
            struct _VKRealisticPolygonMetaData {} *__first_; 
        } __end_cap_; 
    VGLMesh *_coastlineMesh;
    VGLTexture *_defaultLandTexture;
    NSMutableArray *_landMeshes;
    VKRealisticPolygonMaker *_landPolygonMaker;
    float _landZ;
    float _laneMarkingZ;
    NSMutableDictionary *_meshDict;
    } _polygonMetaData;
    NSMutableArray *_realisticRoadGroups;
    NSMapTable *_realisticRoadGroupsTable;
    float _roadZ;
    VKAnimation *_startDrawingAnimation;
    NSMutableArray *_waterMeshes;
    VKRealisticPolygonMaker *_waterPolygonMaker;
    float _waterZ;
}

@property(readonly) VGLMesh * coastlineMesh;
@property(readonly) VGLTexture * defaultLandTexture;
@property(readonly) NSArray * landMeshes;
@property(readonly) float landZ;
@property(readonly) float laneMarkingZ;
@property(readonly) NSArray * realisticRoadGroups;
@property(readonly) float roadZ;
@property(retain) VKAnimation * startDrawingAnimation;
@property(readonly) NSArray * waterMeshes;
@property(readonly) float waterZ;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addCoastlineMeshForPoints:(const struct { float x1; float x2; }*)arg1 pointCount:(unsigned int)arg2;
- (id)_createDefaultTextureForLevelOfDetail:(unsigned int)arg1;
- (id)_groupForRenderZ:(int)arg1;
- (id)_meshForStyle:(id)arg1 tileKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })arg2;
- (void)_parseCoastlines;
- (void)_parsePolygons;
- (id)coastlineMesh;
- (void)dealloc;
- (id)defaultLandTexture;
- (unsigned int)geometryCount;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)landMeshes;
- (float)landZ;
- (float)laneMarkingZ;
- (id)realisticRoadGroups;
- (float)roadZ;
- (void)setStartDrawingAnimation:(id)arg1;
- (id)startDrawingAnimation;
- (void)updateComponentsWithContext:(id)arg1;
- (id)waterMeshes;
- (float)waterZ;

@end

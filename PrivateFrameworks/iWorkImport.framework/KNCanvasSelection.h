/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, TSUPointerKeyDictionary;

@interface KNCanvasSelection : TSDCanvasSelection {
    NSSet *mBuildChunks;
    TSUPointerKeyDictionary *mDrawableToSelectedActionGhostIndexesMap;
}

@property(readonly) NSSet * buildChunks;
@property(readonly) NSSet * unlockedDrawableInfos;

+ (Class)archivedSelectionClass;

- (id)buildChunks;
- (BOOL)containsBuildChunksOfAnimationType:(int)arg1;
- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsOnlyUnlockedInfosSupportingHyperlinkActions;
- (id)copyExcludingBuildChunks:(id)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::IndexSet> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithDrawable:(id)arg1 actionGhostIndexPromise:(id)arg2;
- (id)initWithDrawableToActionGhostIndexPromiseMap:(id)arg1;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 buildChunks:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)p_actionGhostSelectionIndexesForDrawable:(id)arg1;
- (id)p_actionGhostSelectionInfosForDrawable:(id)arg1;
- (id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1;
- (id)p_indexesOfGhostInfos:(id)arg1 inActionSequenceForDrawable:(id)arg2;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::IndexSet> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1 archiver:(id)arg2;
- (id)unlockedDrawableInfos;
- (id)unlockedInfos;
- (id)unlockedInfosSupportingHyperlinkActions;

@end

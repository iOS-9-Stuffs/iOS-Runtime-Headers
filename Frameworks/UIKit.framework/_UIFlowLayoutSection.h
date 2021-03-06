/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutSection : NSObject {
    float _actualGap;
    float _beginMargin;
    float _endMargin;
    BOOL _fixedItemSize;
    float _footerDimension;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _footerFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    float _headerDimension;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _headerFrame;
    float _horizontalInterstice;
    int _indexOfIncompleteRow;
    NSMutableSet *_invalidatedIndexPaths;
    BOOL _isValid;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    NSMutableArray *_items;
    int _itemsByRowCount;
    int _itemsCount;
    float _lastRowActualGap;
    float _lastRowBeginMargin;
    float _lastRowEndMargin;
    BOOL _lastRowIncomplete;
    _UIFlowLayoutInfo *_layoutInfo;
    float _otherMargin;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rectToKeepValid;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    } _rowAlignmentOptions;
    NSMutableArray *_rows;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _sectionMargins;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _validItemRange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _validRect;
    float _verticalInterstice;
}

@property (nonatomic, readonly) float actualGap;
@property (nonatomic, readonly) float beginMargin;
@property (nonatomic, readonly) float endMargin;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic, readonly) float footerDimension;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } footerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) float headerDimension;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } headerFrame;
@property (nonatomic) float horizontalInterstice;
@property (nonatomic, readonly) int indexOfIncompleteRow;
@property (nonatomic, readonly) NSArray *invalidatedIndexPaths;
@property (nonatomic) struct CGSize { float x1; float x2; } itemSize;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) int itemsByRowCount;
@property (nonatomic) int itemsCount;
@property (nonatomic, readonly) float lastRowActualGap;
@property (nonatomic, readonly) float lastRowBeginMargin;
@property (nonatomic, readonly) float lastRowEndMargin;
@property (nonatomic, readonly) BOOL lastRowIncomplete;
@property (nonatomic) _UIFlowLayoutInfo *layoutInfo;
@property (nonatomic, readonly) float otherMargin;
@property (nonatomic) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property (nonatomic, readonly) NSMutableArray *rows;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionMargins;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } validItemRange;
@property (nonatomic) float verticalInterstice;

- (void).cxx_destruct;
- (float)actualGap;
- (void)addInvalidatedIndexPath:(id)arg1;
- (id)addItem;
- (id)addRowAtEnd:(BOOL)arg1;
- (float)beginMargin;
- (void)computeLayout;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(int)arg2 invalidating:(BOOL)arg3;
- (id)copyFromLayoutInfo:(id)arg1;
- (float)endMargin;
- (int)estimatedIndexOfItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)fixedItemSize;
- (float)footerDimension;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })footerFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (float)headerDimension;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })headerFrame;
- (float)horizontalInterstice;
- (int)indexOfIncompleteRow;
- (id)init;
- (void)invalidate;
- (id)invalidatedIndexPaths;
- (struct CGSize { float x1; float x2; })itemSize;
- (id)items;
- (int)itemsByRowCount;
- (int)itemsCount;
- (float)lastRowActualGap;
- (float)lastRowBeginMargin;
- (float)lastRowEndMargin;
- (BOOL)lastRowIncomplete;
- (id)layoutInfo;
- (void)logInvalidSizes;
- (void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2;
- (float)otherMargin;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)rows;
- (id)rowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionMargins;
- (void)setEstimatedSize:(struct CGSize { float x1; float x2; })arg1 forSection:(int)arg2;
- (void)setFixedItemSize:(BOOL)arg1;
- (void)setFooterDimension:(float)arg1 forSection:(int)arg2;
- (void)setFooterFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeaderDimension:(float)arg1 forSection:(int)arg2;
- (void)setHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHorizontalInterstice:(float)arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemsCount:(int)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (void)setSectionMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 forItemAtIndexPath:(id)arg2;
- (void)setVerticalInterstice:(float)arg1;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (id)snapshot;
- (void)updateEstimatedSizeForSection:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })validItemRange;
- (float)verticalInterstice;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotoView, PUPhotosZoomingSharingGridCell, UIView;

@interface PUPhotosSharingGridCell : UICollectionViewCell {
    UIView *_highlightOverlayView;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastZoomPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _originalZoomPoint;
    PUPhotoView *_photoView;
    PUPhotosZoomingSharingGridCell *_zoomingCell;
    UIView *_zoomingCellSuperview;
}

@property(readonly) PUPhotoView * photoView;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photoView;
- (void)setHighlighted:(BOOL)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarRatingView : UIView {
    UIImage *_emptyStarHighlightedImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_fullStarImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_halfStarImage;
    BOOL _highlighted;
    int _numLevels;
    int _numReviews;
    float _padding;
    float _rating;
    NSMutableArray *_ratingViews;
    int _starStyle;
}

@property (nonatomic, retain) UIImage *emptyStarHighlightedImage;
@property (nonatomic, retain) UIImage *emptyStarImage;
@property (nonatomic, retain) UIImage *fullStarHighlightedImage;
@property (nonatomic, retain) UIImage *fullStarImage;
@property (nonatomic, retain) UIImage *halfStarHighlightedImage;
@property (nonatomic, retain) UIImage *halfStarImage;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) int numberOfRatingLevels;
@property (nonatomic) float rating;
@property (nonatomic) int starStyle;

- (void).cxx_destruct;
- (void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)commonInit;
- (void)didMoveToWindow;
- (id)emptyStarHighlightedImage;
- (id)emptyStarImage;
- (id)fullStarHighlightedImage;
- (id)fullStarImage;
- (id)halfStarHighlightedImage;
- (id)halfStarImage;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (int)numberOfRatingLevels;
- (float)rating;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (void)setEmptyStarImage:(id)arg1;
- (void)setFullStarHighlightedImage:(id)arg1;
- (void)setFullStarImage:(id)arg1;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (void)setHalfStarImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNumberOfRatingLevels:(int)arg1;
- (void)setPadding:(float)arg1;
- (void)setRating:(float)arg1;
- (void)setStarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)starStyle;
- (float)verticalAlignmentCenterPercentage;

@end

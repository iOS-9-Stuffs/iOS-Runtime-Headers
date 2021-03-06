/* Generated by RuntimeBrowser.
 */

@protocol TKVibrationPickerStyleProvider <NSObject>

@required

- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
- (UIColor *)vibrationPickerCellBackgroundColor;
- (UIColor *)vibrationPickerCellHighlightedTextColor;
- (UIColor *)vibrationPickerCellTextColor;
- (UIFont *)vibrationPickerCellTextFont;
- (UIColor *)vibrationPickerHeaderTextColor;
- (UIFont *)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationPickerHeaderTextPaddingInsets;
- (UIColor *)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })vibrationPickerHeaderTextShadowOffset;
- (int)vibrationPickerTableViewSeparatorStyle;
- (BOOL)vibrationPickerUsesOpaqueBackground;
- (BOOL)wantsCustomVibrationPickerHeaderView;

@optional

- (int)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
- (UIColor *)vibrationPickerCustomTableSeparatorColor;
- (BOOL)vibrationPickerHeaderTextShouldBeUppercase;

@end

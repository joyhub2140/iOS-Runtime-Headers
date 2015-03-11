/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, UIImage, UIImageView, UILabel;

@interface RUStationSettingsLikeBanTableViewCell : RUTableViewCell {
    NSString *_album;
    UILabel *_albumLabel;
    float _albumMinXRatioWithContentWidth;
    NSString *_artist;
    UILabel *_artistLabel;
    float _artistMinXRatioWithContentWidth;
    UIImageView *_artworkImageView;
    float _artworkMinX;
    UILabel *_titleLabel;
}

@property(copy) NSString * album;
@property float albumMinXRatioWithContentWidth;
@property(copy) NSString * artist;
@property float artistMinXRatioWithContentWidth;
@property(retain) UIImage * artworkImage;
@property float artworkMinX;
@property(copy) NSString * title;

+ (id)_textLabelFontWithEmphasis:(BOOL)arg1;
+ (struct CGSize { float x1; float x2; })artworkSize;
+ (float)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_updateAlbumLabel;
- (void)_updateArtistLabel;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateViewForTraitCollectionChange;
- (id)album;
- (float)albumMinXRatioWithContentWidth;
- (id)artist;
- (float)artistMinXRatioWithContentWidth;
- (id)artworkImage;
- (float)artworkMinX;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAlbum:(id)arg1;
- (void)setAlbumMinXRatioWithContentWidth:(float)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistMinXRatioWithContentWidth:(float)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkMinX:(float)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
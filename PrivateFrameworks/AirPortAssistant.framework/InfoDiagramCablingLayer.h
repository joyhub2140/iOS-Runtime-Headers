/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <InfoDiagramCablingAnchorDelegate>, CAGradientLayer, CAShapeLayer;

@interface InfoDiagramCablingLayer : CALayer {
    CAShapeLayer *broadbandToWANInnerLineLayer;
    CAShapeLayer *broadbandToWANOuterLineLayer;
    <InfoDiagramCablingAnchorDelegate> *diagramAnchorPointDelegate;
    CAGradientLayer *internetGradientLayer;
    CAShapeLayer *internetInnerLineLayer;
    CAShapeLayer *internetOuterLineLayer;
    BOOL isCompactWidth;
    CAShapeLayer *swapArcArrowLayer;
    CAShapeLayer *swapArcLineLayer;
    BOOL swapCabling;
}

@property(retain) CAShapeLayer * broadbandToWANInnerLineLayer;
@property(retain) CAShapeLayer * broadbandToWANOuterLineLayer;
@property <InfoDiagramCablingAnchorDelegate> * diagramAnchorPointDelegate;
@property(retain) CAGradientLayer * internetGradientLayer;
@property(retain) CAShapeLayer * internetInnerLineLayer;
@property(retain) CAShapeLayer * internetOuterLineLayer;
@property BOOL isCompactWidth;
@property(retain) CAShapeLayer * swapArcArrowLayer;
@property(retain) CAShapeLayer * swapArcLineLayer;
@property BOOL swapCabling;

- (id)broadbandToWANInnerLineLayer;
- (id)broadbandToWANOuterLineLayer;
- (void)commonInit;
- (void)createPathForSublayer:(id)arg1;
- (void)dealloc;
- (id)diagramAnchorPointDelegate;
- (id)initNoWANLinkFirstFrame;
- (id)initNoWANLinkLastFrame;
- (id)internetGradientLayer;
- (id)internetInnerLineLayer;
- (id)internetOuterLineLayer;
- (BOOL)isCompactWidth;
- (void)layoutSublayers;
- (void)setBroadbandToWANInnerLineLayer:(id)arg1;
- (void)setBroadbandToWANOuterLineLayer:(id)arg1;
- (void)setDiagramAnchorPointDelegate:(id)arg1;
- (void)setInternetGradientLayer:(id)arg1;
- (void)setInternetInnerLineLayer:(id)arg1;
- (void)setInternetOuterLineLayer:(id)arg1;
- (void)setIsCompactWidth:(BOOL)arg1;
- (void)setSwapArcArrowLayer:(id)arg1;
- (void)setSwapArcLineLayer:(id)arg1;
- (void)setSwapCabling:(BOOL)arg1;
- (id)swapArcArrowLayer;
- (id)swapArcLineLayer;
- (BOOL)swapCabling;

@end

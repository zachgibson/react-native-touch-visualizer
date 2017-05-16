#import <React/RCTBridgeModule.h>
#include <UIKit/UIKit.h>

@protocol TouchVisualizerDelegate;

@interface TouchVisualizer : UIWindow <RCTBridgeModule>

@property (nonatomic, weak) id<TouchVisualizerDelegate> touchVisualizerWindowDelegate;

// Touch effects
@property (nonatomic) UIImage *touchImage;
@property (nonatomic) CGFloat touchAlpha;
@property (nonatomic) NSTimeInterval fadeDuration;
@property (nonatomic) UIColor *strokeColor;
@property (nonatomic) UIColor *fillColor;

// Ripple Effects
@property (nonatomic) UIImage *rippleImage;
@property (nonatomic) CGFloat rippleAlpha;
@property (nonatomic) NSTimeInterval rippleFadeDuration;
@property (nonatomic) UIColor *rippleStrokeColor;
@property (nonatomic) UIColor *rippleFillColor;

@end

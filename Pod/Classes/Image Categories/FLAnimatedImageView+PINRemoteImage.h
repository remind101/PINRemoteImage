//
//  FLAnimatedImageView+PINRemoteImage.h
//  Pods
//
//  Created by Garrett Moon on 8/17/14.
//
//

#import "PINRemoteImageMacros.h"
#if USE_FLANIMATED_IMAGE
@import FLAnimatedImage;

#import "PINRemoteImageCategoryManager.h"

@interface FLAnimatedImageView (PINRemoteImage) <PINRemoteImageCategory>

@end

#endif

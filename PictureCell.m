//
//  PictureCell.m
//  TripGo
//
//  Created by Jayson Ng on 5/4/14.
//  Copyright (c) 2014 Y. Liu. All rights reserved.
//

#import "PictureCell.h"

@implementation PictureCell

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void) setPhoto:(UIImage *)photo
{
    if(_photo != photo)
    {
        _photo = photo;
    }
    self.image.image = photo;
}


/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

@end

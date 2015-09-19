//
//  ViewController.h
//  FWMeituApp
//
//  Created by ForrestWoo on 15-9-16.
//  Copyright (c) 2015年 ForrestWoo co,.ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FWFucView.h"
#import "FWBeautyViewController.h"

@interface ViewController : UIViewController <UIScrollViewDelegate, FWImageProcessFucDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIButton *btnArrow;
    FWBeautyViewController *beautyVC;
    UIImagePickerController *imagePicker;
    UIImage *currentImage;
}

@property (nonatomic ,strong) UIScrollView *scrolleView;
@property (nonatomic, strong) UIPageControl *pageControl;

@end


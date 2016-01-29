//
//  ViewController.h
//  CameraApplication
//
//  Created by Jason Williams on 2016-01-29.
//  Copyright © 2016 Screaming Goat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    
    UIImagePickerController *picker;
    UIImage  *image;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePhoto:(id)sender;
- (IBAction)choosePhoto:(id)sender;
@end


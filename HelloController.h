//
//  HelloController.h
//  HelloWorld
//
//  Created by Amitai Blickstein on 10/19/15.
//
//

#import <UIKit/UIKit.h>

@interface HelloController : UIViewController

@property (nonatomic, strong) UIColor *bgcolor;

-(void)getInfo;
-(void)update:(UISlider *)aSlider;

@end

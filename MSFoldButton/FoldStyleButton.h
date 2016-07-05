//
//  FoldStyleButton.h
//  MSFoldButton
//
//  Created by mrscorpion on 16/6/29.
//

#import <UIKit/UIKit.h>
typedef void(^buttonClickBlock)(UIButton*button);

@interface FoldStyleButton : UIView
@property (strong, nonatomic)NSMutableArray *otherButtons;
@property (strong, nonatomic) UIButton*mainButton;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString*selectBGImage;
@property (strong, nonatomic) NSArray<NSString*>*otherButtonsBGimages_Array;
@property (assign, nonatomic) CGFloat SpaceDistance;
@property (copy, nonatomic) buttonClickBlock ButtonClickBlock;

- (instancetype)initWithFrame:(CGRect)frame mainButtonBGImage:(NSString*)imag selectBGImage:(NSString*)selectBGImageStr otherButtonsBGimages:(NSArray<NSString*>*)otherButtonsBGimages;
@end

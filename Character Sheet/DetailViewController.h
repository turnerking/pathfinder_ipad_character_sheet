//
//  DetailViewController.h
//  Character Sheet
//
//  Created by Turner King on 4/26/11.
//  Copyright 2011 Obtiva Corp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    UIButton *rollButton;
  NSArray *strCollection;
}


@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) id detailItem;

@property (nonatomic, retain) IBOutlet UILabel *detailDescriptionLabel;
@property(nonatomic, retain) IBOutlet UIButton *rollButton;
@property(nonatomic, retain) IBOutlet UILabel *rollLabel;
@property(nonatomic, retain) IBOutlet UITextField *strTextField;
@property(nonatomic, retain) IBOutlet UILabel *strModifierLabel;
@property(nonatomic, retain) IBOutlet UILabel *dexModifierLabel;
@property(nonatomic, retain) IBOutlet UILabel *conModifierLabel;
@property(nonatomic, retain) IBOutlet UILabel *intModifierLabel;
@property(nonatomic, retain) IBOutlet UILabel *wisModifierLabel;
@property(nonatomic, retain) IBOutlet UILabel *chaModifierLabel;
@property (nonatomic, retain) IBOutletCollection(UIView) NSArray *strCollection;

- (IBAction)roll:(id)sender;
- (IBAction)updateStrength:(id)sender;
- (IBAction)updateModifier:(UILabel*)labelToUpdate withTextField:(UITextField*)changedField;
- (int)rollDie:(int)numberOfSides;

@end

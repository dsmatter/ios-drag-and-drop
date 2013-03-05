//
//  DNDStackViewSampleViewController.h
//  iOS Sample Application
//
//  Created by Markus Gasser on 3/5/13.
//  Copyright (c) 2013 Team RG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DragAndDrop/DragAndDrop.h>


@class DNDStackSampleView;


@interface DNDStackViewSampleViewController : UIViewController

@property (nonatomic, weak) IBOutlet DNDStackSampleView *leftStackView;
@property (nonatomic, weak) IBOutlet DNDStackSampleView *rightStackView;

@end
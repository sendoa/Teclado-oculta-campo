//
//  FormularioViewController.h
//  KB oculta campo
//
//  Created by Sendoa Portuondo on 01/03/12.
//  Copyright (c) 2012 Qbikode Solutions, S.L. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FormularioViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) UITextField *campoActivo;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UITextField *txtDato1;
@property (strong, nonatomic) IBOutlet UITextField *txtDato2;
@property (strong, nonatomic) IBOutlet UITextField *txtDato3;
@property (strong, nonatomic) IBOutlet UITextField *txtDato4;
@end

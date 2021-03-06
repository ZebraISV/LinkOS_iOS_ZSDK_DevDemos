/********************************************** 
 * CONFIDENTIAL AND PROPRIETARY 
 *
 * The source code and other information contained herein is the confidential and the exclusive property of
 * ZIH Corp. and is subject to the terms and conditions in your end user license agreement.
 * This source code, and any other information contained herein, shall not be copied, reproduced, published, 
 * displayed or distributed, in whole or in part, in any medium, by any means, for any purpose except as
 * expressly permitted under such license agreement.
 * 
 * Copyright ZIH Corp. 2012
 *
 * ALL RIGHTS RESERVED 
 ***********************************************/

#import <UIKit/UIKit.h>
#import "ZebraPrinter.h"

@interface StoredPrinterFormatsViewController : UITableViewController

@property (nonatomic, retain) NSArray *printerFormats;
@property (nonatomic, retain) NSArray *variables;
@property (nonatomic, retain) UIActivityIndicatorView *loadingSpinner;
@property (nonatomic, retain) id<ZebraPrinter,NSObject> printer;

-(id)initWithFormats:(NSArray*)formats andWithPrinter:(id<ZebraPrinter,NSObject>) aPrinter;

@end

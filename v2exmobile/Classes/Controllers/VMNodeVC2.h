//
//  VMNodeVC2.h
//  v2exmobile
//
//  Created by 徐 可 on 3/11/12.
//  Copyright (c) 2012 TVie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VMNodeVC2 : UITableViewController
{
    NSArray *_nodes;
}

- (id)initWithNodes:(NSArray *)nodes inCategory:(NSString *)title;
@end
/*
 * Copyright 2017 appscape gmbh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <UIKit/UIKit.h>

#import "RMBTQoSTestGroup.h"

@interface RMBTQoSProgressCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel *descriptionLabel;
@property (nonatomic, weak) IBOutlet UIProgressView *progressView;
@end

@interface RMBTQoSProgressViewController : UITableViewController
@property (nonatomic, strong) NSArray<RMBTQoSTestGroup*> *testGroups;
- (void)updateProgress:(float)progress forGroup:(RMBTQoSTestGroup*)group;
@end
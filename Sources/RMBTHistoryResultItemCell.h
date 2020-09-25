/*
 * Copyright 2013 appscape gmbh
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

extern NSString * const RMBTTrafficLightTappedNotification;

@class RMBTHistoryResultItem, RMBTHistoryQOEResultItem;

@interface RMBTHistoryResultItemCell : UITableViewCell

-(void)setItem:(RMBTHistoryResultItem*)item;
-(void)setQOEItem:(RMBTHistoryQOEResultItem*)item;

-(void)setEmbedded:(BOOL)embedded; // Set to YES when displayed in map annotation

// Toggles rotation of the system UIButton behind accessoryType. Used to make expand/collapse effect on
// disclosure indicator
- (void)setAccessoryRotated:(BOOL)state;

// Toggles whether tapping the traffic light emits RMBTTrafficLightTappedNotification
- (void)setTrafficLightInteractionEnabled:(BOOL)state;

@end

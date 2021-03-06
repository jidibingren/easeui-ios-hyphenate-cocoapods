/************************************************************
 *  * Hyphenate CONFIDENTIAL
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Inc.
 */

#ifndef EaseUI_h
#define EaseUI_h

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE

#import "EaseConversationListViewController.h"
#import "EaseMessageViewController.h"
#import "EaseUsersListViewController.h"
#import "EaseViewController.h"

#import "IModelCell.h"
#import "IModelChatCell.h"
#import "EaseMessageCell.h"
#import "EaseBaseMessageCell.h"
#import "EaseBubbleView.h"
#import "EaseUserCell.h"

#import "EaseChineseToPinyin.h"
#import "EaseEmoji.h"
#import "EaseEmotionEscape.h"
#import "EaseEmotionManager.h"
#import "EaseSDKHelper.h"
#import "EMCDDeviceManager.h"
#import "EaseConvertToCommonEmoticonsHelper.h"

#import "NSDate+Category.h"
#import "NSString+Valid.h"
#import "UIImageView+WebCache.h"
#import "UIViewController+HUD.h"
#import "UIViewController+DismissKeyboard.h"
#import "EaseLocalDefine.h"

#else

#import <EaseUI/EaseConversationListViewController.h>
#import <EaseUI/EaseMessageViewController.h>
#import <EaseUI/EaseUsersListViewController.h>
#import <EaseUI/EaseViewController.h>

#import <EaseUI/IModelCell.h>
#import <EaseUI/IModelChatCell.h>
#import <EaseUI/EaseMessageCell.h>
#import <EaseUI/EaseBaseMessageCell.h>
#import <EaseUI/EaseBubbleView.h>
#import <EaseUI/EaseUserCell.h>

#import <EaseUI/EaseChineseToPinyin.h>
#import <EaseUI/EaseEmoji.h>
#import <EaseUI/EaseEmotionEscape.h>
#import <EaseUI/EaseEmotionManager.h>
#import <EaseUI/EaseSDKHelper.h>
#import <EaseUI/EMCDDeviceManager.h>
#import <EaseUI/EaseConvertToCommonEmoticonsHelper.h>

#import <EaseUI/NSDate+Category.h>
#import <EaseUI/NSString+Valid.h>
#import <EaseUI/UIImageView+WebCache.h>
#import <EaseUI/UIViewController+HUD.h>
#import <EaseUI/UIViewController+DismissKeyboard.h>
#import <EaseUI/EaseLocalDefine.h>

#endif


#endif /* EaseUI_h */


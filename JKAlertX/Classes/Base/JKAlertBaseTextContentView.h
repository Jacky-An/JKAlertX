//
//  JKAlertBaseTextContentView.h
//  JKAlertX
//
//  Created by albert on 2020/5/28.
//

#import "JKAlertBaseView.h"

@class JKAlertTextView;

@interface JKAlertBaseTextContentView : JKAlertBaseView

/** titleTextView */
@property (nonatomic, weak, readonly) JKAlertTextView *titleTextView;

/** messageTextView */
@property (nonatomic, weak, readonly) JKAlertTextView *messageTextView;

/** <#注释#> */
@property (nonatomic, weak) UIView *titleMessageSeparatorLineView;


/** contentWidth */
@property (nonatomic, assign) CGFloat contentWidth;

/** titleInsets */
@property (nonatomic, assign) UIEdgeInsets titleInsets;

/** messageInsets */
@property (nonatomic, assign) UIEdgeInsets messageInsets;

/** titleMessageSeparatorLineInsets */
@property (nonatomic, assign) UIEdgeInsets titleMessageSeparatorLineInsets;


/** customContentView */
@property (nonatomic, weak) UIView *customContentView;

/** customTitleView */
@property (nonatomic, weak) UIView *customTitleView;

/** customMessageView */
@property (nonatomic, weak) UIView *customMessageView;


/** titleTextColor */
@property (nonatomic, strong) UIColor *titleTextColor;

/** messageTextColor */
@property (nonatomic, strong) UIColor *messageTextColor;

/** titleFont */
@property (nonatomic, strong) UIFont *titleFont;

/** messageFont */
@property (nonatomic, strong) UIFont *messageFont;


/** 标题 */
@property (nonatomic, copy) NSString *alertTitle;

/** 富文本标题 */
@property (nonatomic, copy) NSAttributedString *alertAttributedTitle;

/** 提示信息 */
@property (nonatomic, copy) NSString *alertMessage;

/** 富文本提示信息 */
@property (nonatomic, copy) NSAttributedString *attributedMessage;


/** title和message是否可以响应事件，默认YES 如无必要不建议设置为NO */
@property (nonatomic, assign) BOOL textViewUserInteractionEnabled;

/** title和message是否可以选择文字，默认NO */
@property (nonatomic, assign) BOOL textViewShouldSelectText;


/** titleTextViewDelegate */
@property (nonatomic, weak) id<UITextViewDelegate> titleTextViewDelegate;

/** messageTextViewDelegate */
@property (nonatomic, weak) id<UITextViewDelegate> messageTextViewDelegate;


/** titleTextViewAlignment 默认NSTextAlignmentCenter */
@property (nonatomic, assign) NSTextAlignment titleTextViewAlignment;

/** messageTextViewAlignment 默认NSTextAlignmentCenter */
@property (nonatomic, assign) NSTextAlignment messageTextViewAlignment;

/** title和message的左右间距 默认20 */
//@property (nonatomic, assign) CGFloat textViewLeftRightMargin;



@end

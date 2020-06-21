//
//  JKAlertView+PrivateProperty.h
//  JKAlertX
//
//  Created by albert on 2020/5/20.
//

#import "JKAlertView.h"
#import "JKAlertPanGestureRecognizer.h"
#import "JKAlertActionButton.h"
#import "JKAlertTextView.h"
#import "JKAlertBaseTextContentView.h"
#import "JKAlertPlainContentView.h"
#import "JKAlertHUDContentView.h"
#import "JKAlerActionSheetContentView.h"
#import "JKAlertCollectionSheetContentView.h"

@interface JKAlertView () <UIGestureRecognizerDelegate>



{
    //CGFloat TBMargin;
    CGFloat textContainerViewCurrentMaxH_;
    
    //CGFloat JKAlertTitleMessageMargin;
    
    CGFloat JKAlertSheetMaxH;
    
    /** 分隔线宽度或高度 */
    CGFloat JKAlertSeparatorLineWH;
    
    CGFloat PlainViewWidth;
    CGFloat OriginalPlainWidth;
    
    UIView  *_alertBackGroundView;
    
    
    BOOL ObserverAdded;
    
    BOOL SheetMaxHeightSetted;
    
    CGFloat GestureIndicatorHeight;
    
    CGFloat correctContainerY;
    CGFloat lastContainerY;
    CGFloat currentContainerY;
    
    CGFloat lastContainerX;
    CGFloat currentContainerX;
    
    JKAlertScrollDirection beginScrollDirection;
    JKAlertScrollDirection endScrollDirection;
    
    BOOL disableScrollToDismiss;
    
    BOOL isBeginDragging;
    BOOL isDragging;
    
    //CGFloat lastTableViewOffsetY;
    
    BOOL isSheetDismissHorizontal;
}

/** plainContentView */
@property (nonatomic, weak) JKAlertPlainContentView *plainContentView;

/** hudContentView */
@property (nonatomic, weak) JKAlertHUDContentView *hudContentView;

/** actionsheetContentView */
@property (nonatomic, weak) JKAlerActionSheetContentView *actionsheetContentView;

/** actionsheetContentView */
@property (nonatomic, weak) JKAlertCollectionSheetContentView *collectionsheetContentView;

/** alertContentView */
@property (nonatomic, weak, readonly) UIView *alertContentView;

/** currentAlertContentView */
@property (nonatomic, weak, readonly) JKAlertBaseAlertContentView *currentAlertContentView;

/** currentAlertContentView */
@property (nonatomic, weak, readonly) JKAlertBaseTextContentView *currentTextContentView;

/** deallocLogEnabled */
@property (nonatomic, assign) BOOL deallocLogEnabled;


/** observerSuperView */
@property (nonatomic, weak) UIView *observerSuperView;

/** sheetContainerView */
@property (nonatomic, weak) UIView *sheetContainerView;

/** isClearTextContainerBackground */
@property (nonatomic, assign) BOOL isClearTextContainerBackground;

/** actions */
@property (nonatomic, strong) NSMutableArray *actions;

/** actions2 */
@property (nonatomic, strong) NSMutableArray *actions2;

/** 样式 */
@property (nonatomic, assign) JKAlertStyle alertStyle;

/** 标题 */
@property (nonatomic, copy) NSString *alertTitle;

/** 富文本标题 */
@property (nonatomic, copy) NSAttributedString *alertAttributedTitle;

/** 提示信息 */
@property (nonatomic, copy) NSString *alertMessage;

/** 富文本提示信息 */
@property (nonatomic, copy) NSAttributedString *attributedMessage;

/** closeButton */
@property (nonatomic, weak) UIButton *closeButton;

/** 监听点击空白处的block */
@property (nonatomic, copy) void (^blankClickBlock)(void);

/** customHUD */
@property (nonatomic, weak) UIView *customHUD;

/** 即将显示动画的回调 */
@property (nonatomic, copy) void (^willShowHandler)(JKAlertView *view);

/** 显示动画完成的回调 */
@property (nonatomic, copy) void (^didShowHandler)(JKAlertView *view);

/** 即将消失的回调 */
@property (nonatomic, copy) void (^willDismissHandler)(void);

/** 消失后的回调 */
@property (nonatomic, copy) void (^didDismissHandler)(void);

#pragma mark
#pragma mark - textField

/** 当前的textField */
@property (nonatomic, weak) UITextField *currentTextField;

/** textField数组 */
@property (nonatomic, strong) NSMutableArray *textFieldArr;

/**
 * 设置plain样式Y值
 */
@property (nonatomic, copy, readonly) JKAlertView *(^setPlainY)(CGFloat Y, BOOL animated);

/** 监听屏幕旋转 */
@property (nonatomic, copy) void (^orientationDidChangeHandler)(JKAlertView *view, UIInterfaceOrientation orientation);

/** 自定义展示动画 */
@property (nonatomic, copy) void (^customShowAnimationBlock)(JKAlertView *view, UIView *animationView);

/** 自定义消失动画 */
@property (nonatomic, copy) void (^customDismissAnimationBlock)(JKAlertView *view, UIView *animationView);

/** 监听重新布局完成 */
@property (nonatomic, copy) void (^relayoutComplete)(JKAlertView *view);

#pragma mark
#pragma mark - 外界可自定义属性 移至内部 外界全部改为使用链式语法修改 2018-09-28

/** dealloc时会调用的block */
@property (nonatomic, copy) void (^deallocHandler)(void);

/** 监听superView尺寸改变时将要自适应的block */
@property (nonatomic, copy) void (^willRelayoutHandler)(JKAlertView *view, UIView *containerView);

/** 监听superView尺寸改变时自适应完成的block */
@property (nonatomic, copy) void (^didRelayoutHandler)(JKAlertView *view, UIView *containerView);

/** 是否自动缩小plain样式的宽度以适应屏幕宽度 默认NO */
@property (nonatomic, assign) BOOL autoReducePlainWidth;

/**
 * plain和HUD样式centerY的偏移
 * 正数表示向下/右偏移，负数表示向上/左偏移
 */
@property (nonatomic, assign) CGPoint plainCenterOffset;

/**
 * collection的itemSize的宽度
 * 最大不可超过屏幕宽度的一半
 * 注意图片的宽高是设置的宽度-30，即图片在cell中是左右各15的间距
 * 自动计算item之间间距，最小为0，可自己计算该值设置每屏显示个数
 * 默认的高度是宽度-6，暂不支持自定义高度
 */
//@property (nonatomic, assign) CGFloat flowlayoutItemWidth;

/**
 * collection列数（每行数量）
 * 默认0，自动设置，不得大于自动设置的数量
 */
//@property (nonatomic, assign) NSInteger collectionColumnCount;

/**
 * 设置collection的水平（左右方向）的sectionInset
 * 默认0，为0时自动设置为item间距的一半
 */
//@property (nonatomic, assign) CGFloat collectionHorizontalInset;

/** collection的title下分隔线是否隐藏 */
//@property (nonatomic, assign) BOOL collectionTitleSeparatorHidden;

/**
 * 设置两个collectionView之间的间距
 * 有第二个collectionView时有效 默认0, 最小为0
 */
//@property (nonatomic, assign) CGFloat collectionViewMargin;

/**
 * 是否将两个collection合体
 * 设为YES可让两个collection同步滚动
 * 设置YES时会自动让两个collection的action数量保持一致，即向少的一方添加空的action
 */
//@property (nonatomic, assign) BOOL compoundCollection;

/** collection是否分页 */
//@property (nonatomic, assign) BOOL collectionPagingEnabled;

/**
 * collection是否显示pageControl
 * 如果只有一组collection，则必须设置分页为YES才有效
 * 如果有两组collection，则仅在分页和合体都为YES时才有效
 * 注意自己计算好每页显示的个数相等
 * 可以添加空的action来保证每页显示个数相等
 * JKAlertAction使用类方法初始化时每个参数传nil或者直接自己实例化一个即为空action
 */
//@property (nonatomic, assign) BOOL showPageControl;

/** colletion样式的底部按钮左右间距 */
@property (nonatomic, assign) CGFloat collectionButtonLeftRightMargin;

/**
 * 是否使JKAlertView.dismissAll(); 对当前JKAlertView无效
 * 请谨慎使用，若设置为YES 调用JKAlertView.dismissAll(); 将对当前JKAlertView无效
 */
@property (nonatomic, assign) BOOL isDismissAllNoneffective;

/** 用于通知消失的key */
@property (nonatomic, copy) NSString *dismissKey;

/** 用于通知消失的类别的key */
@property (nonatomic, copy) NSString *dismissCategory;

/** enableVerticalGestureDismiss */
@property (nonatomic, assign) BOOL enableVerticalGestureDismiss;

/** enableHorizontalGestureDismiss */
@property (nonatomic, assign) BOOL enableHorizontalGestureDismiss;

/** showGestureIndicator */
@property (nonatomic, assign) BOOL showGestureIndicator;

/** topGestureIndicatorView */
@property (nonatomic, weak) UIView *topGestureIndicatorView;

/** topGestureLineView */
@property (nonatomic, weak) UIView *topGestureLineView;

/** verticalDismissPanGesture */
@property (nonatomic, strong) JKAlertPanGestureRecognizer *verticalDismissPanGesture;

/** horizontalDismissPanGesture */
@property (nonatomic, strong) JKAlertPanGestureRecognizer *horizontalDismissPanGesture;

/** tableViewDataSource */
//@property (nonatomic, weak) id tableViewDataSource;
//
///** tableViewDelegate */
//@property (nonatomic, weak) id tableViewDelegate;

/** 是否固定取消按钮在底部 */
//@property (nonatomic, assign) BOOL pinCancelButton;

/** 是否自动适配键盘 */
@property (nonatomic, assign) BOOL autoAdaptKeyboard;

/** plain样式弹出键盘时与键盘的间距 竖屏 */
@property (nonatomic, assign) CGFloat plainKeyboardMargin;

/** show的时候是否振动 默认NO */
@property (nonatomic, assign) BOOL vibrateEnabled;

/** action sheet样式是否镂空 */
//@property (nonatomic, assign) BOOL isActionSheetPierced;
//
///** 镂空左右的间距 默认15 */
//@property (nonatomic, assign) CGFloat piercedHorizontalMargin;
//
///** 非X设备镂空底部取消按钮距离底部的间距 默认15 */
//@property (nonatomic, assign) CGFloat piercedBottomMargin;
//
///** 镂空整体圆角 */
//@property (nonatomic, assign) CGFloat piercedCornerRadius;
//
///** 镂空时背景色 */
//@property (nonatomic, strong) UIColor *piercedBackgroundColor;

- (void)addKeyboardWillChangeFrameNotification;

- (void)removeKeyboardWillChangeFrameNotification;

- (void)calculateUI;

- (void)setAlertViewToAction:(JKAlertAction *)action;
@end





@interface JKAlertView (PrivateProperty)

- (void)updateWidthHeight;

- (void)updateMaxHeight;

/// 不是plain样式将不执行handler
- (JKAlertView *)checkPlainStyleHandler:(void(^)(void))handler;

/// 不是HUD样式将不执行handler
- (JKAlertView *)checkHudStyleHandler:(void(^)(void))handler;

/// 不是collectionSheet样式将不执行handler
- (JKAlertView *)checkCollectionSheetStyleHandler:(void(^)(void))handler;

/// 不是actionSheet样式将不执行handler
- (JKAlertView *)checkActionSheetStyleHandler:(void(^)(void))handler;

/// 检查样式判断是否执行handler
- (JKAlertView *)checkAlertStyle:(JKAlertStyle)alertStyle
                         handler:(void(^)(void))handler;
@end
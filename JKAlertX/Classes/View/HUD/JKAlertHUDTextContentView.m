//
//  JKAlertHUDTextContentView.m
//  JKAlertX
//
//  Created by albertcc on 2020/5/31.
//

#import "JKAlertHUDTextContentView.h"

@implementation JKAlertHUDTextContentView

#pragma mark
#pragma mark - Public Methods

- (void)setAlertMessage:(NSString *)alertMessage {
    [super setAlertMessage:nil];
    
    if (!self.alertTitle) {
        
        [super setAlertTitle:alertMessage];
    }
}

- (void)setAttributedMessage:(NSAttributedString *)attributedMessage {
    [super setAttributedMessage:nil];
    
    if (!self.alertAttributedTitle) {
        
        [super setAlertAttributedTitle:attributedMessage];
    }
}

#pragma mark
#pragma mark - Override

- (void)dealloc {
    
    NSLog(@"[ClassName: %@], %d, %s", NSStringFromClass([self class]), __LINE__, __func__);
}

#pragma mark
#pragma mark - Private Methods

- (void)updateLightModetUI {
    [super updateLightModetUI];
    
    self.titleTextView.textView.textColor = self.titleTextColor.darkColor;
    self.messageTextView.textView.textColor = self.messageTextColor.darkColor;
    
    self.separatorLineView.backgroundColor = JKAlertGlobalSeparatorLineMultiColor().darkColor;
}

- (void)updateDarkModeUI {
    [super updateDarkModeUI];
    
    self.titleTextView.textView.textColor = self.titleTextColor.lightColor;
    self.messageTextView.textView.textColor = self.messageTextColor.lightColor;
    
    self.separatorLineView.backgroundColor = JKAlertGlobalSeparatorLineMultiColor().lightColor;
}

#pragma mark
#pragma mark - Private Selector



#pragma mark
#pragma mark - UITableViewDataSource & UITableViewDelegate



#pragma mark
#pragma mark - Custom Delegates



#pragma mark
#pragma mark - Initialization & Build UI

/** 初始化自身属性 */
- (void)initializeProperty {
    [super initializeProperty];
    
    self.titleInsets = UIEdgeInsetsMake(20, 20, 20, 20);
    
    self.titleFont = [UIFont systemFontOfSize:17];
    
    self.titleTextColor = [JKAlertMultiColor colorWithLightColor:JKAlertSameRGBColor(25.5) darkColor:JKAlertSameRGBColor(229.5)];
}

/** 构造函数初始化时调用 注意调用super */
- (void)initialization {
    [super initialization];
    
}

/** 创建UI */
- (void)createUI {
    [super createUI];
    
}

/** 布局UI */
- (void)layoutUI {
    [super layoutUI];
    
}

/** 初始化UI数据 */
- (void)initializeUIData {
    [super initializeUIData];
    
}

#pragma mark
#pragma mark - Private Property

- (NSString *)alertTitle {
    
    if (![super alertTitle]) {
        
        return self.alertMessage;
    }
    
    return [super alertTitle];
}

- (NSAttributedString *)alertAttributedTitle {
    
    if (![super alertAttributedTitle]) {
        
        return self.attributedMessage;
    }
    
    return [super alertAttributedTitle];
}
@end

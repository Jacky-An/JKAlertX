//
//  JKAlertPlainContentView.h
//  JKAlertX
//
//  Created by albert on 2020/5/29.
//

#import "JKAlertBaseAlertContentView.h"
#import "JKAlertPlainTextContentView.h"

@interface JKAlertPlainContentView : JKAlertBaseAlertContentView

/** textContentView */
@property (nonatomic, weak, readonly) JKAlertPlainTextContentView *textContentView;

/** 圆角 默认8 */
@property (nonatomic, assign) CGFloat cornerRadius;

/** textFieldArray */
@property (nonatomic, strong) NSMutableArray *textFieldArray;

/** textFieldContainerInset 默认(0, 20, 20, 20) */
@property (nonatomic, assign) UIEdgeInsets textFieldContainerInset;

/** textFieldContainerCornerRadius 默认8 */  // TODO: JKTODO <#注释#>
@property (nonatomic, assign) CGFloat textFieldContainerCornerRadius;

/** textFieldHeight 默认30 */
@property (nonatomic, assign) CGFloat textFieldHeight;

/** 是否自动弹出键盘 默认YES */
@property (nonatomic, assign) BOOL autoShowKeyboard;
@end
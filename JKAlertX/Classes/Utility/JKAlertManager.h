//
//  JKAlertManager.h
//  JKAlertX
//
//  Created by albert on 2020/7/30.
//

#import <Foundation/Foundation.h>

@class JKAlertView;

@interface JKAlertManager : NSObject

/**
 * 自定义alert(plain)样式
 * viewHandler : 在这里返回自定义alert的view
 * configurationBeforeShow : 在show之前配置一些内容
 */
+ (void)showCustomAlertWithViewHandler:(UIView *(^)(void))viewHandler
               configurationBeforeShow:(void(^)(JKAlertView *innerAlertView))configuration;

/**
 * 自定义sheet样式
 * viewHandler : 在这里返回自定义sheet的view
 * configurationBeforeShow : 在show之前配置一些内容
 */
+ (void)showCustomSheetWithViewHandler:(UIView *(^)(void))viewHandler
               configurationBeforeShow:(void(^)(JKAlertView *innerAlertView))configuration;
@end

//
//  AppDelegateAssembly.h
//  Arch_MVVM_RAC
//
//  Created by imaginedays on 2018/11/16.
//  Copyright © 2018 Robin Wong. All rights reserved.
//

#import "TyphoonAssembly.h"
@class LoginViewController,AppDelegate;
NS_ASSUME_NONNULL_BEGIN

@interface AppDelegateAssembly : TyphoonAssembly
- (LoginViewController *)createLoginViewController;
@end

NS_ASSUME_NONNULL_END

//
//  ModelsModel.h
//  Tigrone
//
//  Created by 张蒙蒙 on 16/1/12.
//  Copyright © 2016年 iOS Team. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ModelsModel : NSObject

//车的车型
@property (nonatomic, assign)BOOL isChina;      //是否国产
@property (nonatomic, strong)NSString *_id;
@property (nonatomic, strong)NSString *name;

@end

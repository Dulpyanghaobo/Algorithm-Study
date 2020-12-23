//
//  ViewController.m
//  findCommonSuperView
//
//  Created by yhb on 2020/12/23.
//

#import "ViewController.h"

@interface ViewController ()

@property (nonatomic, strong) NSMutableArray <UIView *> * viewArry;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)findCommonSuperView:(UIView *)view1 view2:(UIView *)view2 {
    NSArray *viewArray1 = [self findSuperView:view1];
    NSArray *viewArray2 = [self findSuperView:view2];
    int i = 0;
    while (i < MIN(viewArray1.count, viewArray2.count)) {
        UIView *superView1 = viewArray1[viewArray1.count - i - 1];
        UIView *superView2 = viewArray2[viewArray2.count - i - 1];
        if (superView1 == superView2) {
            [self.viewArry addObject:superView1];
        } else {
            break;
        }
    }
    NSLog(@"%@",self.viewArry);
}

- (NSArray <UIView *>* )findSuperView:(UIView *)view {
    UIView *temp = view.superview;
    NSMutableArray *resultArray = [NSMutableArray array];
    if (temp) {
        while (temp) {
            [resultArray addObject:temp];
            temp = temp.superview;
        }
    }
    return resultArray;
}
- (NSMutableArray<UIView *> *)viewArry {
    if (!_viewArry) {
        _viewArry = [NSMutableArray array];
    }
    return _viewArry;
}
@end

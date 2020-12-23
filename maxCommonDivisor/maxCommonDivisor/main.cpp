//
//  main.cpp
//  maxCommonDivisor
//
//  Created by yhb on 2020/12/23.
//  求最大公约数

#include <iostream>

//遍历
int maxCommonDivisor(int a,int b) {
    int max = 0;
    for (int i = 1; i <= b ; i++) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }
    }
    return max;
}

//相除法
int maxCommonDivisor2(int a, int b) {
    int r;
    while (a % b) {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main(int argc, const char * argv[]) {
    int max = maxCommonDivisor(10, 5);
    printf("%d",max);
    return 0;
}

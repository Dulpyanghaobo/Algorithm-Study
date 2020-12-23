//
//  main.cpp
//  ChangeAB
//
//  Created by yhb on 2020/12/23.
//  不使用中间变量交换AB的值

#include <iostream>
using namespace std;

//
//基于如下几个性质：
//
//任意变量x与自身异或结果为0，即：x^x = 0
//任意变量x与0进行异或运算，结果不变，即：x^0 = x
//异或运算的结合性：a^b^c = (a^b)^c = a^(b^c)
//异或运算的交换性：a^b = b^a

// 方法一
/// <#Description#>
/// @param A <#A description#>
/// @param B <#B description#>
void swap(int A,int B) {
    A = A + B;
    B = A - B;
    A = A - B;
}

//方法二
void swap2(int a,int b) {
    a = a ^ b;

    b = a ^ b;

    a = a ^ b;
}

int main(int argc, const char * argv[]) {
    swap2(3,2);
    return 0;
}

// 方法二
    

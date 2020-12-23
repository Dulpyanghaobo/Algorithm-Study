//
//  main.cpp
//  mockStack
//
//  Created by yhb on 2020/12/23.
//

#include <iostream>
class Stack {
//    目前存放的元素
    int count = 0;
//    栈的长度
    int len;
//    栈
    int *p = new int [len];
    
public:
    void push (int x) {
        assert(!full());
        p[count++] = x;
    }
    void pop (int x) {
        assert(!empty());
         x = p[--count];
    }
    bool full () {
        if (count > len) {
            return true;
        } else {
            return false;
        }
    }
    bool empty () {
        if (count == 0) {
            return true;
        } else {
            return false;
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

//
//  main.cpp
//  selectSort
//
//  Created by yhb on 2020/12/23.
//

#include <iostream>
void selectSort(int *arr,int length) {
    for (int i = 0 ; i < length - 1 ; i ++) {
        for ( int j = i + 1; j < length ; j ++) {
            
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
//                arr[i]为数组当中最小的数
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

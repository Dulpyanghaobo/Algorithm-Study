//
//  main.cpp
//  bublieSort
//
//  Created by yhb on 2020/12/23.
//

#include <iostream>
using namespace std;
void bublieSort (int *arr,int length) {
    for (int i = 0 ; i < length -1 ; i ++) {
        for (int j = 0 ; j < length - i -1 ; j ++) {
            if (arr[j] > arr [j + 1]) {
                int temp = arr[j];
                arr[j] = arr [j + 1];
                arr[j + 1] = temp;
//                每次将最后一个数变为最大
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int data []  = {1,23,123,123,21,12};
    bublieSort(data, 6);
    for (int i  = 0 ; i < 6; i ++) {
        cout << data[i]<< "\n";
    }
    cout << endl;
    return 0;
}

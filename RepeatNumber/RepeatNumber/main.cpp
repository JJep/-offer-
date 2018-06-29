//
//  main.cpp
//  RepeatNumber
//
//  Created by Jep Xia on 2018/6/26.
//  Copyright © 2018年 Jep Xia. All rights reserved.
//
/*
 题目一：找出数组中重复的数字
    在一个长度为n的数组里的所有数字都在0～n-1的范围内。数组
    中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字
    重复了几次。请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组
    {2,3,1,0,2,5,3},那么对应的输出是重复的数字2或者3.
 */
#include <iostream>
bool repeatedNumber1(int* array, int count, int* duplication) ;
bool repeatedNumber2(int* array, int count, int* duplication) ;
int main(int argc, const char * argv[]) {
    int i[] = {2,3,1,0,2,5,3};
    int number  ;
    if (repeatedNumber1(i, 7, &number)) {
        printf("%d", number);
    }
    return 0;
}
/*
 题目一：找出数组中重复的数字
 在一个长度为n的数组里的所有数字都在0～n-1的范围内。数组
 中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字
 重复了几次。请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组
 {2,3,1,0,2,5,3},那么对应的输出是重复的数字2或者3.
 */
bool repeatedNumber1(int array[], int count, int* duplication) {
    
    if (array == nullptr) {
        return false;
    }
    
    if (count == 0) {
        return false;
    }
    
    for (int i = 0; i < count; i++) {
        while (array[i] != i) {
            if (array[i] == array[array[i]]) {
                *duplication = array[i];
                return true;
            } else {
                int tmp = array[i];
                array[i] = array[tmp];
                array[tmp] = tmp;
            }
        }
    }
    
    return false;
}
/*
 题目二:不修改数组找出重复的数字
 在一个长度为n+1的数组里的所有数字都在1～n的范围内，所以数组中
 至少有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改
 输入的数组。例如，如果输入长度为8的数组{2,3,5,4,3,2,6,7},那么
 对应的输出是重复的数字2或者3.
 */
bool repeatedNumber2(int array[], int count, int* duplication) {
    if (array == nullptr || count<= 0)
        return false;
    int start = 1;
    int flag = 0;
    int end = count;
    int mid = count / 2;
    for (int i = start; i < mid; i++) {
        for (int j = 0; j < count; j++) {
            if (i == array[j]) {
                flag++;
            }
        }
    }
    if (flag > mid) {
        <#statements#>
    }
    return false;
}

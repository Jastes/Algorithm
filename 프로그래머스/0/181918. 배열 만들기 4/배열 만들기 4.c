#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다. stack 문제네...?
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* stk = (int*)malloc(sizeof(int) * 100000);
    size_t top = 0;
    
    for(size_t i=0; i<arr_len; i++){
        while(top > 0 && stk[top - 1] >= arr[i]) top--;
        stk[top++] = arr[i];
    }
    
    stk = (int *)realloc(stk, sizeof(int) * top);
    
    
    return stk;
}
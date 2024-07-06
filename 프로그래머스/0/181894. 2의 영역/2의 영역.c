#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int start = -1, end = -1;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // int* answer = (int *)malloc(arr_len * sizeof(int)); 

    // check list
    for (size_t i = 0; i < arr_len; i++) {
        if (arr[i] == 2) {
            if (start == -1)    start = i;
            end = i;
        }
    }
    
    
    if (start != -1 && end != -1) {
        size_t len = end - start + 1;
        int* answer = (int*)malloc(sizeof(int) * len);
        
        for (size_t i = 0; i < len; i++)
            answer[i] = arr[start + i];
        
        return answer;
    }
    
    int *answer = (int *)malloc(sizeof(int));
    answer[0] = -1;
    
    
    return answer;
}
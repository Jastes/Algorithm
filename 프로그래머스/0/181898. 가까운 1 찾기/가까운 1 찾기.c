#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len, int idx) {
    int answer = -1;
    
    for(size_t i=idx+1; i < arr_len; i++){ // 문제가 뭔가 이상하다..?
        if(arr[i] == 1){
            answer = i;
            break;
        }
    }
    
    if(arr[idx] == 1)   answer = idx;
        

    return answer;
}
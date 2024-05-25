#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sort_desc(int* arr, size_t len) {
    for(size_t i=0; i<len; i++){
        for(size_t j=0; j<len-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {
    // size_t len = sizeof(int) * emergency_len;
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(emergency_len * sizeof(int));
    int* sort_emergency = (int*)malloc(emergency_len * sizeof(int));
    
    for (size_t i = 0; i < emergency_len; i++) {
        sort_emergency[i] = emergency[i];
    }
    
    sort_desc(sort_emergency, emergency_len);
    
    for (size_t i = 0; i < emergency_len; i++) {
        for (size_t j = 0; j < emergency_len; j++) {
            if (emergency[i] == sort_emergency[j]) {
                answer[i] = j + 1;
                break;
            }
        }
    }
    
    free(sort_emergency);
    return answer;
}
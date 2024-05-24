#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int length = end_num - start_num + 1;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * length);
    
    for(int i=0; i<length; i++){
        answer[i] = start_num+i;
    }
    
    return answer;
}
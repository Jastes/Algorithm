#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (num2 - num1 + 1));
    memset(answer, 0, num2 - num1 + 1);
    
    for (int i = 0; i < num2 - num1 + 1; i++) {
        answer[i] = numbers[num1 + i];
    }
    
    // answer = &numbers;
    // memmove(answer, numbers[num1], num2-num1); //생각해보니까 이렇게 짤 필요 없자나
    
    
    return answer;
}
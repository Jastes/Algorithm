#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 1000);
    size_t count = 0;
    
    while(n != 1){
        answer[count++] = n;
        
        if(n%2 == 0) n /= 2;
        else n = 3 * n + 1;
    }answer[count++] = 1;
    
    answer = (int *)realloc(answer, sizeof(int)*count);
    
    return answer;
}
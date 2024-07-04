#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*(n/k));
    
    for(int i=k, idx=0; i<=n; i+=k)
        answer[idx++] = i;
    
    return answer;
}
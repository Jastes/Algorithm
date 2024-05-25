#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 5);
    sprintf(answer, "%d", age);
    
    size_t len = strlen(answer);
    answer = (char *)realloc(answer, sizeof(char) * len+1);
    
    for(int i=0; i<len; i++)    
        answer[i] = answer[i] - '0' + 'a';
    answer[len] = '\0';
    
    return answer;
}
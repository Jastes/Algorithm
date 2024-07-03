#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(int q, int r, const char* code) {
    int len = strlen(code);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (len/q + 2));
    memset(answer, '\0', (len/q + 2));
    
    for(int i=r, idx=0; i<len; i+=q)
        answer[idx++] = code[i];
    
    return answer;
}
    
    
    
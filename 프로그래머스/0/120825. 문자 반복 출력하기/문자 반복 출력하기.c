#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    size_t length = strlen(my_string);
    size_t new_length = length*n;
    //int length = sizeof(my_string) / sizeof(char);
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*(new_length+1));
    memset(answer, 0, sizeof(char)*(new_length+1));
    
    size_t index = 0;
    for(size_t i=0; i<length; i++){
        for(int j=0; j<n; j++){
            memcpy(&answer[index], &my_string[i], sizeof(char));
            index++;
        }
    }
    
    return answer;
}
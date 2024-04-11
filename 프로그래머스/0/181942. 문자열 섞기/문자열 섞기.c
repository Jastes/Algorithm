#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);
    size_t length = length1 + length2 + 1;   //null bytes
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(length * sizeof(char));
    answer[0] = '\0';
    
    size_t min_length = (length1 < length2) ? length1 : length2;
    
    for(int i=0; i<=min_length; i++){
        strncat(answer, &str1[i], 1);
        strncat(answer, &str2[i], 1);
    }printf("%s", answer);
    
    return answer;
}
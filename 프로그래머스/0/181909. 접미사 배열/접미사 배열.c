#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    size_t len = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char *) * (len + 1));
    
    for(size_t i = 0; i<len; i++){
        answer[i] = (char*)malloc(sizeof(char) * (len + 1));
        strcpy(answer[i], my_string+i);
        answer[i][len] = '\0';
    }
    
    //bouble sort
    for(size_t i=0; i<len-1; i++){
        for(size_t j=i+1; j<len; j++){
            if (strcmp(answer[i], answer[j]) > 0) {
                char* temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
        
    }
    
    return answer;
}
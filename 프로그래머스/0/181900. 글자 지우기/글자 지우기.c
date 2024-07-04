#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    size_t str_len = strlen(my_string);
    size_t answer_len = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*(str_len - indices_len + 1));
    
    //rm_list
    bool rm_str[str_len];
    memset(rm_str, false, str_len);
    
    for(size_t i=0; i<indices_len; i++){
        // int idx = indices[i];
        rm_str[indices[i]] = true;
    }
    
    for(size_t j=0; j < str_len; j++){
        if(!rm_str[j])  answer[answer_len++] = my_string[j];
    }answer[answer_len] = '\0';
    
    return answer;
}
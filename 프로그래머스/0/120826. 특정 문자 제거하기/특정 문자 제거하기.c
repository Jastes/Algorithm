#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * strlen(my_string)+1);
    strcpy(answer, my_string);
    
    char *ptr = strstr(answer, letter); //found string location
    
    while(ptr){
        //By moving the characters after the location forward one by one, the characters are excluded
        memmove(ptr, ptr+1, strlen(ptr)); 
        ptr = strstr(answer, letter);
    } 
    
    return answer;
}
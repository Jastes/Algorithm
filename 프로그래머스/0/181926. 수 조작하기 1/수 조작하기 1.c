#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    char* ptr = control - 1;
    
    while(*++ptr){
        if(*ptr == 'w')   n += 1;
        else if(*ptr == 's')  n -= 1;
        else if(*ptr == 'd')  n += 10;
        else if(*ptr == 'a')  n -= 10;
    }
    
    // for(int i=0; i<strlen(control); i++){
    //     if(control[i] == 'w')   answer += 1;
    //     else if(control[i] == 's')  answer -= 1;
    //     else if(control[i] == 'd')  answer += 10;
    //     else if(control[i] == 'a')  answer -= 10;
    // }
    
    return n;
}
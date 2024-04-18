#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) { 
    char* answer;
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    answer = (char*)malloc(sizeof(char) * strlen(code) + 1);
    memset(answer, 0, strlen(code) + 1);
    int mode = 0, idx = 0;
    
    for(int i = 0; i < strlen(code); i++){
        if(code[i] == '1'){
            mode = 1 - mode;
        }else if ((mode == 0 && i % 2 == 0) || (mode == 1 && i % 2 != 0)) {
            answer[idx++] = code[i];
        }
    }

    //? Why error..?
    /*
    for(int i = 0; i < strlen(code); i++){
        mode = (code[i] == '1') ? 1 : 0;
        if(mode == 0 && i % 2 == 0){
            strcat(answer, &code[i]);
        } else if(mode == 1 && i % 2 != 0) {
            strcat(answer, &code[i]);
        }
    }
    */
    
    return strlen(answer) == 0 ? "EMPTY" : answer;
}
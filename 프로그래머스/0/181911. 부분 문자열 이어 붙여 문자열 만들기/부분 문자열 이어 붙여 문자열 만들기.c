#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// my_strings_len은 배열 my_strings의 길이입니다.
// parts_rows는 2차원 배열 parts의 행 길이, parts_cols는 2차원 배열 parts의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
    size_t total_length = 0;
    for(size_t i = 0; i < parts_rows; i++) total_length += parts[i][1] - parts[i][0] + 1;
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)calloc(total_length, (unsigned)sizeof(char));
    
    
    for(size_t i=0; i<parts_rows; i++){
        int start = parts[i][0], end = parts[i][1];
        
        strncat(answer, my_strings[i] + start, end - start + 1);
    }
    
    return answer;
}
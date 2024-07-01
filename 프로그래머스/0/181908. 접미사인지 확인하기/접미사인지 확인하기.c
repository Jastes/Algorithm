#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    size_t my_len = strlen(my_string), suffix_len = strlen(is_suffix);
    
    if(suffix_len > my_len) 
        return 0;;
    
    
    for(size_t i=0; i<suffix_len; i++)
        if(my_string[my_len - suffix_len + i] != is_suffix[i])   
            return 0;
    
    return 1;
}
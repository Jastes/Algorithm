#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    size_t my_len = strlen(my_string), prefix_len = strlen(is_prefix);
    
    if(prefix_len > my_len) return 0;
    
    for(size_t i=0; i<prefix_len; i++)
        if(my_string[i] != is_prefix[i])
            return 0;
    
    return 1; 
}
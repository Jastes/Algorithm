#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int sum_pow = 0, mul = 1; 
    
    for(int i=0; i<num_list_len; i++){
        sum_pow += num_list[i];
        mul *= num_list[i];
    }sum_pow *= sum_pow;
    
    return (mul < sum_pow) ? 1 : 0;
}
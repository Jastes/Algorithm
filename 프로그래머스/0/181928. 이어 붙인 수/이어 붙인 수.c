#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int even_sum = 0, odd_sum = 0;
    
    for(int i = 0; i < num_list_len; i++) {
        if(num_list[i] % 2 == 0) {
            even_sum = even_sum * 10 + num_list[i];
        } else {
            odd_sum = odd_sum * 10 + num_list[i];
        }
    }
    
    return even_sum + odd_sum;
    
    
//     char term[2], even_num[11] = "", odd_num[11] = "";
    
//     for(int i=0; i<num_list_len; i++){
//         if(i%2 == 0 && i != 0){
//             sprintf(term, "%d", num_list[i]);
//             strcat(even_num, term);
//         }else{
//             sprintf(term, "%d", num_list[i]);
//             strcat(odd_num, term);
//         }
//     }
//     return atoi(even_num) + atoi(odd_num);
}
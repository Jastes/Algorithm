#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// int each_digit_div(int num){ ? Strangely, why can't I? maybe const char??
//     int sum = 0;
    
//     while(num > 0){
//         sum += num%10;
//         num /= 10;
//     }

//     return sum % 9;
// } 

int each_digit_div(const char* number){
    int i = 0, sum = 0;
    
    for(int i=0; number[i] != '\0'; i++)  sum += number[i] - '0';
    
    return sum % 9;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* number) {
    int answer = each_digit_div(number);
    //int num = atoi(number);
    
    // if(number[0] != '-'){
    //     answer = each_digit_div(number);
    // }
    
    return answer;
}
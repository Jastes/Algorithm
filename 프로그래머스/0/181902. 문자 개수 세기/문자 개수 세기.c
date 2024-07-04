#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    int len = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int *)malloc(sizeof(int) * 52); //alphabet('A'-'Z' ~ 'a'-'z') count
    memset(answer, 0, sizeof(int) * 52);
    
    for(int i=0; i<len; i++){
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            answer[(int)my_string[i] - 'A']++;
        else if(my_string[i] >= 'a' && my_string[i] <= 'z')
            answer[(int)my_string[i] - 'a' + 26]++;
    }
    
    
    return answer;
}
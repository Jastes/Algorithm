#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_valid_num(int num){ //only num 0, 5
    int digit;
    
    if(num == 0) return false;
    
    while(num > 0){
        digit = num % 10;
        
        if(digit != 5 && digit != 0) return false;
        num /= 10;
    }return true;
}

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * r-l+1);
    memset(answer, '0', sizeof(int) * r-l+1);
    int cnt=0;
    
    for(int i=l; i<=r; i++){
        if(is_valid_num(i)){
            answer[cnt++] = i;
        }
    }
    
    if(cnt == 0){
        answer = (int *)realloc(answer, sizeof(int));
        answer[0] = -1;
    }else{
        answer = (int *)realloc(answer, sizeof(int)*cnt);
    }
    
    
    return answer;
}
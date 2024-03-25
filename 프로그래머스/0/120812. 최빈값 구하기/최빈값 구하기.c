#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int freq = 1; //Frequency counter
    int cnt = 0; //Accumulated Frequency Counter
    
    if(array_len == 1) return array[0];
    
    //Roof
    for(int i=0; i<array_len-1; i++){
        freq = 1;
        
        for(int j=i+1; j<array_len; j++){
            if(array[i]==array[j]) freq++;
            if(freq > cnt){
                cnt = freq;
                answer = array[i];
            }
        }if(freq == cnt && answer != array[i]) answer = -1;
    }

    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int a = slicer[0], b = slicer[1], c = slicer[2];
    int idx = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*num_list_len); //max_length
    
    switch (n) {
        case 1:
            for (size_t i = 0; i < b+1; i++)
                answer[idx++] = num_list[i];
            break;
        case 2:
            for (size_t i = a; i < num_list_len; i++)
                answer[idx++] = num_list[i];
            break;
        case 3:
            for (size_t i = a; i < b+1; i++)
                answer[idx++] = num_list[i];
            break;
        case 4:
            for (size_t i = a; i < b+1; i += c)
                answer[idx++] = num_list[i];
            break;
    }
    
    answer = (int *)realloc(answer, idx*sizeof(int));
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    // Allocate memory for the answer array, initially as a copy of arr
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    for (size_t i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }

    size_t current_len = arr_len;  // This will track the current length of the modified array

    for (size_t i = 0; i < query_len; i++) {
        int idx = query[i];
        
        if (i % 2 == 0) {
            // Even index query: Keep elements from start to idx (inclusive)
            current_len = idx + 1;
        } else {
            // Odd index query: Keep elements from idx to the end
            for (size_t j = 0; j + idx < current_len; j++) {
                answer[j] = answer[j + idx];
            }
            current_len = current_len - idx;
        }
    }
    
    // Reallocate answer to the final size of current_len
    answer = (int*)realloc(answer, sizeof(int) * current_len);
    
    return answer;  // Return the final modified array
}
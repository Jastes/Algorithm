#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void sort(int *arr, size_t arr_len){
    int temp;
    
    for(size_t i=0; i<arr_len; i++){
        for(size_t j=i+1; j<arr_len; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4] = {a, b, c, d};
    sort(arr, 4);
    
    //the frist condition
    if(arr[0] == arr[3]) answer = 1111 * arr[0];
    //the seconde condition
    else if(arr[0] ==  arr[2] || arr[1] == arr[3]){
        int p = arr[1]; //It overlaps
        int q = (arr[0] == arr[2]) ? arr[3] : arr[0];
        
        answer = pow((10 * p + q), 2);
    }
    //the third condition
    else if(arr[0] == arr[1] && arr[2] == arr[3]){
        int p = arr[0];
        int q = arr[2];
        
        answer = (p+q) * abs(p - q); //absolute value from math.h
    }
    //the fourth condition
    else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[3]){
        int q, r;
        
        if(arr[0] == arr[1]){
            q = arr[2];
            r = arr[3];
        }else if(arr[1] == arr[2]){
            q = arr[0];
            r = arr[3];
        }else{
            q = arr[0];
            r = arr[1]; //Is the criterion for r the largest number?
        }
        
        answer = q * r;
    }
    //the last condition
    else{
        answer = arr[0];   
    }
    
    
    return answer;
}
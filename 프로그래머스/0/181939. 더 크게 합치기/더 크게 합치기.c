#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int concat(int a, int b){
    int temp = b;
    
    while(temp > 0){
        a *= 10;
        temp /= 10;
    }return a+b;
}

int solution(int a, int b) {    
    int ab = concat(a, b);
    int ba = concat(b, a);
    
    return (ab == ba) ? ab : (ab > ba) ? ab : ba;
}
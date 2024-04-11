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

/*
    //자릿수 구하는 코드.. 확인 부탁함
    int a1 = floor(log10(a)+1), b1 = floor(log10(b)+1);
    int num1 = a*pow(10, b1) + b;
    int num2 = b*pow(10, a1) + a;
    int answer = (num1>num2) ? num1 : num2;
    
*/

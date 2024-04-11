#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b) {    
    int ab = a * pow(10, floor(log10(b) + 1)) + b;
    int mul_ab = 2 * a * b;
    
    return (ab == mul_ab) ? ab : (ab > mul_ab) ? ab : mul_ab;
}
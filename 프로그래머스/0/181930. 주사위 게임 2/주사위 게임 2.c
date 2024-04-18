#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b, int c) {
    int answer = a+b+c;
    
    /*
    if(a != b && b != c && a != c)
        answer = a+b+c;
    if((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
        answer = (a+b+c)*(a*a + b*b + c*c);
    if(a == b && b == c)
        answer = (a+b+c) * (a*a + b*b + c*c) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
    */
    
    if(a == b || b == c || a == c){
        answer *= (a*a + b*b + c*c);
        if(a == b && b == c){
            answer *= (pow(a, 3) + pow(b, 3) + pow(c, 3));
        }
    }
    
    return answer;
}
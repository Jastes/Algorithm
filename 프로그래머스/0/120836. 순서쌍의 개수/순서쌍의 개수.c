#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=sqrt(n); i++) {
        if(n % i == 0) {
            if (i == n / i) answer++;
            else answer += 2;
        }
    }
    
    
    return answer;
}


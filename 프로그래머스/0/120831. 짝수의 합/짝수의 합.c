#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*

let S = 1 + 2 + 3 + ... + N

2 * S = (1 + 2 + ... + N) + (N + N - 1 + ... + 2 + 1)
——————————————————

Now rearrange the sums by pairing the first, second,... elements from each parentheses:

2 * S = (1 + N) + (2 + N - 1) + (3 + N - 2) + ... + (N - 1 + 2) + (N + 1) 
= (N + 1) + (N + 1) + ... + (N + 1) 
= N * (N + 1)
——————————————————

S = N * (N + 1) / 2 :D

c.f. https://www.reddit.com/r/mathematics/comments/v3tgpx/dont_understand_why_n_n_1_2/?rdt=52907

*/

int solution(int n) {
    int l = n/2;
    int answer = (l+1)*l;

    return answer;
}
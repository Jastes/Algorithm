/*

문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

#Input
4
1 3 5 7

#OutPut
3

*/

#include <stdio.h>
#include <stdlib.h>

int prime(int x){
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0)
            return 0;
    }return (x > 1) ? 1 : 0;
}

int main(){
	int N, prime_cnt=0;

    scanf("%d", &N);
    int *arr = (int*)malloc(sizeof(int) * N);
    for(int i=0; i<N; i++)  scanf("%d", &arr[i]);


	for (int i = 0; i <= N; i++){
        if (prime(arr[i]) == 1) prime_cnt++;
    }
		
    printf("%d", prime_cnt);
    free(arr);
}


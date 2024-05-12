#include <stdio.h>

int main(){
    /*
    //My_Solve.. but error.. 시간관계상 다른 사람의 풀이를 확인함(20분 초과)
    int n;

    scanf("%d", &n);
    
    for(int i=0; i<=n; i++){    //top
        for(int j=0; j<i; j++){ //left
            printf("*");
        }for(int j=0; j<2*(n-i); j++){ //empty
            printf(" ");
        }for(int j=0; j<i; j++){    //right
            printf("*");
        }printf("\n");
    }

    for(int i=n-1; i>=1; i--){ //bottem
        for(int j=0; j<i; j++){ //left
            printf("*");
        }for(int j=0; j<2*(n-i); j++){  //empty
            printf(" ");
        }for(int j=0; j<i; j++){    //right
            printf("*");
        }printf("\n");
    }
    */

    int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 0; j--) printf("*");
		for (int k = 2 * n - 2 * i; k > 0;k--) printf(" ");
		for (int l = i; l > 0; l--)printf("*");
		printf("\n");
	}
	for (int i = n-1; i > 0; i--) {
		for (int j = i; j > 0; j--)printf("*");
		for (int k = 2 * n - 2 * i; k > 0; k--)printf(" ");
		for (int l = i; l > 0; l--)printf("*");
		printf("\n");
	}
}
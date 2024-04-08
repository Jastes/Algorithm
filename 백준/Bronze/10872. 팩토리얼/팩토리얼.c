#include <stdio.h>
int fac(int n){
  if(n<=1)
    return 1;
  return fac(n-1)*n;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", fac(n));
}
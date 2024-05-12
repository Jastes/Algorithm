#include <stdio.h>

int main(){
    //case 1

    char str[101];

    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

   //case 2
    /*
    char str[101];

    while(scanf("[^\n]s", str) != EOF){
        // puts(str);
        printf("%s\n", str);
    }
    */
}
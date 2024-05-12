#include <stdio.h>

int main(){
    //case 1
    
    char str[101];

    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }
    

   //case 2 - NeverBeNull
    /*
    char str[101];

    while(scanf("[^\n]s", str) != EOF){
        // puts(str);
        printf("%s\n", str);
    }
    */

   //case 3 - Segfault
   /*
    char c;

    while(scanf("%c", &c) != EOF){
        putchar(c);
    }
    */

   //case 4 - BoF
   /*
    char *s;
    while(gets(&s))  puts(&s);
    */
}
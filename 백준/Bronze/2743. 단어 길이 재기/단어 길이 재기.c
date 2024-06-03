#include <stdio.h>

int main(){
    //valiable define
    int len = 0;
    char str[102];

    //input value(data)
    fgets(str, sizeof(str), stdin);


    //main logic(Algorithm)
    while (str[len] != '\n' && str[len] != '\0') {
        len++;
    }

    //output(result)
    printf("%d", len); 
}

//https://www.acmicpc.net/board/view/134282
//https://www.acmicpc.net/board/view/119332